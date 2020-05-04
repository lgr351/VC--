
// MFCEcp2View.h : CMFCEcp2View 类的接口
//

#pragma once


class CMFCEcp2View : public CView
{
protected: // 仅从序列化创建
	CMFCEcp2View();
	DECLARE_DYNCREATE(CMFCEcp2View)

// 特性
public:
	CMFCEcp2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCEcp2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // MFCEcp2View.cpp 中的调试版本
inline CMFCEcp2Doc* CMFCEcp2View::GetDocument() const
   { return reinterpret_cast<CMFCEcp2Doc*>(m_pDocument); }
#endif

