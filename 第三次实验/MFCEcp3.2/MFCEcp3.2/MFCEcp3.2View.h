
// MFCEcp3.2View.h : CMFCEcp32View ��Ľӿ�
//

#pragma once


class CMFCEcp32View : public CView
{
protected: // �������л�����
	CMFCEcp32View();
	DECLARE_DYNCREATE(CMFCEcp32View)

// ����
public:
	CMFCEcp32Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCEcp32View();
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

#ifndef _DEBUG  // MFCEcp3.2View.cpp �еĵ��԰汾
inline CMFCEcp32Doc* CMFCEcp32View::GetDocument() const
   { return reinterpret_cast<CMFCEcp32Doc*>(m_pDocument); }
#endif

