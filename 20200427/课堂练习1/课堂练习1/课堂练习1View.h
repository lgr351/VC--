
// ������ϰ1View.h : C������ϰ1View ��Ľӿ�
//

#pragma once


class C������ϰ1View : public CView
{
protected: // �������л�����
	C������ϰ1View();
	DECLARE_DYNCREATE(C������ϰ1View)

// ����
public:
	C������ϰ1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ϰ1View();
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
	afx_msg void OnFileSave();
};

#ifndef _DEBUG  // ������ϰ1View.cpp �еĵ��԰汾
inline C������ϰ1Doc* C������ϰ1View::GetDocument() const
   { return reinterpret_cast<C������ϰ1Doc*>(m_pDocument); }
#endif

