
// MFCWindows.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCWindowsApp: 
// �йش����ʵ�֣������ MFCWindows.cpp
//

class CMFCWindowsApp : public CWinApp
{
public:
	CMFCWindowsApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCWindowsApp theApp;