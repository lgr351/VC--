
// MFCEcp3.3.h : MFCEcp3.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCEcp33App:
// �йش����ʵ�֣������ MFCEcp3.3.cpp
//

class CMFCEcp33App : public CWinApp
{
public:
	CMFCEcp33App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCEcp33App theApp;
