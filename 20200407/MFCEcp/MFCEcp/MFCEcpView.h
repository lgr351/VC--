
// MFCEcpView.h : CMFCEcpView ��Ľӿ�
//

#pragma once


class CMFCEcpView : public CView
{
protected: // �������л�����
	CMFCEcpView();
	DECLARE_DYNCREATE(CMFCEcpView)

// ����
public:
	CMFCEcpDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCEcpView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCEcpView.cpp �еĵ��԰汾
inline CMFCEcpDoc* CMFCEcpView::GetDocument() const
   { return reinterpret_cast<CMFCEcpDoc*>(m_pDocument); }
#endif

