
// test1View.cpp : Ctest1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test1.h"
#endif

#include "test1Doc.h"
#include "test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "w32.h"

// Ctest1View

IMPLEMENT_DYNCREATE(Ctest1View, CView)

BEGIN_MESSAGE_MAP(Ctest1View, CView)
END_MESSAGE_MAP()

// Ctest1View ����/����

Ctest1View::Ctest1View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest1View::~Ctest1View()
{
}

BOOL Ctest1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest1View ����

void Ctest1View::OnDraw(CDC* pDC)
{
	Ctest1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	int m;
	m = factorial(5);
	s.Format(_T("%d"), m);
	pDC->TextOutW(20, 30, s);
}


// Ctest1View ���

#ifdef _DEBUG
void Ctest1View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest1Doc* Ctest1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest1Doc)));
	return (Ctest1Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest1View ��Ϣ�������
