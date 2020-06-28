
// 作业6-练习2View.h : C作业6练习2View 类的接口
//

#pragma once


class C作业6练习2View : public CView
{
protected: // 仅从序列化创建
	C作业6练习2View();
	DECLARE_DYNCREATE(C作业6练习2View)

// 特性
public:
	C作业6练习2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业6练习2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChange();
};

#ifndef _DEBUG  // 作业6-练习2View.cpp 中的调试版本
inline C作业6练习2Doc* C作业6练习2View::GetDocument() const
   { return reinterpret_cast<C作业6练习2Doc*>(m_pDocument); }
#endif

