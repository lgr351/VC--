
// MFCEcp2View.cpp : CMFCEcp2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCEcp2.h"
#endif

#include "MFCEcp2Doc.h"
#include "MFCEcp2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp2View

IMPLEMENT_DYNCREATE(CMFCEcp2View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCEcp2View 构造/析构

CMFCEcp2View::CMFCEcp2View()
{
	// TODO: 在此处添加构造代码

}

CMFCEcp2View::~CMFCEcp2View()
{
}

BOOL CMFCEcp2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCEcp2View 绘制

void CMFCEcp2View::OnDraw(CDC* pDC)
{
	CMFCEcp2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->cr);
}


// CMFCEcp2View 诊断

#ifdef _DEBUG
void CMFCEcp2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp2Doc* CMFCEcp2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp2Doc)));
	return (CMFCEcp2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp2View 消息处理程序


void CMFCEcp2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCEcp2Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <=(clientRec.right-clientRec.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <=(clientRec.bottom-clientRec.top))
		{
			pDoc->cr.top += 5;
			pDoc->cr.bottom += 5;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFCEcp2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CMFCEcp2Doc* pDoc = GetDocument();
	dc.Rectangle(pDoc->cr);
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
