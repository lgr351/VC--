
// MFCApplication1View.cpp : CMFCApplication1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication1.h"
#endif

#include "MFCApplication1Doc.h"
#include "MFCApplication1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1View

IMPLEMENT_DYNCREATE(CMFCApplication1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1View, CView)
	ON_COMMAND(ID_SHOWCIRCLE, &CMFCApplication1View::OnShowcircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCApplication1View ����/����

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: �ڴ˴���ӹ������
	N = 10;
	set = true;
	CRect cr;
	GetClientRect(&cr);
	int h = (cr.bottom + cr.top) / 2;
	int m = (cr.left + cr.right) / 2;
	CRect rect(m - 50, h - 50, m + 50, h + 50);
	crect.Add(rect);
}

CMFCApplication1View::~CMFCApplication1View()
{
}

BOOL CMFCApplication1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View ����

void CMFCApplication1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication1View ���

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View ��Ϣ�������


void CMFCApplication1View::OnShowcircle()
{
	// TODO: �ڴ���������������
	CDC* pDC;
	CRect cr;
	GetClientRect(&cr);
	CClientDC dc(this);
	int h = (cr.bottom + cr.top) / 2;
	int m = (cr.left + cr.right) / 2;
	CRect rect(m - 50, h - 50, m + 50, h + 50);
	
	dc.Rectangle(rect);
	if (set)
	{
		SetTimer(1, 500, NULL);
		set = false;
	}
}


void CMFCApplication1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	crect[i].bottom += 10;
	crect[i].top -= 10;
	crect[i].left -= 10;
	crect[i].right += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
