
// MFCEcp1Doc.h : CMFCEcp1Doc ��Ľӿ�
//


#pragma once


class CMFCEcp1Doc : public CDocument
{
protected: // �������л�����
	CMFCEcp1Doc();
	DECLARE_DYNCREATE(CMFCEcp1Doc)

// ����
public:

// ����
public:
	CRect m_tagRec;
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
	virtual ~CMFCEcp1Doc();
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
