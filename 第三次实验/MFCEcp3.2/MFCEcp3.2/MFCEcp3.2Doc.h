
// MFCEcp3.2Doc.h : CMFCEcp32Doc ��Ľӿ�
//


#pragma once


class CMFCEcp32Doc : public CDocument
{
protected: // �������л�����
	CMFCEcp32Doc();
	DECLARE_DYNCREATE(CMFCEcp32Doc)

// ����
public:

// ����
public:
	int A = 1;
	int B = 2;
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFCEcp32Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
