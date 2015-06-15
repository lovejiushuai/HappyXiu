
// Account.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CAccountApp:
// See Account.cpp for the implementation of this class
//

class CAccountApp : public CWinApp
{
public:
	CAccountApp();

	TCHAR m_strCurDir[MAX_PATH];
	TCHAR m_exeFullPath[MAX_PATH]; 



// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CAccountApp theApp;