
// ��ҵ6-��ϰ2.h : ��ҵ6-��ϰ2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ6��ϰ2App:
// �йش����ʵ�֣������ ��ҵ6-��ϰ2.cpp
//

class C��ҵ6��ϰ2App : public CWinAppEx
{
public:
	C��ҵ6��ϰ2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ6��ϰ2App theApp;
