
// ������ϰ2.h : ������ϰ2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ϰ2App:
// �йش����ʵ�֣������ ������ϰ2.cpp
//

class C������ϰ2App : public CWinApp
{
public:
	C������ϰ2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ϰ2App theApp;
