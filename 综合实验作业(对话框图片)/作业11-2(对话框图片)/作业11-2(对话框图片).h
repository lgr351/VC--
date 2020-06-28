
// 作业11-2(对话框图片).h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// C作业112对话框图片App: 
// 有关此类的实现，请参阅 作业11-2(对话框图片).cpp
//

class C作业112对话框图片App : public CWinApp
{
public:
	C作业112对话框图片App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern C作业112对话框图片App theApp;