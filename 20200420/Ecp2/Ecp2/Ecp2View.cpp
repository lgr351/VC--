
// Ecp2View.cpp : CEcp2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Ecp2.h"
#endif

#include "Ecp2Doc.h"
#include "Ecp2View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEcp2View

IMPLEMENT_DYNCREATE(CEcp2View, CView)

BEGIN_MESSAGE_MAP(CEcp2View, CView)
	ON_COMMAND(ID_POPOUT, &CEcp2View::OnPopout)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CEcp2View ����/����

CEcp2View::CEcp2View()
{
	// TODO: �ڴ˴���ӹ������

}

CEcp2View::~CEcp2View()
{
}

BOOL CEcp2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEcp2View ����

void CEcp2View::OnDraw(CDC* /*pDC*/)
{
	CEcp2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEcp2View ���

#ifdef _DEBUG
void CEcp2View::AssertValid() const
{
	CView::AssertValid();
}

void CEcp2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEcp2Doc* CEcp2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEcp2Doc)));
	return (CEcp2Doc*)m_pDocument;
}
#endif //_DEBUG


// CEcp2View ��Ϣ�������


void CEcp2View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg md;
	int t = md.DoModal();
	CClientDC dc(this);
	if (t == IDOK)
	{
		int X, Y, A, B;
		X = md.x;
		Y = md.y;
		A = md.a;
		B = md.b;
		CRect cr(X - A, Y - B, X + A, Y + B);
		dc.Ellipse(cr);
	}
}


void CEcp2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr(point.x,point.y,point.x,point.y);
	CClientDC dc(this);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}


void CEcp2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
}


void CEcp2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
}
