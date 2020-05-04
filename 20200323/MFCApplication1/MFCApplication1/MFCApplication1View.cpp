
// MFCApplication1View.cpp : CMFCApplication1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication1.h"
#endif

#include "MFCApplication1Doc.h"
#include "MFCApplication1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1View

IMPLEMENT_DYNCREATE(CMFCApplication1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1View, CView)
	ON_COMMAND(ID_SHOWCIRCLE, &CMFCApplication1View::OnShowcircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCApplication1View 构造/析构

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: 在此处添加构造代码
	N = 10;
	set = true;
	CRect cr;
	GetClientRect(&cr);
	int h = (cr.bottom + cr.top) / 2;
	int m = (cr.left + cr.right) / 2;
	CRect rect(m - 50, h - 50, m + 50, h + 50);
	crect.Add(rect);
}

CMFCApplication1View::~CMFCApplication1View()
{
}

BOOL CMFCApplication1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View 绘制

void CMFCApplication1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication1View 诊断

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View 消息处理程序


void CMFCApplication1View::OnShowcircle()
{
	// TODO: 在此添加命令处理程序代码
	CDC* pDC;
	CRect cr;
	GetClientRect(&cr);
	CClientDC dc(this);
	int h = (cr.bottom + cr.top) / 2;
	int m = (cr.left + cr.right) / 2;
	CRect rect(m - 50, h - 50, m + 50, h + 50);
	
	dc.Rectangle(rect);
	if (set)
	{
		SetTimer(1, 500, NULL);
		set = false;
	}
}


void CMFCApplication1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	crect[i].bottom += 10;
	crect[i].top -= 10;
	crect[i].left -= 10;
	crect[i].right += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
