#pragma once


// bigpicture 对话框

class bigpicture : public CDialogEx
{
	DECLARE_DYNAMIC(bigpicture)

public:
	bigpicture(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~bigpicture();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	void foo(CString filename);

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnPaint();	
	CString fil;
};
