
// ��ҵ4-��ϰ.h : ��ҵ4-��ϰ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ4��ϰApp:
// �йش����ʵ�֣������ ��ҵ4-��ϰ.cpp
//

class C��ҵ4��ϰApp : public CWinApp
{
public:
	C��ҵ4��ϰApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ4��ϰApp theApp;
