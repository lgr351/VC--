
// MFCEcp1View.cpp : CMFCEcp1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCEcp1.h"
#endif

#include "MFCEcp1Doc.h"
#include "MFCEcp1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCEcp1View

IMPLEMENT_DYNCREATE(CMFCEcp1View, CView)

BEGIN_MESSAGE_MAP(CMFCEcp1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCEcp1View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCEcp1View 构造/析构

CMFCEcp1View::CMFCEcp1View()
{
	// TODO: 在此处添加构造代码

}

CMFCEcp1View::~CMFCEcp1View()
{
}

BOOL CMFCEcp1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCEcp1View 绘制

void CMFCEcp1View::OnDraw(CDC* /*pDC*/)
{
	CMFCEcp1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCEcp1View 诊断

#ifdef _DEBUG
void CMFCEcp1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCEcp1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCEcp1Doc* CMFCEcp1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCEcp1Doc)));
	return (CMFCEcp1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCEcp1View 消息处理程序


void CMFCEcp1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CImage img;
	CFileDialog cfd(true);
	CClientDC dc(this);
	int r = cfd.DoModal();
	CString filename = cfd.GetPathName();
	img.Load(filename);
	dc.TextOutW(20, 20, filename);
	int w, h, sx, sy;
	if (r == IDOK)
	{
		CRect rect;
		GetClientRect(&rect);
		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		
		w = img.GetWidth();
		h = img.GetHeight();
		sx = (rect.Width() - img.GetWidth()) / 2;
		sy = (rect.Height() - img.GetHeight()) / 2;
		
	}
	img.Draw(dc.m_hDC, sx, sy, w, h);
}
