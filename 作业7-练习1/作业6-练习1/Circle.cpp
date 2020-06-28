// Circle.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��ҵ6-��ϰ1.h"
#include "Circle.h"
#include "afxdialogex.h"


// Circle �Ի���

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


// Circle ��Ϣ�������


void Circle::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Circle::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CRect Q(x - r, y - r, x + r, y + r);
	GetDC()->Ellipse(Q);
	UpdateData(false);
}
