
// MFCEcp.h : MFCEcp Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCEcpApp:
// �йش����ʵ�֣������ MFCEcp.cpp
//

class CMFCEcpApp : public CWinApp
{
public:
	CMFCEcpApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCEcpApp theApp;
