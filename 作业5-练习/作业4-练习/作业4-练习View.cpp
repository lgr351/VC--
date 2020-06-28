
// 作业4-练习View.cpp : C作业4练习View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业4-练习.h"
#endif

#include "作业4-练习Doc.h"
#include "作业4-练习View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业4练习View

IMPLEMENT_DYNCREATE(C作业4练习View, CView)

BEGIN_MESSAGE_MAP(C作业4练习View, CView)
	ON_COMMAND(ID_ONDRAW, &C作业4练习View::OnOndraw)
END_MESSAGE_MAP()

// C作业4练习View 构造/析构

C作业4练习View::C作业4练习View()
{
	// TODO: 在此处添加构造代码

}

C作业4练习View::~C作业4练习View()
{
}

BOOL C作业4练习View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业4练习View 绘制

void C作业4练习View::OnDraw(CDC* /*pDC*/)
{
	C作业4练习Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业4练习View 诊断

#ifdef _DEBUG
void C作业4练习View::AssertValid() const
{
	CView::AssertValid();
}

void C作业4练习View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业4练习Doc* C作业4练习View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业4练习Doc)));
	return (C作业4练习Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业4练习View 消息处理程序


void C作业4练习View::OnOndraw()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CRect cd;
	GetClientRect(&cd);
	CPoint A;
	A = cd.CenterPoint();
	int red = 0, green = 0, blue = 0;
	int width = 2;


	for (int i = 10; i >0; i--)
	{
		int color = RGB(red, green, blue);
		CPen newPen(PS_SOLID, width, color);
		CPen *oldPen = dc.SelectObject(&newPen);
		int r = i * 50;
		CRect cr(A.x - r, A.y - r, A.x + r, A.y + r);
		dc.Ellipse(cr);
		dc.SelectObject(oldPen);
		red += 92;
		green += 76;
		blue += 68;

	}
}
