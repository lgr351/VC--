
// MFCEcp3View.h : CMFCEcp3View ��Ľӿ�
//

#pragma once


class CMFCEcp3View : public CView
{
protected: // �������л�����
	CMFCEcp3View();
	DECLARE_DYNCREATE(CMFCEcp3View)

// ����
public:
	CMFCEcp3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCEcp3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowline();
};

#ifndef _DEBUG  // MFCEcp3View.cpp �еĵ��԰汾
inline CMFCEcp3Doc* CMFCEcp3View::GetDocument() const
   { return reinterpret_cast<CMFCEcp3Doc*>(m_pDocument); }
#endif

