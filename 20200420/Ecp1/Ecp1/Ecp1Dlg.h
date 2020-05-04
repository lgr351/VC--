
// Ecp1Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CEcp1Dlg 对话框
class CEcp1Dlg : public CDialogEx
{
// 构造
public:
	CEcp1Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ECP1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	int x;
	int y;
	double z;
	
	
	CButton 开平方;
	CButton 求倒数;
	afx_msg void OnBnClickedButton2();
	CButton 加;
	CButton 减;
	CButton 乘;
	CButton 除;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
};
