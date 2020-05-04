
// MFCEcpView.h : CMFCEcpView 类的接口
//

#pragma once


class CMFCEcpView : public CView
{
protected: // 仅从序列化创建
	CMFCEcpView();
	DECLARE_DYNCREATE(CMFCEcpView)

// 特性
public:
	CMFCEcpDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCEcpView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCEcpView.cpp 中的调试版本
inline CMFCEcpDoc* CMFCEcpView::GetDocument() const
   { return reinterpret_cast<CMFCEcpDoc*>(m_pDocument); }
#endif

