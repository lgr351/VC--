
// Ecp2View.h : CEcp2View ��Ľӿ�
//

#pragma once


class CEcp2View : public CView
{
protected: // �������л�����
	CEcp2View();
	DECLARE_DYNCREATE(CEcp2View)

// ����
public:
	CEcp2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEcp2View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Ecp2View.cpp �еĵ��԰汾
inline CEcp2Doc* CEcp2View::GetDocument() const
   { return reinterpret_cast<CEcp2Doc*>(m_pDocument); }
#endif

