
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

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp2View

IMPLEMENT_DYNCREATE(CMFCEcp2View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp2View, CView)
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

void CMFCEcp2View::OnDraw(CDC* pDC)
{
	CMFCEcp2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;

	pDC->TextOutW(200, 200, pDoc->S);
	s.Format(_T("%d", pDoc->A));
	pDC->TextOutW(200, 300, s);
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
