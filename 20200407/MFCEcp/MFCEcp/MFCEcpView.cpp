
// MFCEcpView.cpp : CMFCEcpView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCEcp.h"
#endif

#include "MFCEcpDoc.h"
#include "MFCEcpView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcpView

IMPLEMENT_DYNCREATE(CMFCEcpView, CView)

BEGIN_MESSAGE_MAP(CMFCEcpView, CView)
END_MESSAGE_MAP()

// CMFCEcpView 构造/析构

CMFCEcpView::CMFCEcpView()
{
	// TODO: 在此处添加构造代码

}

CMFCEcpView::~CMFCEcpView()
{
}

BOOL CMFCEcpView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCEcpView 绘制

void CMFCEcpView::OnDraw(CDC* /*pDC*/)
{
	CMFCEcpDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCEcpView 诊断

#ifdef _DEBUG
void CMFCEcpView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcpView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcpDoc* CMFCEcpView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcpDoc)));
	return (CMFCEcpDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcpView 消息处理程序
