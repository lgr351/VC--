
// ��ҵ6-��ϰ1View.h : C��ҵ6��ϰ1View ��Ľӿ�
//

#pragma once


class C��ҵ6��ϰ1View : public CView
{
protected: // �������л�����
	C��ҵ6��ϰ1View();
	DECLARE_DYNCREATE(C��ҵ6��ϰ1View)

// ����
public:
	C��ҵ6��ϰ1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ6��ϰ1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnpoput();
	afx_msg void OnChange();
	afx_msg void OnStringchange();
};

#ifndef _DEBUG  // ��ҵ6-��ϰ1View.cpp �еĵ��԰汾
inline C��ҵ6��ϰ1Doc* C��ҵ6��ϰ1View::GetDocument() const
   { return reinterpret_cast<C��ҵ6��ϰ1Doc*>(m_pDocument); }
#endif

