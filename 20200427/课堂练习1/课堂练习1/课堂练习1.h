
// ������ϰ1.h : ������ϰ1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ϰ1App:
// �йش����ʵ�֣������ ������ϰ1.cpp
//

class C������ϰ1App : public CWinApp
{
public:
	C������ϰ1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ϰ1App theApp;
