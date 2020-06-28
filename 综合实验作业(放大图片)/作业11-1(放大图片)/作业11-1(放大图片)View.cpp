
// 作业11-1(放大图片)View.cpp : C作业111放大图片View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业11-1(放大图片).h"
#endif

#include "作业11-1(放大图片)Set.h"
#include "作业11-1(放大图片)Doc.h"
#include "作业11-1(放大图片)View.h"
#include "bigpiture.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业111放大图片View

IMPLEMENT_DYNCREATE(C作业111放大图片View, CRecordView)

BEGIN_MESSAGE_MAP(C作业111放大图片View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT5, &C作业111放大图片View::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT3, &C作业111放大图片View::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &C作业111放大图片View::OnEnChangeEdit4)
	ON_COMMAND(ID_RECORD_FIRST, &C作业111放大图片View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C作业111放大图片View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C作业111放大图片View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C作业111放大图片View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &C作业111放大图片View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C作业111放大图片View 构造/析构

C作业111放大图片View::C作业111放大图片View()
	: CRecordView(IDD_MY111_FORM)
	, id(0)
	, name(_T(""))
	, number(0)
	, age(0)
	, phone(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C作业111放大图片View::~C作业111放大图片View()
{
}

void C作业111放大图片View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
	Invalidate();
}

BOOL C作业111放大图片View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C作业111放大图片View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_作业111放大图片Set;
	CRecordView::OnInitialUpdate();

}


// C作业111放大图片View 诊断

#ifdef _DEBUG
void C作业111放大图片View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C作业111放大图片View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C作业111放大图片Doc* C作业111放大图片View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业111放大图片Doc)));
	return (C作业111放大图片Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业111放大图片View 数据库支持
CRecordset* C作业111放大图片View::OnGetRecordset()
{
	return m_pSet;
}



// C作业111放大图片View 消息处理程序

void C作业111放大图片View::OnEnChangeEdit5()

{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void C作业111放大图片View::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void C作业111放大图片View::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void C作业111放大图片View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
}


void C作业111放大图片View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void C作业111放大图片View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void C作业111放大图片View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);

}

void C作业111放大图片View::foo(CImage & img, int & sx, int & sy, int & w, int & h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sy = (rect.Height() - h) / 2;
		sx = 0;
	}
}






void C作业111放大图片View::OnPaint()
{
	CPaintDC dc(this);  
	CString S = m_pSet->column5;
	CImage img;
	img.Load(S);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	foo(img, sx, sy, w, h);
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
		

}


void C作业111放大图片View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	bigpiture xx;
	xx.fil = m_pSet->column5;
	xx.DoModal();
	
}
