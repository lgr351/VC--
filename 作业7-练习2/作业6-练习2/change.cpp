// change.cpp : 实现文件
//

#include "stdafx.h"
#include "作业6-练习2.h"
#include "change.h"
#include "afxdialogex.h"


// change 对话框

IMPLEMENT_DYNAMIC(change, CDialogEx)

change::change(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(_T(""))
{

}

change::~change()
{
}

void change::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MaxChars(pDX, x, 1000);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MaxChars(pDX, y, 10000);
}


BEGIN_MESSAGE_MAP(change, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &change::OnBnClickedButton1)
END_MESSAGE_MAP()


// change 消息处理程序


void change::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void change::OnBnClickedButton1()
{    
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	CString R;
	R = x;
	x = y;
	y = R;
	UpdateData(false);




}
