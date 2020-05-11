
// MFCEcp3.2View.h : CMFCEcp32View 类的接口
//

#pragma once


class CMFCEcp32View : public CView
{
protected: // 仅从序列化创建
	CMFCEcp32View();
	DECLARE_DYNCREATE(CMFCEcp32View)

// 特性
public:
	CMFCEcp32Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCEcp32View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCEcp3.2View.cpp 中的调试版本
inline CMFCEcp32Doc* CMFCEcp32View::GetDocument() const
   { return reinterpret_cast<CMFCEcp32Doc*>(m_pDocument); }
#endif

