#pragma once


// Circle 对话框

class Circle : public CDialogEx
{
	DECLARE_DYNAMIC(Circle)

public:
	Circle(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Circle();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int r;
	afx_msg void OnEnChangeEdit2();
	int x;
	int y;
	afx_msg void OnBnClickedButton1();
};
