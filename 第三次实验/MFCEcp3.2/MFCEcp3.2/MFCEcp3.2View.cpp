
// MFCEcp3.2View.cpp : CMFCEcp32View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCEcp3.2.h"
#endif

#include "MFCEcp3.2Doc.h"
#include "MFCEcp3.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp32View

IMPLEMENT_DYNCREATE(CMFCEcp32View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp32View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCEcp32View 构造/析构

CMFCEcp32View::CMFCEcp32View()
{
	// TODO: 在此处添加构造代码

}

CMFCEcp32View::~CMFCEcp32View()
{
}

BOOL CMFCEcp32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCEcp32View 绘制

void CMFCEcp32View::OnDraw(CDC* pDC)
{
	CMFCEcp32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// CMFCEcp32View 诊断

#ifdef _DEBUG
void CMFCEcp32View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp32Doc* CMFCEcp32View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp32Doc)));
	return (CMFCEcp32Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp32View 消息处理程序


void CMFCEcp32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC* pDC;
	CMFCEcp32Doc* pDoc = GetDocument();
	int A, B;
	CString s;
	CClientDC dc(this);
	s.Format(_T("A+B=%d"), pDoc->A + pDoc->B);
	dc.TextOutW(200, 300, s);
	CView::OnLButtonDown(nFlags, point);
}
