// change.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��ҵ6-��ϰ2.h"
#include "change.h"
#include "afxdialogex.h"


// change �Ի���

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


// change ��Ϣ�������


void change::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change::OnBnClickedButton1()
{    
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CString R;
	R = x;
	x = y;
	y = R;
	UpdateData(false);




}
