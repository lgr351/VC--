// ADD.cpp : 实现文件
//

#include "stdafx.h"
#include "作业12-(数据库管理).h"
#include "ADD.h"
#include "afxdialogex.h"


// ADD 对话框

IMPLEMENT_DYNAMIC(ADD, CDialogEx)

ADD::ADD(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, ID(0)
	, name(_T(""))
	, number(0)
	, age(0)
	, phone(0)
{

}

ADD::~ADD()
{
}

void ADD::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ID);
	DDX_Text(pDX, IDC_EDIT2, name);
	DDX_Text(pDX, IDC_EDIT3, number);
	DDX_Text(pDX, IDC_EDIT4, age);
	DDX_Text(pDX, IDC_EDIT5, phone);
}


BEGIN_MESSAGE_MAP(ADD, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &ADD::OnEnChangeEdit1)
END_MESSAGE_MAP()


// ADD 消息处理程序


void ADD::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
