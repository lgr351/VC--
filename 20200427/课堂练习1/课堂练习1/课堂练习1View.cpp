
// 课堂练习1View.cpp : C课堂练习1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "课堂练习1.h"
#endif

#include "课堂练习1Doc.h"
#include "课堂练习1View.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C课堂练习1View

IMPLEMENT_DYNCREATE(C课堂练习1View, CView)

BEGIN_MESSAGE_MAP(C课堂练习1View, CView)
	ON_COMMAND(ID_POPOUT, &C课堂练习1View::OnPopout)
	ON_COMMAND(ID_FILE_SAVE, &C课堂练习1View::OnFileSave)
END_MESSAGE_MAP()

// C课堂练习1View 构造/析构

C课堂练习1View::C课堂练习1View()
{
	// TODO: 在此处添加构造代码

}

C课堂练习1View::~C课堂练习1View()
{
}

BOOL C课堂练习1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C课堂练习1View 绘制

void C课堂练习1View::OnDraw(CDC* /*pDC*/)
{
	C课堂练习1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C课堂练习1View 诊断

#ifdef _DEBUG
void C课堂练习1View::AssertValid() const
{
	CView::AssertValid();
}

void C课堂练习1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C课堂练习1Doc* C课堂练习1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C课堂练习1Doc)));
	return (C课堂练习1Doc*)m_pDocument;
}
#endif //_DEBUG


// C课堂练习1View 消息处理程序


void C课堂练习1View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;
		CClientDC dc(this);
		int x = 20, y = 10;
		while (ifs >> s)
		{
			dc.TextOutW(x, y, filename);
		}
		
	}
}


void C课堂练习1View::OnFileSave()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(false);
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		CString filename = cfd.GetPathName();
		ofstream ofs(cfd.GetPathName());
		ofs << cfd.GetPathName() << endl;
		
	}
}
