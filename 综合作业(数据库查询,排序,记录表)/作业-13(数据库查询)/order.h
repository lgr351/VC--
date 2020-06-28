#pragma once


// order 对话框

class order : public CDialogEx
{
	DECLARE_DYNAMIC(order)

public:
	order(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~order();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString x;
};
