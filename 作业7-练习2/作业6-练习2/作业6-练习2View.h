
// ��ҵ6-��ϰ2View.h : C��ҵ6��ϰ2View ��Ľӿ�
//

#pragma once


class C��ҵ6��ϰ2View : public CView
{
protected: // �������л�����
	C��ҵ6��ϰ2View();
	DECLARE_DYNCREATE(C��ҵ6��ϰ2View)

// ����
public:
	C��ҵ6��ϰ2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ6��ϰ2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChange();
};

#ifndef _DEBUG  // ��ҵ6-��ϰ2View.cpp �еĵ��԰汾
inline C��ҵ6��ϰ2Doc* C��ҵ6��ϰ2View::GetDocument() const
   { return reinterpret_cast<C��ҵ6��ϰ2Doc*>(m_pDocument); }
#endif

