
// MFCEcp3.2View.cpp : CMFCEcp32View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCEcp3.2.h"
#endif

#include "MFCEcp3.2Doc.h"
#include "MFCEcp3.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp32View

IMPLEMENT_DYNCREATE(CMFCEcp32View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp32View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCEcp32View ����/����

CMFCEcp32View::CMFCEcp32View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCEcp32View::~CMFCEcp32View()
{
}

BOOL CMFCEcp32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCEcp32View ����

void CMFCEcp32View::OnDraw(CDC* pDC)
{
	CMFCEcp32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CMFCEcp32View ���

#ifdef _DEBUG
void CMFCEcp32View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp32Doc* CMFCEcp32View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp32Doc)));
	return (CMFCEcp32Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp32View ��Ϣ�������


void CMFCEcp32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CDC* pDC;
	CMFCEcp32Doc* pDoc = GetDocument();
	int A, B;
	CString s;
	CClientDC dc(this);
	s.Format(_T("A+B=%d"), pDoc->A + pDoc->B);
	dc.TextOutW(200, 300, s);
	CView::OnLButtonDown(nFlags, point);
}
