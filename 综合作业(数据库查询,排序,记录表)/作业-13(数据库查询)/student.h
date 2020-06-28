#pragma once


// student 对话框

class student : public CDialogEx
{
	DECLARE_DYNAMIC(student)

public:
	student(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~student();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long id;
	CString name;
	long age;
	long money;
	long phone;
};
