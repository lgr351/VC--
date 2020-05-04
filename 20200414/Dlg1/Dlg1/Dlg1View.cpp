
// Dlg1View.cpp : CDlg1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg1.h"
#endif

#include "Dlg1Doc.h"
#include "Dlg1View.h"
#include "MyDlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg1View

IMPLEMENT_DYNCREATE(CDlg1View, CView)

BEGIN_MESSAGE_MAP(CDlg1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &CDlg1View::OnPopout)
END_MESSAGE_MAP()

// CDlg1View 构造/析构

CDlg1View::CDlg1View()
{
	// TODO: 在此处添加构造代码

}

CDlg1View::~CDlg1View()
{
}

BOOL CDlg1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg1View 绘制

void CDlg1View::OnDraw(CDC* /*pDC*/)
{
	CDlg1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg1View 诊断

#ifdef _DEBUG
void CDlg1View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg1Doc* CDlg1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg1Doc)));
	return (CDlg1Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg1View 消息处理程序


void CDlg1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	CClientDC dc(this);
	if (t == IDOK)
	{
		CString s;
		s = cfd.GetFileName();
		dc.TextOutW(20,20,s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CDlg1View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg1 md1;
	int t = md1.DoModal();
	CClientDC dc(this);
	if (t == IDOK)
	{
		CFileDialog cfd(true);
		CString cs;
		cs = md1.cs;
		cs = cfd.GetFileName();
		UpdateData(false);
	}
}
