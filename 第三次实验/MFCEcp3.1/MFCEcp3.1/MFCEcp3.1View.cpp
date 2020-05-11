
// MFCEcp3.1View.cpp : CMFCEcp31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCEcp3.1.h"
#endif

#include "MFCEcp3.1Doc.h"
#include "MFCEcp3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp31View

IMPLEMENT_DYNCREATE(CMFCEcp31View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCEcp31View 构造/析构

CMFCEcp31View::CMFCEcp31View()
{
	// TODO: 在此处添加构造代码
	
}

CMFCEcp31View::~CMFCEcp31View()
{
}

BOOL CMFCEcp31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCEcp31View 绘制

void CMFCEcp31View::OnDraw(CDC* pDC)
{
	CMFCEcp31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// CMFCEcp31View 诊断

#ifdef _DEBUG
void CMFCEcp31View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp31Doc* CMFCEcp31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp31Doc)));
	return (CMFCEcp31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp31View 消息处理程序


void CMFCEcp31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s;
	s = "左键正被按下！";
	dc.TextOutW(200,200,s);
	
	CView::OnLButtonDown(nFlags, point);
}


void CMFCEcp31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s ;
	s = "左键正被抬起！";
	dc.TextOutW(200,300,s);
	CView::OnLButtonUp(nFlags, point);
}
