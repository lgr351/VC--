
// MFCEcp3.1View.cpp : CMFCEcp31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCEcp3.1.h"
#endif

#include "MFCEcp3.1Doc.h"
#include "MFCEcp3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp31View

IMPLEMENT_DYNCREATE(CMFCEcp31View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCEcp31View ����/����

CMFCEcp31View::CMFCEcp31View()
{
	// TODO: �ڴ˴���ӹ������
	
}

CMFCEcp31View::~CMFCEcp31View()
{
}

BOOL CMFCEcp31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCEcp31View ����

void CMFCEcp31View::OnDraw(CDC* pDC)
{
	CMFCEcp31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CMFCEcp31View ���

#ifdef _DEBUG
void CMFCEcp31View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp31Doc* CMFCEcp31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp31Doc)));
	return (CMFCEcp31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp31View ��Ϣ�������


void CMFCEcp31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s;
	s = "����������£�";
	dc.TextOutW(200,200,s);
	
	CView::OnLButtonDown(nFlags, point);
}


void CMFCEcp31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s ;
	s = "�������̧��";
	dc.TextOutW(200,300,s);
	CView::OnLButtonUp(nFlags, point);
}
