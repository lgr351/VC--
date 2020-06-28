
// 作业11-1(放大图片)Doc.h : C作业111放大图片Doc 类的接口
//


#pragma once
#include "作业11-1(放大图片)Set.h"


class C作业111放大图片Doc : public CDocument
{
protected: // 仅从序列化创建
	C作业111放大图片Doc();
	DECLARE_DYNCREATE(C作业111放大图片Doc)

// 特性
public:
	C作业111放大图片Set m_作业111放大图片Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~C作业111放大图片Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
