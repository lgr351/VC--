#pragma once


// change �Ի���

class change : public CDialogEx
{
	DECLARE_DYNAMIC(change)

public:
	change(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString x;
	CString y;
	afx_msg void OnBnClickedButton1();
};
