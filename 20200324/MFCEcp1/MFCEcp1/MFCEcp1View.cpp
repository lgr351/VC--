
// MFCEcp1View.cpp : CMFCEcp1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCEcp1.h"
#endif

#include "MFCEcp1Doc.h"
#include "MFCEcp1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp1View

IMPLEMENT_DYNCREATE(CMFCEcp1View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp1View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMFCEcp1View::OnShowname)
END_MESSAGE_MAP()

// CMFCEcp1View ����/����

CMFCEcp1View::CMFCEcp1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCEcp1View::~CMFCEcp1View()
{
}

BOOL CMFCEcp1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCEcp1View ����

void CMFCEcp1View::OnDraw(CDC* /*pDC*/)
{
	CMFCEcp1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCEcp1View ���

#ifdef _DEBUG
void CMFCEcp1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp1Doc* CMFCEcp1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp1Doc)));
	return (CMFCEcp1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp1View ��Ϣ�������


void CMFCEcp1View::OnShowname()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CString s;
	s.Format(_T("������"));
	dc.TextOutW(200, 200, s);
}
