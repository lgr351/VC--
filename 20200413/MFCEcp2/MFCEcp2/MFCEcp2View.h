
// MFCEcp2View.h : CMFCEcp2View ��Ľӿ�
//

#pragma once


class CMFCEcp2View : public CView
{
protected: // �������л�����
	CMFCEcp2View();
	DECLARE_DYNCREATE(CMFCEcp2View)

// ����
public:
	CMFCEcp2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCEcp2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // MFCEcp2View.cpp �еĵ��԰汾
inline CMFCEcp2Doc* CMFCEcp2View::GetDocument() const
   { return reinterpret_cast<CMFCEcp2Doc*>(m_pDocument); }
#endif

