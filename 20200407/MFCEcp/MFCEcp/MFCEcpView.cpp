
// MFCEcpView.cpp : CMFCEcpView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCEcp.h"
#endif

#include "MFCEcpDoc.h"
#include "MFCEcpView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcpView

IMPLEMENT_DYNCREATE(CMFCEcpView, CView)

BEGIN_MESSAGE_MAP(CMFCEcpView, CView)
END_MESSAGE_MAP()

// CMFCEcpView ����/����

CMFCEcpView::CMFCEcpView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCEcpView::~CMFCEcpView()
{
}

BOOL CMFCEcpView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCEcpView ����

void CMFCEcpView::OnDraw(CDC* /*pDC*/)
{
	CMFCEcpDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCEcpView ���

#ifdef _DEBUG
void CMFCEcpView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcpView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcpDoc* CMFCEcpView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcpDoc)));
	return (CMFCEcpDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcpView ��Ϣ�������
