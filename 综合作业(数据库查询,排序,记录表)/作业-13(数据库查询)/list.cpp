// list.cpp : 实现文件
//

#include "stdafx.h"
#include "作业-13(数据库查询).h"
#include "list.h"
#include "afxdialogex.h"


// list 对话框

IMPLEMENT_DYNAMIC(list, CDialogEx)

list::list(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)

	, xx(_T(""))
{

}

list::~list()
{
}

void list::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_LBString(pDX, IDC_EDIT1, xx);
	DDX_Text(pDX, IDC_EDIT1, xx);
}


BEGIN_MESSAGE_MAP(list, CDialogEx)
END_MESSAGE_MAP()


// list 消息处理程序
