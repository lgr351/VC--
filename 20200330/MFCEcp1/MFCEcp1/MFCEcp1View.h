
// MFCEcp1View.h : CMFCEcp1View 类的接口
//

#pragma once


class CMFCEcp1View : public CView
{
protected: // 仅从序列化创建
	CMFCEcp1View();
	DECLARE_DYNCREATE(CMFCEcp1View)

// 特性
public:
	CMFCEcp1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCEcp1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCEcp1View.cpp 中的调试版本
inline CMFCEcp1Doc* CMFCEcp1View::GetDocument() const
   { return reinterpret_cast<CMFCEcp1Doc*>(m_pDocument); }
#endif

