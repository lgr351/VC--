
// MFCEcp3.3View.cpp : CMFCEcp33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCEcp3.3.h"
#endif

#include "MFCEcp3.3Doc.h"
#include "MFCEcp3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp33View

IMPLEMENT_DYNCREATE(CMFCEcp33View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp33View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCEcp33View ����/����

CMFCEcp33View::CMFCEcp33View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCEcp33View::~CMFCEcp33View()
{
}

BOOL CMFCEcp33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCEcp33View ����

void CMFCEcp33View::OnDraw(CDC* /*pDC*/)
{
	CMFCEcp33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr;
}


// CMFCEcp33View ���

#ifdef _DEBUG
void CMFCEcp33View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp33Doc* CMFCEcp33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp33Doc)));
	return (CMFCEcp33Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp33View ��Ϣ�������


void CMFCEcp33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect cr1, cr2, cr3;
	int r1 = rand() % 50 + 5;
	int r2 = rand() % 50 + 5;
	
	CString s,s1, s2;
	if (point.x <= cr1.top&&point.x >= cr1.bottom&&point.y <= cr1.right&&point.y >= cr1.left)
	{
		s.Format(_T("%d"), s1);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x <= cr2.top&&point.x >= cr2.bottom&&point.y <= cr2.right&&point.y >= cr2.left)
	{
		s.Format(_T("%d"), s2);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x <= cr3.top&&point.x >= cr3.bottom&&point.y <= cr3.right&&point.y >= cr3.left)
	{
		s.Format(_T("%d"), s1 + s2);
		dc.TextOutW(point.x, point.y, s);
	}
	else
	{
		s.Format(_T("��Ч��"));
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnLButtonDown(nFlags, point);
}
