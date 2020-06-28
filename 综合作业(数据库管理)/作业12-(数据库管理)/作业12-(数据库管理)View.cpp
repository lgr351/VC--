
// 作业12-(数据库管理)View.cpp : C作业12数据库管理View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业12-(数据库管理).h"
#endif

#include "作业12-(数据库管理)Set.h"
#include "作业12-(数据库管理)Doc.h"
#include "作业12-(数据库管理)View.h"
#include "ADD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业12数据库管理View

IMPLEMENT_DYNCREATE(C作业12数据库管理View, CRecordView)

BEGIN_MESSAGE_MAP(C作业12数据库管理View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &C作业12数据库管理View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &C作业12数据库管理View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C作业12数据库管理View::OnBnClickedButton2)
END_MESSAGE_MAP()

// C作业12数据库管理View 构造/析构

C作业12数据库管理View::C作业12数据库管理View()
	: CRecordView(IDD_MY12_FORM)
	, z(0)
	, name(_T(""))
	, number(0)
	, age(0)
	, phone(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C作业12数据库管理View::~C作业12数据库管理View()
{
}

void C作业12数据库管理View::DoDataExchange(CDataExchange* pDX)
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
}

BOOL C作业12数据库管理View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C作业12数据库管理View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_作业12数据库管理Set;
	CRecordView::OnInitialUpdate();

}


// C作业12数据库管理View 诊断

#ifdef _DEBUG
void C作业12数据库管理View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C作业12数据库管理View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C作业12数据库管理Doc* C作业12数据库管理View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业12数据库管理Doc)));
	return (C作业12数据库管理Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业12数据库管理View 数据库支持
CRecordset* C作业12数据库管理View::OnGetRecordset()
{
	return m_pSet;
}



// C作业12数据库管理View 消息处理程序


void C作业12数据库管理View::OnBnClickedButton3()
{
m_pSet->Delete();
m_pSet->MovePrev();
if (m_pSet->IsBOF())
m_pSet->MoveFirst();
UpdateData(false);

}


void C作业12数据库管理View::OnBnClickedButton1()
{
	ADD dlg;
	int r=dlg.DoModal();
	if (r==IDOK)
	{     m_pSet->AddNew();
		m_pSet->m_ID = dlg.ID;
		m_pSet->column1 = dlg.name;
		m_pSet->column2 = dlg.number;
		m_pSet->column3 = dlg.age;
		m_pSet->column4 = dlg.phone;
		
		m_pSet->Update();
		UpdateData(false);

	}
}


void C作业12数据库管理View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码

	ADD dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->Edit();
		m_pSet->m_ID = dlg.ID;
		m_pSet->column1 = dlg.name;
		m_pSet->column2 = dlg.number;
		m_pSet->column3 = dlg.age;
		m_pSet->column4 = dlg.phone;

		m_pSet->Update();
		UpdateData(false);
	}
}
