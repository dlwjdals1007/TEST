
// TTSTest.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTTSTestApp:
// �� Ŭ������ ������ ���ؼ��� TTSTest.cpp�� �����Ͻʽÿ�.
//

class CTTSTestApp : public CWinApp
{
public:
	CTTSTestApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTTSTestApp theApp;