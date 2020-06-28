#pragma once


// change 对话框

class change : public CDialogEx
{
	DECLARE_DYNAMIC(change)

public:
	change(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString x;
	CString y;
	afx_msg void OnBnClickedButton1();
};
