
// MFCEcp3View.h : CMFCEcp3View 类的接口
//

#pragma once


class CMFCEcp3View : public CView
{
protected: // 仅从序列化创建
	CMFCEcp3View();
	DECLARE_DYNCREATE(CMFCEcp3View)

// 特性
public:
	CMFCEcp3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCEcp3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowline();
};

#ifndef _DEBUG  // MFCEcp3View.cpp 中的调试版本
inline CMFCEcp3Doc* CMFCEcp3View::GetDocument() const
   { return reinterpret_cast<CMFCEcp3Doc*>(m_pDocument); }
#endif

