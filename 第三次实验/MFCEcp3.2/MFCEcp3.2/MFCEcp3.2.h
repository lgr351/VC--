
// MFCEcp3.2.h : MFCEcp3.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCEcp32App:
// �йش����ʵ�֣������ MFCEcp3.2.cpp
//

class CMFCEcp32App : public CWinApp
{
public:
	CMFCEcp32App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCEcp32App theApp;
