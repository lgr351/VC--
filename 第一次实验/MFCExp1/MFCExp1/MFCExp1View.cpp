
// MFCExp1View.cpp : CMFCExp1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExp1.h"
#endif

#include "MFCExp1Doc.h"
#include "MFCExp1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExp1View

IMPLEMENT_DYNCREATE(CMFCExp1View, CView)

BEGIN_MESSAGE_MAP(CMFCExp1View, CView)
END_MESSAGE_MAP()

// CMFCExp1View 构造/析构

CMFCExp1View::CMFCExp1View()
{
	// TODO: 在此处添加构造代码
	

}

CMFCExp1View::~CMFCExp1View()
{
}

BOOL CMFCExp1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExp1View 绘制

void CMFCExp1View::OnDraw(CDC* pDC)
{
	CMFCExp1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString S;
	S.Format(_T("我是赖冠蓉。"));
	pDC->TextOutW(200,200,S);
	int A = 20;
	CString s;
	s.Format(_T("%d"),A);
	pDC->TextOutW(200, 300, s);
}


// CMFCExp1View 诊断

#ifdef _DEBUG
void CMFCExp1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExp1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExp1Doc* CMFCExp1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp1Doc)));
	return (CMFCExp1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp1View 消息处理程序
