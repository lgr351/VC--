
// Dlg1View.h : CDlg1View ��Ľӿ�
//

#pragma once


class CDlg1View : public CView
{
protected: // �������л�����
	CDlg1View();
	DECLARE_DYNCREATE(CDlg1View)

// ����
public:
	CDlg1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CDlg1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // Dlg1View.cpp �еĵ��԰汾
inline CDlg1Doc* CDlg1View::GetDocument() const
   { return reinterpret_cast<CDlg1Doc*>(m_pDocument); }
#endif

