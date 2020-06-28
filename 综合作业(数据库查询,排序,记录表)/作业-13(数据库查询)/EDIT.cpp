// EDIT.cpp : 实现文件
//

#include "stdafx.h"
#include "作业-13(数据库查询).h"
#include "EDIT.h"
#include "afxdialogex.h"


// EDIT 对话框

IMPLEMENT_DYNAMIC(EDIT, CDialogEx)

EDIT::EDIT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
	, yy(_T(""))
{

}

EDIT::~EDIT()
{
}

void EDIT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, yy);
}


BEGIN_MESSAGE_MAP(EDIT, CDialogEx)
END_MESSAGE_MAP()


// EDIT 消息处理程序
