
// ��ҵ6-��ϰ2View.cpp : C��ҵ6��ϰ2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ6-��ϰ2.h"
#endif

#include "��ҵ6-��ϰ2Doc.h"
#include "��ҵ6-��ϰ2View.h"
#include "change.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ6��ϰ2View

IMPLEMENT_DYNCREATE(C��ҵ6��ϰ2View, CView)

BEGIN_MESSAGE_MAP(C��ҵ6��ϰ2View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_CHANGE, &C��ҵ6��ϰ2View::OnChange)
END_MESSAGE_MAP()

// C��ҵ6��ϰ2View ����/����

C��ҵ6��ϰ2View::C��ҵ6��ϰ2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ6��ϰ2View::~C��ҵ6��ϰ2View()
{
}

BOOL C��ҵ6��ϰ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ6��ϰ2View ����

void C��ҵ6��ϰ2View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ6��ϰ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

void C��ҵ6��ϰ2View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C��ҵ6��ϰ2View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C��ҵ6��ϰ2View ���

#ifdef _DEBUG
void C��ҵ6��ϰ2View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ6��ϰ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ6��ϰ2Doc* C��ҵ6��ϰ2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ6��ϰ2Doc)));
	return (C��ҵ6��ϰ2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ6��ϰ2View ��Ϣ�������


void C��ҵ6��ϰ2View::OnChange()
{
	change *cr = new change;
	cr->Create(IDD_DIALOG1);
	cr->ShowWindow(1);

	// TODO: �ڴ���������������
}
