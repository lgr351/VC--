
// ������ϰ2View.cpp : C������ϰ2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ϰ2.h"
#endif

#include "������ϰ2Doc.h"
#include "������ϰ2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ϰ2View

IMPLEMENT_DYNCREATE(C������ϰ2View, CView)

BEGIN_MESSAGE_MAP(C������ϰ2View, CView)
END_MESSAGE_MAP()

// C������ϰ2View ����/����

C������ϰ2View::C������ϰ2View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ϰ2View::~C������ϰ2View()
{
}

BOOL C������ϰ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ϰ2View ����

void C������ϰ2View::OnDraw(CDC* /*pDC*/)
{
	C������ϰ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ϰ2View ���

#ifdef _DEBUG
void C������ϰ2View::AssertValid() const
{
	CView::AssertValid();
}

void C������ϰ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ϰ2Doc* C������ϰ2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ϰ2Doc)));
	return (C������ϰ2Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ϰ2View ��Ϣ�������
