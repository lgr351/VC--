
// ��ҵ4-��ϰView.cpp : C��ҵ4��ϰView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ4-��ϰ.h"
#endif

#include "��ҵ4-��ϰDoc.h"
#include "��ҵ4-��ϰView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ4��ϰView

IMPLEMENT_DYNCREATE(C��ҵ4��ϰView, CView)

BEGIN_MESSAGE_MAP(C��ҵ4��ϰView, CView)
	ON_COMMAND(ID_ONDRAW, &C��ҵ4��ϰView::OnOndraw)
END_MESSAGE_MAP()

// C��ҵ4��ϰView ����/����

C��ҵ4��ϰView::C��ҵ4��ϰView()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ4��ϰView::~C��ҵ4��ϰView()
{
}

BOOL C��ҵ4��ϰView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ4��ϰView ����

void C��ҵ4��ϰView::OnDraw(CDC* /*pDC*/)
{
	C��ҵ4��ϰDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ4��ϰView ���

#ifdef _DEBUG
void C��ҵ4��ϰView::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ4��ϰView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ4��ϰDoc* C��ҵ4��ϰView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ4��ϰDoc)));
	return (C��ҵ4��ϰDoc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ4��ϰView ��Ϣ�������


void C��ҵ4��ϰView::OnOndraw()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect cd;
	GetClientRect(&cd);
	CPoint A;
	A = cd.CenterPoint();
	int red = 0, green = 0, blue = 0;
	int width = 2;


	for (int i = 10; i >0; i--)
	{
		int color = RGB(red, green, blue);
		CPen newPen(PS_SOLID, width, color);
		CPen *oldPen = dc.SelectObject(&newPen);
		int r = i * 50;
		CRect cr(A.x - r, A.y - r, A.x + r, A.y + r);
		dc.Ellipse(cr);
		dc.SelectObject(oldPen);
		red += 92;
		green += 76;
		blue += 68;

	}
}
