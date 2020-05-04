
// Ecp1Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Ecp1.h"
#include "Ecp1Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CEcp1Dlg 对话框



CEcp1Dlg::CEcp1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ECP1_DIALOG, pParent)
	, x(0)
	, y(0)
	, z(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEcp1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
	DDX_Control(pDX, IDC_BUTTON6, 开平方);
	DDX_Control(pDX, IDC_BUTTON7, 求倒数);
	DDX_Control(pDX, IDC_BUTTON2, 加);
	DDX_Control(pDX, IDC_BUTTON3, 减);
	DDX_Control(pDX, IDC_BUTTON4, 乘);
	DDX_Control(pDX, IDC_BUTTON5, 除);
}

BEGIN_MESSAGE_MAP(CEcp1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, &CEcp1Dlg::OnEnChangeEdit1)
	
	ON_BN_CLICKED(IDC_BUTTON2, &CEcp1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CEcp1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CEcp1Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CEcp1Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CEcp1Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CEcp1Dlg::OnBnClickedButton7)
END_MESSAGE_MAP()


// CEcp1Dlg 消息处理程序

BOOL CEcp1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CEcp1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CEcp1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CEcp1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CEcp1Dlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CEcp1Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z = x + y;
	UpdateData(false);
}


void CEcp1Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z = x - y;
	UpdateData(false);
}


void CEcp1Dlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z = x*y;
	UpdateData(false);
}


void CEcp1Dlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	if(y!=0)
		(double)z = (double)x / (double)y;
	UpdateData(false);
}


void CEcp1Dlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	if(x>=0)
		z = sqrt(x);
	UpdateData(false);
}


void CEcp1Dlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z = 1 / (double)x;
	UpdateData(false);
}
