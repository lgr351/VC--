
// MFCEcp2.h : MFCEcp2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCEcp2App:
// �йش����ʵ�֣������ MFCEcp2.cpp
//

class CMFCEcp2App : public CWinApp
{
public:
	CMFCEcp2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCEcp2App theApp;
