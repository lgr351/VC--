
// ��ҵ4-��ϰView.h : C��ҵ4��ϰView ��Ľӿ�
//

#pragma once


class C��ҵ4��ϰView : public CView
{
protected: // �������л�����
	C��ҵ4��ϰView();
	DECLARE_DYNCREATE(C��ҵ4��ϰView)

// ����
public:
	C��ҵ4��ϰDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ4��ϰView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOndraw();
};

#ifndef _DEBUG  // ��ҵ4-��ϰView.cpp �еĵ��԰汾
inline C��ҵ4��ϰDoc* C��ҵ4��ϰView::GetDocument() const
   { return reinterpret_cast<C��ҵ4��ϰDoc*>(m_pDocument); }
#endif

