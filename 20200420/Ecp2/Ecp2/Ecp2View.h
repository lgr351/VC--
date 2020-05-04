
// Ecp2View.h : CEcp2View 类的接口
//

#pragma once


class CEcp2View : public CView
{
protected: // 仅从序列化创建
	CEcp2View();
	DECLARE_DYNCREATE(CEcp2View)

// 特性
public:
	CEcp2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEcp2View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Ecp2View.cpp 中的调试版本
inline CEcp2Doc* CEcp2View::GetDocument() const
   { return reinterpret_cast<CEcp2Doc*>(m_pDocument); }
#endif

