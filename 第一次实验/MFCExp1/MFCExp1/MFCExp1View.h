
// MFCExp1View.h : CMFCExp1View ��Ľӿ�
//

#pragma once


class CMFCExp1View : public CView
{
protected: // �������л�����
	CMFCExp1View();
	DECLARE_DYNCREATE(CMFCExp1View)

// ����
public:
	CMFCExp1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCExp1View.cpp �еĵ��԰汾
inline CMFCExp1Doc* CMFCExp1View::GetDocument() const
   { return reinterpret_cast<CMFCExp1Doc*>(m_pDocument); }
#endif

