
// MFCExp1View.cpp : CMFCExp1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExp1.h"
#endif

#include "MFCExp1Doc.h"
#include "MFCExp1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExp1View

IMPLEMENT_DYNCREATE(CMFCExp1View, CView)

BEGIN_MESSAGE_MAP(CMFCExp1View, CView)
END_MESSAGE_MAP()

// CMFCExp1View ����/����

CMFCExp1View::CMFCExp1View()
{
	// TODO: �ڴ˴���ӹ������
	

}

CMFCExp1View::~CMFCExp1View()
{
}

BOOL CMFCExp1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExp1View ����

void CMFCExp1View::OnDraw(CDC* pDC)
{
	CMFCExp1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString S;
	S.Format(_T("���������ء�"));
	pDC->TextOutW(200,200,S);
	int A = 20;
	CString s;
	s.Format(_T("%d"),A);
	pDC->TextOutW(200, 300, s);
}


// CMFCExp1View ���

#ifdef _DEBUG
void CMFCExp1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExp1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExp1Doc* CMFCExp1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp1Doc)));
	return (CMFCExp1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp1View ��Ϣ�������
