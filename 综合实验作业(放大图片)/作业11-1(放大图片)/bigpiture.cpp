// bigpiture.cpp : 实现文件
//

#include "stdafx.h"
#include "作业11-1(放大图片).h"
#include "bigpiture.h"
#include "afxdialogex.h"



// bigpiture 对话框

IMPLEMENT_DYNAMIC(bigpiture, CDialogEx)

bigpiture::bigpiture(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

bigpiture::~bigpiture()
{
}

void bigpiture::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

void bigpiture::foo(CString filename)
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


BEGIN_MESSAGE_MAP(bigpiture, CDialogEx)

	ON_WM_PAINT()
END_MESSAGE_MAP()


// bigpiture 消息处理程序







void bigpiture::OnPaint()
{
	CPaintDC dc(this); 
	foo(fil);
	
}
