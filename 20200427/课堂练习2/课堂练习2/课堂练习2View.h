
// 课堂练习2View.h : C课堂练习2View 类的接口
//

#pragma once


class C课堂练习2View : public CView
{
protected: // 仅从序列化创建
	C课堂练习2View();
	DECLARE_DYNCREATE(C课堂练习2View)

// 特性
public:
	C课堂练习2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C课堂练习2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 课堂练习2View.cpp 中的调试版本
inline C课堂练习2Doc* C课堂练习2View::GetDocument() const
   { return reinterpret_cast<C课堂练习2Doc*>(m_pDocument); }
#endif

