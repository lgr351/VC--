
// 作业-13(数据库查询)View.h : C作业13数据库查询View 类的接口
//

#pragma once

class C作业13数据库查询Set;

class C作业13数据库查询View : public CRecordView
{
protected: // 仅从序列化创建
	C作业13数据库查询View();
	DECLARE_DYNCREATE(C作业13数据库查询View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY13_FORM };
#endif
	C作业13数据库查询Set* m_pSet;

// 特性
public:
	C作业13数据库查询Doc* GetDocument() const;

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
	virtual ~C作业13数据库查询View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	long id;
	CString name;
	long age;
	long money;
	long phone;
	void foo(CImage & img, int & sx, int & sy, int & w, int & h);
	afx_msg void OnPaint();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
	afx_msg void Onpaixu();
	afx_msg void Onsearch();
	afx_msg void OnAdd();
	afx_msg void OnDelete();
	afx_msg void OnEdit();
	afx_msg void OnRecord();
};

#ifndef _DEBUG  // 作业-13(数据库查询)View.cpp 中的调试版本
inline C作业13数据库查询Doc* C作业13数据库查询View::GetDocument() const
   { return reinterpret_cast<C作业13数据库查询Doc*>(m_pDocument); }
#endif

