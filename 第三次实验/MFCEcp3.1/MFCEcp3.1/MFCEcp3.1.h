
// MFCEcp3.1.h : MFCEcp3.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCEcp31App:
// �йش����ʵ�֣������ MFCEcp3.1.cpp
//

class CMFCEcp31App : public CWinApp
{
public:
	CMFCEcp31App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCEcp31App theApp;
