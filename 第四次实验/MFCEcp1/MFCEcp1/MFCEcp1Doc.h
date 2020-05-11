
// MFCEcp1Doc.h : CMFCEcp1Doc 类的接口
//


#pragma once


class CMFCEcp1Doc : public CDocument
{
protected: // 仅从序列化创建
	CMFCEcp1Doc();
	DECLARE_DYNCREATE(CMFCEcp1Doc)

// 特性
public:

// 操作
public:
	CRect m_tagRec;
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
	virtual ~CMFCEcp1Doc();
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
