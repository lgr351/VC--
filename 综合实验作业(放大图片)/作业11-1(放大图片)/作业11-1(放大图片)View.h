
// 作业11-1(放大图片)View.h : C作业111放大图片View 类的接口
//

#pragma once

class C作业111放大图片Set;

class C作业111放大图片View : public CRecordView
{
protected: // 仅从序列化创建
	C作业111放大图片View();
	DECLARE_DYNCREATE(C作业111放大图片View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY111_FORM };
#endif
	C作业111放大图片Set* m_pSet;

// 特性
public:
	C作业111放大图片Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~C作业111放大图片View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit3();
	long id;
	CString name;
	long number;
	long age;
	long phone;
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	void foo(CImage & img, int & sx, int & sy, int & w, int & h);

	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 作业11-1(放大图片)View.cpp 中的调试版本
inline C作业111放大图片Doc* C作业111放大图片View::GetDocument() const
   { return reinterpret_cast<C作业111放大图片Doc*>(m_pDocument); }
#endif

