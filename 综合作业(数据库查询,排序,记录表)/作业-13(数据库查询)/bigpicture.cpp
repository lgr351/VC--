// bigpicture.cpp : 实现文件
//

#include "stdafx.h"
#include "作业-13(数据库查询).h"
#include "bigpicture.h"
#include "afxdialogex.h"


// bigpicture 对话框

IMPLEMENT_DYNAMIC(bigpicture, CDialogEx)

bigpicture::bigpicture(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

bigpicture::~bigpicture()
{
}

void bigpicture::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

void bigpicture::foo(CString filename)
{
	CImage img;
	img.Load(filename);
	int sx, sy, w, h;
	CRect rect;
	CDC *pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio> img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;

	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);

}


BEGIN_MESSAGE_MAP(bigpicture, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// bigpicture 消息处理程序


void bigpicture::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	foo(fil);
}
