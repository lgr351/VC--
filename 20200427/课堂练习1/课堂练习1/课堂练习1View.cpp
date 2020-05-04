
// ������ϰ1View.cpp : C������ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ϰ1.h"
#endif

#include "������ϰ1Doc.h"
#include "������ϰ1View.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ϰ1View

IMPLEMENT_DYNCREATE(C������ϰ1View, CView)

BEGIN_MESSAGE_MAP(C������ϰ1View, CView)
	ON_COMMAND(ID_POPOUT, &C������ϰ1View::OnPopout)
	ON_COMMAND(ID_FILE_SAVE, &C������ϰ1View::OnFileSave)
END_MESSAGE_MAP()

// C������ϰ1View ����/����

C������ϰ1View::C������ϰ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ϰ1View::~C������ϰ1View()
{
}

BOOL C������ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ϰ1View ����

void C������ϰ1View::OnDraw(CDC* /*pDC*/)
{
	C������ϰ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ϰ1View ���

#ifdef _DEBUG
void C������ϰ1View::AssertValid() const
{
	CView::AssertValid();
}

void C������ϰ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ϰ1Doc* C������ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ϰ1Doc)));
	return (C������ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ϰ1View ��Ϣ�������


void C������ϰ1View::OnPopout()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;
		CClientDC dc(this);
		int x = 20, y = 10;
		while (ifs >> s)
		{
			dc.TextOutW(x, y, filename);
		}
		
	}
}


void C������ϰ1View::OnFileSave()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(false);
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		CString filename = cfd.GetPathName();
		ofstream ofs(cfd.GetPathName());
		ofs << cfd.GetPathName() << endl;
		
	}
}
