
// Ecp1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CEcp1Dlg �Ի���
class CEcp1Dlg : public CDialogEx
{
// ����
public:
	CEcp1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ECP1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
	
	
	CButton ��ƽ��;
	CButton ����;
	afx_msg void OnBnClickedButton2();
	CButton ��;
	CButton ��;
	CButton ��;
	CButton ��;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
};
