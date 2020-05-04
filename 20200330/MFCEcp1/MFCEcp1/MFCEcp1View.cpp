
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
	ON_COMMAND(ID_FILE_OPEN, &CMFCEcp1View::OnFileOpen)
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


void CMFCEcp1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CImage img;
	CFileDialog cfd(true);
	CClientDC dc(this);
	int r = cfd.DoModal();
	CString filename = cfd.GetPathName();
	img.Load(filename);
	dc.TextOutW(20, 20, filename);
	int w, h, sx, sy;
	if (r == IDOK)
	{
		CRect rect;
		GetClientRect(&rect);
		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		
		w = img.GetWidth();
		h = img.GetHeight();
		sx = (rect.Width() - img.GetWidth()) / 2;
		sy = (rect.Height() - img.GetHeight()) / 2;
		
	}
	img.Draw(dc.m_hDC, sx, sy, w, h);
}
