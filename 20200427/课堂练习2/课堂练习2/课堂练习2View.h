
// ������ϰ2View.h : C������ϰ2View ��Ľӿ�
//

#pragma once


class C������ϰ2View : public CView
{
protected: // �������л�����
	C������ϰ2View();
	DECLARE_DYNCREATE(C������ϰ2View)

// ����
public:
	C������ϰ2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ϰ2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ������ϰ2View.cpp �еĵ��԰汾
inline C������ϰ2Doc* C������ϰ2View::GetDocument() const
   { return reinterpret_cast<C������ϰ2Doc*>(m_pDocument); }
#endif

