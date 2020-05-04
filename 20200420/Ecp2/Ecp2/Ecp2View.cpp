
// Ecp2View.cpp : CEcp2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Ecp2.h"
#endif

#include "Ecp2Doc.h"
#include "Ecp2View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEcp2View

IMPLEMENT_DYNCREATE(CEcp2View, CView)

BEGIN_MESSAGE_MAP(CEcp2View, CView)
	ON_COMMAND(ID_POPOUT, &CEcp2View::OnPopout)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CEcp2View 构造/析构

CEcp2View::CEcp2View()
{
	// TODO: 在此处添加构造代码

}

CEcp2View::~CEcp2View()
{
}

BOOL CEcp2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEcp2View 绘制

void CEcp2View::OnDraw(CDC* /*pDC*/)
{
	CEcp2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEcp2View 诊断

#ifdef _DEBUG
void CEcp2View::AssertValid() const
{
	CView::AssertValid();
}

void CEcp2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEcp2Doc* CEcp2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEcp2Doc)));
	return (CEcp2Doc*)m_pDocument;
}
#endif //_DEBUG


// CEcp2View 消息处理程序


void CEcp2View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg md;
	int t = md.DoModal();
	CClientDC dc(this);
	if (t == IDOK)
	{
		int X, Y, A, B;
		X = md.x;
		Y = md.y;
		A = md.a;
		B = md.b;
		CRect cr(X - A, Y - B, X + A, Y + B);
		dc.Ellipse(cr);
	}
}


void CEcp2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr(point.x,point.y,point.x,point.y);
	CClientDC dc(this);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}


void CEcp2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
}


void CEcp2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
}
