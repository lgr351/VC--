
// test1View.cpp : Ctest1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test1.h"
#endif

#include "test1Doc.h"
#include "test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "w32.h"

// Ctest1View

IMPLEMENT_DYNCREATE(Ctest1View, CView)

BEGIN_MESSAGE_MAP(Ctest1View, CView)
END_MESSAGE_MAP()

// Ctest1View 构造/析构

Ctest1View::Ctest1View()
{
	// TODO: 在此处添加构造代码

}

Ctest1View::~Ctest1View()
{
}

BOOL Ctest1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest1View 绘制

void Ctest1View::OnDraw(CDC* pDC)
{
	Ctest1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	int m;
	m = factorial(5);
	s.Format(_T("%d"), m);
	pDC->TextOutW(20, 30, s);
}


// Ctest1View 诊断

#ifdef _DEBUG
void Ctest1View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest1Doc* Ctest1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest1Doc)));
	return (Ctest1Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest1View 消息处理程序
