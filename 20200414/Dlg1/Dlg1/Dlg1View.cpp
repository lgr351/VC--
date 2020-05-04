
// Dlg1View.cpp : CDlg1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg1.h"
#endif

#include "Dlg1Doc.h"
#include "Dlg1View.h"
#include "MyDlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg1View

IMPLEMENT_DYNCREATE(CDlg1View, CView)

BEGIN_MESSAGE_MAP(CDlg1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &CDlg1View::OnPopout)
END_MESSAGE_MAP()

// CDlg1View ����/����

CDlg1View::CDlg1View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg1View::~CDlg1View()
{
}

BOOL CDlg1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg1View ����

void CDlg1View::OnDraw(CDC* /*pDC*/)
{
	CDlg1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg1View ���

#ifdef _DEBUG
void CDlg1View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg1Doc* CDlg1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg1Doc)));
	return (CDlg1Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg1View ��Ϣ�������


void CDlg1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	CClientDC dc(this);
	if (t == IDOK)
	{
		CString s;
		s = cfd.GetFileName();
		dc.TextOutW(20,20,s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CDlg1View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg1 md1;
	int t = md1.DoModal();
	CClientDC dc(this);
	if (t == IDOK)
	{
		CFileDialog cfd(true);
		CString cs;
		cs = md1.cs;
		cs = cfd.GetFileName();
		UpdateData(false);
	}
}
