
// MFCEcp3.3View.cpp : CMFCEcp33View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCEcp3.3.h"
#endif

#include "MFCEcp3.3Doc.h"
#include "MFCEcp3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp33View

IMPLEMENT_DYNCREATE(CMFCEcp33View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp33View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCEcp33View 构造/析构

CMFCEcp33View::CMFCEcp33View()
{
	// TODO: 在此处添加构造代码

}

CMFCEcp33View::~CMFCEcp33View()
{
}

BOOL CMFCEcp33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCEcp33View 绘制

void CMFCEcp33View::OnDraw(CDC* /*pDC*/)
{
	CMFCEcp33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect cr;
}


// CMFCEcp33View 诊断

#ifdef _DEBUG
void CMFCEcp33View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp33Doc* CMFCEcp33View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp33Doc)));
	return (CMFCEcp33Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp33View 消息处理程序


void CMFCEcp33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect cr1, cr2, cr3;
	int r1 = rand() % 50 + 5;
	int r2 = rand() % 50 + 5;
	
	CString s,s1, s2;
	if (point.x <= cr1.top&&point.x >= cr1.bottom&&point.y <= cr1.right&&point.y >= cr1.left)
	{
		s.Format(_T("%d"), s1);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x <= cr2.top&&point.x >= cr2.bottom&&point.y <= cr2.right&&point.y >= cr2.left)
	{
		s.Format(_T("%d"), s2);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x <= cr3.top&&point.x >= cr3.bottom&&point.y <= cr3.right&&point.y >= cr3.left)
	{
		s.Format(_T("%d"), s1 + s2);
		dc.TextOutW(point.x, point.y, s);
	}
	else
	{
		s.Format(_T("无效！"));
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnLButtonDown(nFlags, point);
}
