
// test1View.h : Ctest1View 类的接口
//

#pragma once


class Ctest1View : public CView
{
protected: // 仅从序列化创建
	Ctest1View();
	DECLARE_DYNCREATE(Ctest1View)

// 特性
public:
	Ctest1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test1View.cpp 中的调试版本
inline Ctest1Doc* Ctest1View::GetDocument() const
   { return reinterpret_cast<Ctest1Doc*>(m_pDocument); }
#endif

