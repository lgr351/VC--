
// MFCEcp3.1View.h : CMFCEcp31View ��Ľӿ�
//

#pragma once


class CMFCEcp31View : public CView
{
protected: // �������л�����
	CMFCEcp31View();
	DECLARE_DYNCREATE(CMFCEcp31View)

// ����
public:
	CMFCEcp31Doc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCEcp31View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCEcp3.1View.cpp �еĵ��԰汾
inline CMFCEcp31Doc* CMFCEcp31View::GetDocument() const
   { return reinterpret_cast<CMFCEcp31Doc*>(m_pDocument); }
#endif

