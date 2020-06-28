#pragma once


// list 对话框

class list : public CDialogEx
{
	DECLARE_DYNAMIC(list)

public:
	list(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~list();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:

	CString xx;
};
