
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
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
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
	pDC->Rectangle(pDoc->cr);
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


void CMFCEcp2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCEcp2Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <=(clientRec.right-clientRec.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <=(clientRec.bottom-clientRec.top))
		{
			pDoc->cr.top += 5;
			pDoc->cr.bottom += 5;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFCEcp2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CMFCEcp2Doc* pDoc = GetDocument();
	dc.Rectangle(pDoc->cr);
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
