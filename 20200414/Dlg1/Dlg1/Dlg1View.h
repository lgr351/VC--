
// Dlg1View.h : CDlg1View 类的接口
//

#pragma once


class CDlg1View : public CView
{
protected: // 仅从序列化创建
	CDlg1View();
	DECLARE_DYNCREATE(CDlg1View)

// 特性
public:
	CDlg1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CDlg1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // Dlg1View.cpp 中的调试版本
inline CDlg1Doc* CDlg1View::GetDocument() const
   { return reinterpret_cast<CDlg1Doc*>(m_pDocument); }
#endif

