
// MFCEcp1.h : MFCEcp1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCEcp1App:
// �йش����ʵ�֣������ MFCEcp1.cpp
//

class CMFCEcp1App : public CWinApp
{
public:
	CMFCEcp1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCEcp1App theApp;
