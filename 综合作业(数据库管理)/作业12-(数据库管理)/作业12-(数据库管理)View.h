
// 作业12-(数据库管理)View.h : C作业12数据库管理View 类的接口
//

#pragma once

class C作业12数据库管理Set;

class C作业12数据库管理View : public CRecordView
{
protected: // 仅从序列化创建
	C作业12数据库管理View();
	DECLARE_DYNCREATE(C作业12数据库管理View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY12_FORM };
#endif
	C作业12数据库管理Set* m_pSet;

// 特性
public:
	C作业12数据库管理Doc* GetDocument() const;

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
	virtual ~C作业12数据库管理View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long z;
	CString name;
	LONGLONG number;
	long age;
	long phone;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // 作业12-(数据库管理)View.cpp 中的调试版本
inline C作业12数据库管理Doc* C作业12数据库管理View::GetDocument() const
   { return reinterpret_cast<C作业12数据库管理Doc*>(m_pDocument); }
#endif

