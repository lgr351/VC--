
// MFCEcp1View.h : CMFCEcp1View ��Ľӿ�
//

#pragma once


class CMFCEcp1View : public CView
{
protected: // �������л�����
	CMFCEcp1View();
	DECLARE_DYNCREATE(CMFCEcp1View)

// ����
public:
	CMFCEcp1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCEcp1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCEcp1View.cpp �еĵ��԰汾
inline CMFCEcp1Doc* CMFCEcp1View::GetDocument() const
   { return reinterpret_cast<CMFCEcp1Doc*>(m_pDocument); }
#endif

