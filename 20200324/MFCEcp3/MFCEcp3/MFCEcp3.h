
// MFCEcp3.h : MFCEcp3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCEcp3App:
// �йش����ʵ�֣������ MFCEcp3.cpp
//

class CMFCEcp3App : public CWinApp
{
public:
	CMFCEcp3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCEcp3App theApp;
