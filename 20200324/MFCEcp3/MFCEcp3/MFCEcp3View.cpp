
// MFCEcp3View.cpp : CMFCEcp3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCEcp3.h"
#endif

#include "MFCEcp3Doc.h"
#include "MFCEcp3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp3View

IMPLEMENT_DYNCREATE(CMFCEcp3View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp3View, CView)
	ON_COMMAND(ID_SHOWLINE, &CMFCEcp3View::OnShowline)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCEcp3View 构造/析构

CMFCEcp3View::CMFCEcp3View()
{
	// TODO: 在此处添加构造代码

}

CMFCEcp3View::~CMFCEcp3View()
{
}

BOOL CMFCEcp3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCEcp3View 绘制

void CMFCEcp3View::OnDraw(CDC* pDC)
{
	CMFCEcp3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CPoint point;
	pDC->MoveTo(point);
	pDC->LineTo(point);
}


// CMFCEcp3View 诊断

#ifdef _DEBUG
void CMFCEcp3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp3Doc* CMFCEcp3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp3Doc)));
	return (CMFCEcp3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp3View 消息处理程序


void CMFCEcp3View::OnShowline()
{
	// TODO: 在此添加命令处理程序代码
	CPoint point;
	CMFCEcp3Doc* pDoc = GetDocument();
	CDC *pDC;
	(pDoc->point).x = point.x;
	(pDoc->point).y = point.y;
	
}

