// student.cpp : 实现文件
//

#include "stdafx.h"
#include "作业-13(数据库查询).h"
#include "student.h"
#include "afxdialogex.h"


// student 对话框

IMPLEMENT_DYNAMIC(student, CDialogEx)

student::student(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, id(0)
	, name(_T(""))
	, age(0)
	, money(0)
	, phone(0)
{

}

student::~student()
{
}

void student::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, id);
	DDX_Text(pDX, IDC_EDIT2, name);
	DDX_Text(pDX, IDC_EDIT3, age);
	DDX_Text(pDX, IDC_EDIT4, money);
	DDX_Text(pDX, IDC_EDIT5, phone);
}


BEGIN_MESSAGE_MAP(student, CDialogEx)
END_MESSAGE_MAP()


// student 消息处理程序
