// Circle.cpp : 实现文件
//

#include "stdafx.h"
#include "作业6-练习1.h"
#include "Circle.h"
#include "afxdialogex.h"


// Circle 对话框

IMPLEMENT_DYNAMIC(Circle, CDialogEx)

Circle::Circle(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, r(0)
	, x(0)
	, y(0)
{

}

Circle::~Circle()
{
}

void Circle::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r);
	DDV_MinMaxInt(pDX, r, 50, 500);
	DDX_Text(pDX, IDC_EDIT2, x);
	DDV_MinMaxInt(pDX, x, 0, 2000);
	DDX_Text(pDX, IDC_EDIT3, y);
	DDV_MinMaxInt(pDX, y, 0, 2000);
}


BEGIN_MESSAGE_MAP(Circle, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &Circle::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &Circle::OnBnClickedButton1)
END_MESSAGE_MAP()


// Circle 消息处理程序


void Circle::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void Circle::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	CRect Q(x - r, y - r, x + r, y + r);
	GetDC()->Ellipse(Q);
	UpdateData(false);
}
