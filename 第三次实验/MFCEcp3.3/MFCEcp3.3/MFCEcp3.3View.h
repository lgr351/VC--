
// MFCEcp3.3View.h : CMFCEcp33View ��Ľӿ�
//

#pragma once


class CMFCEcp33View : public CView
{
protected: // �������л�����
	CMFCEcp33View();
	DECLARE_DYNCREATE(CMFCEcp33View)

// ����
public:
	CMFCEcp33Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCEcp33View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCEcp3.3View.cpp �еĵ��԰汾
inline CMFCEcp33Doc* CMFCEcp33View::GetDocument() const
   { return reinterpret_cast<CMFCEcp33Doc*>(m_pDocument); }
#endif

