
// 作业-13(数据库查询)View.cpp : C作业13数据库查询View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业-13(数据库查询).h"
#endif

#include "作业-13(数据库查询)Set.h"
#include "作业-13(数据库查询)Doc.h"
#include "作业-13(数据库查询)View.h"
#include "bigpicture.h"
#include"order.h"
#include"search.h"
#include"student.h"
#include"EDIT.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业13数据库查询View

IMPLEMENT_DYNCREATE(C作业13数据库查询View, CRecordView)

BEGIN_MESSAGE_MAP(C作业13数据库查询View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON2, &C作业13数据库查询View::OnBnClickedButton2)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &C作业13数据库查询View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C作业13数据库查询View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C作业13数据库查询View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C作业13数据库查询View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &C作业13数据库查询View::OnBnClickedButton1)
	ON_COMMAND(ID_paixu, &C作业13数据库查询View::Onpaixu)
	ON_COMMAND(ID_search, &C作业13数据库查询View::Onsearch)
	ON_COMMAND(ID_ADD, &C作业13数据库查询View::OnAdd)
	ON_COMMAND(ID_DELETE, &C作业13数据库查询View::OnDelete)
	ON_COMMAND(ID_EDIT, &C作业13数据库查询View::OnEdit)
	ON_COMMAND(ID_RECORD, &C作业13数据库查询View::OnRecord)
END_MESSAGE_MAP()

// C作业13数据库查询View 构造/析构

C作业13数据库查询View::C作业13数据库查询View()
	: CRecordView(IDD_MY13_FORM)
	, id(0)
	, name(_T(""))
	, age(0)
	, money(0)
	, phone(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C作业13数据库查询View::~C作业13数据库查询View()
{
}

void C作业13数据库查询View::DoDataExchange(CDataExchange* pDX)
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

BOOL C作业13数据库查询View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C作业13数据库查询View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_作业13数据库查询Set;
	CRecordView::OnInitialUpdate();

}


// C作业13数据库查询View 诊断

#ifdef _DEBUG
void C作业13数据库查询View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C作业13数据库查询View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C作业13数据库查询Doc* C作业13数据库查询View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业13数据库查询Doc)));
	return (C作业13数据库查询Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业13数据库查询View 数据库支持
CRecordset* C作业13数据库查询View::OnGetRecordset()
{
	return m_pSet;
}



// C作业13数据库查询View 消息处理程序


void C作业13数据库查询View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->m_strFilter.Format(_T(""));
	m_pSet->m_strSort.Format(_T(""));
	m_pSet->Requery();
	UpdateData(false);



}

void C作业13数据库查询View::foo(CImage & img, int & sx, int & sy, int & w, int & h)
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


void C作业13数据库查询View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
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


void C作业13数据库查询View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
}


void C作业13数据库查询View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);	
}


void C作业13数据库查询View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void C作业13数据库查询View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
}



void C作业13数据库查询View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	bigpicture dlg;
	dlg.fil = m_pSet->column5;
	dlg.DoModal();
}


void C作业13数据库查询View::Onpaixu()
{
	// TODO: 在此添加命令处理程序代码
	order or ;
	int r=or .DoModal();
	if (r == IDOK)
	{
		m_pSet->m_strSort.Format(_T("%s"), or.x);
		m_pSet->Requery();
		UpdateData(false);


	}
}


void C作业13数据库查询View::Onsearch()
{
	// TODO: 在此添加命令处理程序代码
	search sea;
	int r = sea.DoModal();
	if (r == IDOK)
	{
		m_pSet->m_strFilter = sea.y;
		m_pSet->Requery();
		UpdateData(false);

	}
}


void C作业13数据库查询View::OnAdd()
{
	student stu;
	int r = stu.DoModal();
	if (r == IDOK)
	{
		m_pSet->AddNew();
		m_pSet->m_ID = stu.id;
		m_pSet->column1 = stu.name;
		m_pSet->column2 = stu.age;
		m_pSet->column3 = stu.money;
		m_pSet->column4 = stu.phone;

		m_pSet->Update();
		UpdateData(false);


	}
}


void C作业13数据库查询View::OnDelete()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}



void C作业13数据库查询View::OnEdit()
{
	// TODO: 在此添加命令处理程序代码
	student stu;
	int r = stu.DoModal();
	if (r == IDOK)
	{
		m_pSet->AddNew();
		m_pSet->m_ID = stu.id;
		m_pSet->column1 = stu.name;
		m_pSet->column2 = stu.age;
		m_pSet->column3 = stu.money;
		m_pSet->column4 = stu.phone;

		m_pSet->Update();
		UpdateData(false);


	}

}


void C作业13数据库查询View::OnRecord()
{
	// TODO: 在此添加命令处理程序代码
	EDIT dlg;
	int n, i;
	CString str, s;

	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())

	{
		n = m_pSet->GetODBCFieldCount();


		for (i = 1; i < n; i++)
		{
			m_pSet->GetFieldValue((short)i, str);
			s += _T(" ") + str;
		}
		s += _T("\r\n");
		dlg.yy = s;
		UpdateData(false);
		m_pSet->MoveNext();
	}
	if (dlg.DoModal() == IDOK)
	{

	}

	

}
