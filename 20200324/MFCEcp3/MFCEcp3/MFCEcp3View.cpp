
// MFCEcp3View.cpp : CMFCEcp3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCEcp3.h"
#endif

#include "MFCEcp3Doc.h"
#include "MFCEcp3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp3View

IMPLEMENT_DYNCREATE(CMFCEcp3View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp3View, CView)
	ON_COMMAND(ID_SHOWLINE, &CMFCEcp3View::OnShowline)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCEcp3View ����/����

CMFCEcp3View::CMFCEcp3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCEcp3View::~CMFCEcp3View()
{
}

BOOL CMFCEcp3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCEcp3View ����

void CMFCEcp3View::OnDraw(CDC* pDC)
{
	CMFCEcp3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CPoint point;
	pDC->MoveTo(point);
	pDC->LineTo(point);
}


// CMFCEcp3View ���

#ifdef _DEBUG
void CMFCEcp3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp3Doc* CMFCEcp3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp3Doc)));
	return (CMFCEcp3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp3View ��Ϣ�������


void CMFCEcp3View::OnShowline()
{
	// TODO: �ڴ���������������
	CPoint point;
	CMFCEcp3Doc* pDoc = GetDocument();
	CDC *pDC;
	(pDoc->point).x = point.x;
	(pDoc->point).y = point.y;
	
}

