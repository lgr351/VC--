
// ��ҵ6-��ϰ1View.cpp : C��ҵ6��ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ6-��ϰ1.h"
#endif

#include "��ҵ6-��ϰ1Doc.h"
#include "��ҵ6-��ϰ1View.h"
#include "MyDialog.h"
#include "Circle.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ6��ϰ1View

IMPLEMENT_DYNCREATE(C��ҵ6��ϰ1View, CView)

BEGIN_MESSAGE_MAP(C��ҵ6��ϰ1View, CView)
	ON_COMMAND(ID_OnPoput, &C��ҵ6��ϰ1View::OnOnpoput)

	ON_COMMAND(ID_StringChange, &C��ҵ6��ϰ1View::OnStringchange)
END_MESSAGE_MAP()

// C��ҵ6��ϰ1View ����/����

C��ҵ6��ϰ1View::C��ҵ6��ϰ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ6��ϰ1View::~C��ҵ6��ϰ1View()
{
}

BOOL C��ҵ6��ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ6��ϰ1View ����

void C��ҵ6��ϰ1View::OnDraw(CDC* pDC)
{
	C��ҵ6��ϰ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ6��ϰ1View ���

#ifdef _DEBUG
void C��ҵ6��ϰ1View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ6��ϰ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ6��ϰ1Doc* C��ҵ6��ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ6��ϰ1Doc)));
	return (C��ҵ6��ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ6��ϰ1View ��Ϣ�������


void C��ҵ6��ϰ1View::OnOnpoput()
{
	CClientDC dc(this);
	// TODO: �ڴ���������������
	Circle dlg;
	int r = dlg.DoModal();     
	if (r == IDCANCEL) {
		CString C;
		C.Format(_T("�����˳��Ի���"));
		dc.TextOut(200, 200,C);
	}
	if (r == IDOK) {
		int r=dlg.r;
		int x=dlg.x;
		int y=dlg.y;
		CRect Q (x - r, y - r, x + r, y + r);
		GetDC()->Ellipse(Q);


	}
}





void C��ҵ6��ϰ1View::OnStringchange()
{
	MyDialog dlg;
	int r = dlg.DoModal();

	// TODO: �ڴ���������������
}
