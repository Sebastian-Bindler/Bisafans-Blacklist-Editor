
// Bisafans Blacklist Editor.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// Hauptsymbole


// CBisafansBlacklistEditorApp:
// Siehe Bisafans Blacklist Editor.cpp für die Implementierung dieser Klasse
//

class CBisafansBlacklistEditorApp : public CWinApp
{
public:
	CBisafansBlacklistEditorApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CBisafansBlacklistEditorApp theApp;
