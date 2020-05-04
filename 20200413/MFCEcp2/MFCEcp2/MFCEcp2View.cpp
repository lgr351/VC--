
// MFCEcp2View.cpp : CMFCEcp2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCEcp2.h"
#endif

#include "MFCEcp2Doc.h"
#include "MFCEcp2View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp2View

IMPLEMENT_DYNCREATE(CMFCEcp2View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp2View, CView)
	ON_COMMAND(ID_POPOUT, &CMFCEcp2View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCEcp2View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CMFCEcp2View ����/����

CMFCEcp2View::CMFCEcp2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCEcp2View::~CMFCEcp2View()
{
}

BOOL CMFCEcp2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCEcp2View ����

void CMFCEcp2View::OnDraw(CDC* /*pDC*/)
{
	CMFCEcp2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCEcp2View ���

#ifdef _DEBUG
void CMFCEcp2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp2Doc* CMFCEcp2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp2Doc)));
	return (CMFCEcp2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp2View ��Ϣ�������


void CMFCEcp2View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDialog dlg;
	
	int t=dlg.DoModal();
	if (t == IDOK)
	{
		int X, Y, Z;
		X = dlg.x;
		Y = dlg.y;
		Z = dlg.z;
		Z = X + Y;
	}
}


void CMFCEcp2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDialog *pD=new MyDialog;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}


void CMFCEcp2View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MyDialog dlg;

	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int X, Y, Z;
		X = dlg.x;
		Y = dlg.y;
		Z = dlg.z;
		Z = X + Y;
	}
}
