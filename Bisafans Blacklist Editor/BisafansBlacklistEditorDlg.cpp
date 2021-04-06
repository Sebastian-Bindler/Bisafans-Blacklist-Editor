
// Bisafans Blacklist EditorDlg.cpp: Implementierungsdatei
//


#include "pch.h"
#include "targetver.h"
#include "framework.h"
#include "BisafansBlacklistEditor.h"
#include "BisafansBlacklistEditorDlg.h"
#include "afxdialogex.h"
#include "RibbonDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg-Dialogfeld für Anwendungsbefehl "Info"

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung

// Implementierung
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCheckStats();
	afx_msg void OnBnClickedCheckDate();
	afx_msg void OnBnClickedCheckCatchPlace();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButtonRibbon();
	afx_msg void OnBnClickedButtonCheckall();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDC_CHECK_STATS, &CAboutDlg::OnBnClickedCheckStats)
	ON_BN_CLICKED(IDC_CHECK_DATE, &CAboutDlg::OnBnClickedCheckDate)
	ON_BN_CLICKED(IDC_CHECK_CATCHPLACE, &CAboutDlg::OnBnClickedCheckCatchPlace)
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON_RIBBON, &CAboutDlg::OnBnClickedButtonRibbon)
	ON_BN_CLICKED(IDC_BUTTON_CHECKALL, &CAboutDlg::OnBnClickedButtonCheckall)
END_MESSAGE_MAP()


// CBisafansBlacklistEditorDlg-Dialogfeld



CBisafansBlacklistEditorDlg::CBisafansBlacklistEditorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_BISAFANSBLACKLISTEDITOR_DIALOG, pParent)
	, m_strNick(_T(""))
	, m_iDextNumber(0)
	, m_strOT(_T(""))
	, m_strID(_T(""))
	, m_strLevel(_T(""))
	, m_strNature(_T("Ernst"))
	, m_strCharacteristic(_T(""))
	, m_bShiny(TRUE)
	, m_strAbility(_T(""))
	, m_bCatchDate(FALSE)
	, m_strCatchRegion(_T(""))
	, m_bStats(FALSE)
	, m_strHitPoints(_T(""))
	, m_strAttack(_T(""))
	, m_strDefense(_T(""))
	, m_strSpecialAttack(_T(""))
	, m_strSpecialDefense(_T(""))
	, m_strSpeed(_T(""))
	, m_bStatsIV(FALSE)
	, m_strIvHitPoints(_T("31"))
	, m_strIvAttack(_T("31"))
	, m_strIvDefense(_T("31"))
	, m_strIvSpecialAttack(_T("31"))
	, m_strIvSpecialDefense(_T("31"))
	, m_strIvSpeed(_T("31"))
	, m_strBall(_T("Finsterball"))
	, m_strEvent(_T(""))
	, m_strManipulation(_T(""))
	, m_strMiscellaneous(_T(""))
	, m_strURL(_T(""))
	, m_strCatchPlace(_T(""))
	, m_bCatchPlace(FALSE)
	, m_bFatefulEncounter(FALSE)
	, m_strCatchLevel(_T("0"))
	, m_dateCatchDate(COleDateTime::GetCurrentTime())
	, m_iForm(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBisafansBlacklistEditorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_CBIndex(pDX, IDC_COMBO4, m_iDextNumber);
	DDX_Text(pDX, IDC_EDIT_NICK, m_strNick);
	DDX_Text(pDX, IDC_EDIT_OT, m_strOT);
	DDX_Text(pDX, IDC_EDIT_ID, m_strID);
	DDX_Text(pDX, IDC_EDIT_LEVEL, m_strLevel);
	DDX_CBString(pDX, IDC_COMBO_NATURE, m_strNature);
	DDX_CBString(pDX, IDC_COMBO2, m_strCharacteristic);
	DDX_Radio(pDX, IDC_RADIO_SHINY_YES, m_bShiny);
	DDX_Text(pDX, IDC_EDIT_ABILITY, m_strAbility);
	DDX_Check(pDX, IDC_CHECK_DATE, m_bCatchDate);
	DDX_CBString(pDX, IDC_COMBO_REGION, m_strCatchRegion);
	DDX_Check(pDX, IDC_CHECK_STATS, m_bStats);
	DDX_Text(pDX, IDC_EDIT_HITPOINTS, m_strHitPoints);
	DDX_Text(pDX, IDC_EDIT_ATTACK, m_strAttack);
	DDX_Text(pDX, IDC_EDIT_DEFENSE, m_strDefense);
	DDX_Text(pDX, IDC_EDIT_SPECIALATTACK, m_strSpecialAttack);
	DDX_Text(pDX, IDC_EDIT_SPECIALDEFENSE, m_strSpecialDefense);
	DDX_Text(pDX, IDC_EDIT_SPEED, m_strSpeed);
	DDX_Check(pDX, IDC_CHECK_STATS2, m_bStatsIV);
	DDX_Text(pDX, IDC_EDIT_HITPOINTS2, m_strIvHitPoints);
	DDX_Text(pDX, IDC_EDIT_ATTACK2, m_strIvAttack);
	DDX_Text(pDX, IDC_EDIT_DEFENSE2, m_strIvDefense);
	DDX_Text(pDX, IDC_EDIT_SPECIALATTACK2, m_strIvSpecialAttack);
	DDX_Text(pDX, IDC_EDIT_SPECIALDEFENSE2, m_strIvSpecialDefense);
	DDX_Text(pDX, IDC_EDIT_SPEED2, m_strIvSpeed);
	DDX_CBString(pDX, IDC_COMBO_BALL, m_strBall);
	DDX_Text(pDX, IDC_EDIT_EVENT, m_strEvent);
	DDX_CBString(pDX, IDC_COMBO_MANIPULATION, m_strManipulation);
	DDX_Text(pDX, IDC_EDIT_MISCELLANEOUS, m_strMiscellaneous);
	DDX_Text(pDX, IDC_EDIT_URL, m_strURL);
	DDX_Text(pDX, IDC_EDIT_CATCHPLACE, m_strCatchPlace);
	DDX_Control(pDX, IDC_STATIC_HITPOINTS, m_statHitPoints);
	DDX_Control(pDX, IDC_STATIC_Attack, m_statAttack);
	DDX_Control(pDX, IDC_STATIC_DEFENSE, m_statDefense);
	DDX_Control(pDX, IDC_STATIC_SPECIALATTACK, m_statSpecialAttack);
	DDX_Control(pDX, IDC_STATIC_SPECIALDEFENSE, m_statSpecialDefense);
	DDX_Control(pDX, IDC_STATIC_SPEED, m_statSpeed);
	DDX_Control(pDX, IDC_EDIT_ATTACK, m_editAttack);
	DDX_Control(pDX, IDC_EDIT_HITPOINTS, m_editHitPoints);
	DDX_Control(pDX, IDC_EDIT_DEFENSE, m_editDefense);
	DDX_Control(pDX, IDC_EDIT_SPECIALATTACK, m_editSpecialAttack);
	DDX_Control(pDX, IDC_EDIT_SPECIALDEFENSE, m_editSpecialDefense);
	DDX_Control(pDX, IDC_EDIT_SPEED, m_editSpeed);
	DDX_Control(pDX, IDC_STATIC_HITPOINTS2, m_statIvHitPoints);
	DDX_Control(pDX, IDC_STATIC_Attack2, m_statIvAttack);
	DDX_Control(pDX, IDC_STATIC_DEFENSE2, m_statIvDefense);
	DDX_Control(pDX, IDC_STATIC_SPECIALATTACK2, m_statIvSpecialAttack);
	DDX_Control(pDX, IDC_STATIC_SPECIALDEFENSE2, m_statIvSpecialDefense);
	DDX_Control(pDX, IDC_STATIC_SPEED2, m_statIvSpeed);
	DDX_Control(pDX, IDC_EDIT_HITPOINTS2, m_editIvHitPoints);
	DDX_Control(pDX, IDC_EDIT_ATTACK2, m_editIvAttack);
	DDX_Control(pDX, IDC_EDIT_DEFENSE2, m_editIvDefense);
	DDX_Control(pDX, IDC_EDIT_SPECIALATTACK2, m_editIvSpecialAttack);
	DDX_Control(pDX, IDC_EDIT_SPECIALDEFENSE2, m_editIvSpecialDefense);
	DDX_Control(pDX, IDC_EDIT_SPEED2, m_editIvSpeed);
	DDX_Control(pDX, IDC_STATIC_BOXIV, m_statIvBox);
	DDX_Control(pDX, IDC_STATIC_BOX, m_statBox);
	DDX_Control(pDX, IDC_MONTHCALENDAR1, m_EditDate);
	DDX_Control(pDX, IDC_STATIC_CATCHPLACE2, m_statCatchPlace);
	DDX_Control(pDX, IDC_EDIT_CATCHPLACE, m_editCatchPlace);
	DDX_Check(pDX, IDC_CHECK_CATCHPLACE, m_bCatchPlace);
	DDX_Control(pDX, IDC_STATIC_REGION, m_statCaptureRegion);
	DDX_Control(pDX, IDC_COMBO_REGION, m_EditCaptureRegion);
	DDX_Check(pDX, IDC_CHECK_FE, m_bFatefulEncounter);
	DDX_Control(pDX, IDC_STATIC_CATCHLEVEL, m_statCatchLevel);
	DDX_Text(pDX, IDC_EDIT_CATCHLEVEL, m_strCatchLevel);
	DDX_Control(pDX, IDC_EDIT_CATCHLEVEL, m_editCatchLevel);
	DDX_MonthCalCtrl(pDX, IDC_MONTHCALENDAR1, m_dateCatchDate);
	DDX_CBIndex(pDX, IDC_COMBO_FORM, m_iForm);
}

BEGIN_MESSAGE_MAP(CBisafansBlacklistEditorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(MCN_SELCHANGE, IDC_MONTHCALENDAR1, &CBisafansBlacklistEditorDlg::OnMcnSelchangeMonthcalendar1)
	ON_BN_CLICKED(IDC_CHECK_STATS, &CBisafansBlacklistEditorDlg::OnBnClickedCheckStats)
	ON_BN_CLICKED(IDC_CHECK_STATS2, &CBisafansBlacklistEditorDlg::OnBnClickedCheckStatsIV)
	ON_BN_CLICKED(IDC_CHECK_DATE, &CBisafansBlacklistEditorDlg::OnBnClickedCheckDate)
	ON_BN_CLICKED(IDC_CHECK_CATCHPLACE, &CBisafansBlacklistEditorDlg::OnBnClickedCheckCatchplace)
	ON_LBN_SELCHANGE(IDC_LIST_RIBBONALL, &CBisafansBlacklistEditorDlg::OnLbnSelchangeListRibbonall)
	ON_BN_CLICKED(IDC_BUTTON_RIBBON, &CBisafansBlacklistEditorDlg::OnBnClickedButtonRibbon)
END_MESSAGE_MAP()


// CBisafansBlacklistEditorDlg-Meldungshandler

BOOL CBisafansBlacklistEditorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Hinzufügen des Menübefehls "Info..." zum Systemmenü.

	// IDM_ABOUTBOX muss sich im Bereich der Systembefehle befinden.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Symbol für dieses Dialogfeld festlegen.  Wird automatisch erledigt
	//  wenn das Hauptfenster der Anwendung kein Dialogfeld ist
	SetIcon(m_hIcon, TRUE);			// Großes Symbol verwenden
	SetIcon(m_hIcon, FALSE);		// Kleines Symbol verwenden

	// TODO: Hier zusätzliche Initialisierung einfügen

	return TRUE;  // TRUE zurückgeben, wenn der Fokus nicht auf ein Steuerelement gesetzt wird
}

void CBisafansBlacklistEditorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// Wenn Sie dem Dialogfeld eine Schaltfläche "Minimieren" hinzufügen, benötigen Sie
//  den nachstehenden Code, um das Symbol zu zeichnen.  Für MFC-Anwendungen, die das 
//  Dokument/Ansicht-Modell verwenden, wird dies automatisch ausgeführt.

void CBisafansBlacklistEditorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // Gerätekontext zum Zeichnen

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Symbol in Clientrechteck zentrieren
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Symbol zeichnen
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Die System ruft diese Funktion auf, um den Cursor abzufragen, der angezeigt wird, während der Benutzer
//  das minimierte Fenster mit der Maus zieht.
HCURSOR CBisafansBlacklistEditorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


//Methode zum Umwandeln der Varablen in CString für PHP Export
CString CBisafansBlacklistEditorDlg::GetPHP()
{
	CString var;
	CString varForm = ConvertFormToString();
	CString varShiny = ConvertShinyToCString();
	CString varCatchPlace = ConvertCatchPlace();
	varCatchPlace = ConvertFatefulEncounterToCString(varCatchPlace);
	CString varDate = ConvertDateToCString();
	CString varStats = ConvertStatsToCString();
	CString varIvStats = ConvertIvStatsToCString();
	CString varRibbon = ConvertRibbonToCString();
	CString varManipulation = ConvertManipulationToCString();
	var.Format(_T("Tauschbasar::$blacklist[%u] = array(\r\n\t\t'nick' = > '%s',\r\n\t\t'form' => array('%s', ''),\r\n\t\t'shiny' = > %s,\r\n\t\t'ot' = > '%s',\r\n\t\t'id' = > '%s',\r\n\t\t'level' = > %s,\r\n\t\t'gefangen' = > array(\r\n\t\t\t'ort' = > '%s',\r\n\t\t\t'level' = > %s,\r\n\t\t\t'datum' = > array(%s)\r\n\t\t),\r\n\t\t'ball' = > '%s',\r\n\t\t'dv-spruch' = > '%s',\r\n\t\t'werte' = > array(%s),\r\n\t\t'wesen' = > '%s', \r\n\t\t'dvs' = > array(%s), \r\n\t\t'baender' = > array(\r\n\t\t\t%s\r\n\t\t),\r\n\t\t'event' = > '%s', \r\n\t\t'manipulation' = > '%s', \r\n\t\t 'sonstiges' = > '', \r\n\t),),"), _T("Paltzhalter"), m_iDextNumber + 1, m_strNick, m_strForm, varShiny, m_strOT, m_strID, m_strLevel, varCatchPlace, m_strCatchLevel, varDate, m_strBall, m_strCharacteristic, varStats, m_strNature, varIvStats, varRibbon, m_strEvent, varManipulation, m_strMiscellaneous);
	return var;
}

//Methode zum Umwandeln des Shiny Stadus in CString
CString CBisafansBlacklistEditorDlg::ConvertShinyToCString()
{
	switch (m_bShiny) {
	case FALSE:
		return _T("false");
		break;
	case TRUE:
		return _T("true");
		break;
	}
	return _T("FEHLER");
}

//Methode zum Umwandeln des Fangortes in CString
CString CBisafansBlacklistEditorDlg::ConvertCatchPlace()
{
	switch (m_bCatchPlace) {
	case FALSE:
		return m_strCatchPlace;
		break;
	case TRUE:
		return ConvertRegionToCString();
		break;
	}
	return _T("FEHLER");
}

//Methode zum Umwandeln der Region in CString
CString CBisafansBlacklistEditorDlg::ConvertRegionToCString()
{
	if(m_strCatchRegion == _T("Kanto(VC RBY)"))
	{
		return _T("Kanto-Region");
	}
	if(m_strCatchRegion == _T("Kanto(FRBG)"))
	{
		return _T("Kanto-Region");
	}
	if(m_strCatchRegion == _T("Johto(VC GSK)"))
	{
		return _T("Johto-Region");
	}
	if (m_strCatchRegion == _T("Johto(HGSS)"))
	{
		return _T("Johto-Region");
	}	
	if (m_strCatchRegion == _T("Hoenn(RSS)"))
	{
		return _T("Hoenn-Region");
	}	
	if (m_strCatchRegion == _T("Hoenn(ORAS)"))
	{
		return _T("Hoenn-Region");
	}	
	if (m_strCatchRegion == _T("Sinnoh(DPP)"))
	{
		return _T("Sinnoh-Region");
	}
	if (m_strCatchRegion == _T("Einall(SW & SW2)"))
	{
		return _T("Einall-Region");
	}
	if (m_strCatchRegion == _T("Kalos(XY)"))
	{
		return _T("Kalos-Region");
	}
	if (m_strCatchRegion == _T("Alola(SM & USUM)"))
	{
		return _T("Alola-Region");
	}
	if (m_strCatchRegion == _T("Galar(SwSh)"))
	{
		return _T("Galar-Region");
	}
	if (m_strCatchRegion == _T("Orre(COL & XD)"))
	{
		return _T("Orre-Region");
	}
	return _T("FEHLER");
}

CString CBisafansBlacklistEditorDlg::ConvertFatefulEncounterToCString(CString _var)
{
	if(m_bFatefulEncounter==TRUE)
	{
		_var.Format(_T("%s, schicksalhafte Begegnung"), _var);
	}
	return _var;
}

CString CBisafansBlacklistEditorDlg::ConvertStatsToCString()
{
	CString var;
	if (m_bStats == TRUE)
	{
		var.Format(_T("\r\n\t\t\t'kp' = > %s, \r\n\t\t\t'ang' = > %s, \r\n\t\t\t'vert' = > %s, \r\n\t\t\t'sang' = > %s, \r\n\t\t\t'svert' = > %s, \r\n\t\t\t'init' = > %s\r\n\t\t"), m_strHitPoints, m_strAttack, m_strDefense, m_strSpecialAttack, m_strSpecialDefense, m_strSpeed);
	}
	return var;
	}

CString CBisafansBlacklistEditorDlg::ConvertIvStatsToCString()
{
	CString var;
	if (m_bStatsIV == TRUE)
	{
		var.Format(_T("\r\n\t\t\t'kp' = > %s, \r\n\t\t\t'ang' = > %s, \r\n\t\t\t'vert' = > %s, \r\n\t\t\t'sang' = > %s, \r\n\t\t\t'svert' = > %s, \r\n\t\t\t'init' = > %s\r\n\t\t"), m_strIvHitPoints, m_strIvAttack, m_strIvDefense, m_strIvSpecialAttack, m_strIvSpecialAttack, m_strIvSpeed);
	}
	return var;
}

CString CBisafansBlacklistEditorDlg::ConvertRibbonToCString()
{
	CString var;

	//Allgemein
	if (m_cRibbon.m_bAllBanddesalolachamps = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-alola-champs',"), var);
	}

	if (m_cRibbon.m_bAllBanddesgalarchamps = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-galar-champs',"), var);
	}

	if (m_cRibbon.m_bAllBanddeshoennchamps = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-hoenn-champs',"), var);
	}

	if (m_cRibbon.m_bAllBanddeskaloschamps = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-kalos-champs',"), var);
	}

	if (m_cRibbon.m_bAllBanddesrekords = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-rekords',"), var);
	}

	if (m_cRibbon.m_bAllBanddeswettbewerbsstars = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-wettbewerbsstars',"), var);
	}

	if (m_cRibbon.m_bAllBattleroyalemeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'battle-royale-meisterband',"), var);
	}

	if (m_cRibbon.m_bAllBaumeliteband = FALSE)
	{
		var.Format(_T("%s\r\n'baum-eliteband',"), var);
	}

	if (m_cRibbon.m_bAllBaummeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'baum-meisterband',"), var);
	}

	if (m_cRibbon.m_bAllBlauesband = FALSE)
	{
		var.Format(_T("%s\r\n'blaues-band',"), var);
	}

	if (m_cRibbon.m_bAllCoolnessmeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'coolnessmeisterband',"), var);
	}

	if (m_cRibbon.m_bAllDienstagsband = FALSE)
	{
		var.Format(_T("%s\r\n'dienstagsband',"), var);
	}

	if (m_cRibbon.m_bAllDonnerstagsband = FALSE)
	{
		var.Format(_T("%s\r\n'donnerstagsband',"), var);
	}

	if (m_cRibbon.m_bAllFestivalband = FALSE)
	{
		var.Format(_T("%s\r\n'festival-band',"), var);
	}

	if (m_cRibbon.m_bAllFleissband = FALSE)
	{
		var.Format(_T("%s\r\n'fleiss-band',"), var);
	}

	if (m_cRibbon.m_bAllFreitagsband = FALSE)
	{
		var.Format(_T("%s\r\n'freitagsband',"), var);
	}

	if (m_cRibbon.m_bAllFussabdruckband = FALSE)
	{
		var.Format(_T("%s\r\n'fussabdruck-band',"), var);
	}

	if (m_cRibbon.m_bAllGeburtstagsband = FALSE)
	{
		var.Format(_T("%s\r\n'geburtstagsband',"), var);
	}

	if (m_cRibbon.m_bAllGruenesband = FALSE)
	{
		var.Format(_T("%s\r\n'gruenes-band',"), var);
	}

	if (m_cRibbon.m_bAllKampfgedenkband1 = FALSE)
	{
		var.Format(_T("%s\r\n'kampfgedenkband-1',"), var);
	}

	if (m_cRibbon.m_bAllKampfgedenkband2 = FALSE)
	{
		var.Format(_T("%s\r\n'kampfgedenkband-2',"), var);
	}

	if (m_cRibbon.m_bAllKampfmeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'kampfmeisterband',"), var);
	}

	if (m_cRibbon.m_bAllKlassischesband = FALSE)
	{
		var.Format(_T("%s\r\n'klassisches-band',"), var);
	}

	if (m_cRibbon.m_bAllKlugheitsmeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'klugheitsmeisterband',"), var);
	}

	if (m_cRibbon.m_bAllMeisterkampfband = FALSE)
	{
		var.Format(_T("%s\r\n'meisterkampfband',"), var);
	}

	if (m_cRibbon.m_bAllMeisterrangband = FALSE)
	{
		var.Format(_T("%s\r\n'meisterrangband',"), var);
	}

	if (m_cRibbon.m_bAllMittwochsband = FALSE)
	{
		var.Format(_T("%s\r\n'mittwochsband',"), var);
	}

	if (m_cRibbon.m_bAllMontagsband = FALSE)
	{
		var.Format(_T("%s\r\n'montagsband',"), var);
	}

	if (m_cRibbon.m_bAllPremierband = FALSE)
	{
		var.Format(_T("%s\r\n'premierband',"), var);
	}

	if (m_cRibbon.m_bAllProfikampfband = FALSE)
	{
		var.Format(_T("%s\r\n'profikampfband',"), var);
	}

	if (m_cRibbon.m_bAllPutzigkeitsmeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'putzigkeitsmeisterband',"), var);
	}

	if (m_cRibbon.m_bAllRotesband = FALSE)
	{
		var.Format(_T("%s\r\n'rotes-band',"), var);
	}

	if (m_cRibbon.m_bAllSamstagsband = FALSE)
	{
		var.Format(_T("%s\r\n'samstagsband',"), var);
	}

	if (m_cRibbon.m_bAllSchoenheitsmeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'schoenheitsmeisterband',"), var);
	}

	if (m_cRibbon.m_bAllSonderband = FALSE)
	{
		var.Format(_T("%s\r\n'sonderband',"), var);
	}

	if (m_cRibbon.m_bAllSonntagsband = FALSE)
	{
		var.Format(_T("%s\r\n'sonntagsband',"), var);
	}

	if (m_cRibbon.m_bAllStaerkemeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'staerkemeisterband',"), var);
	}

	if (m_cRibbon.m_bAllTrainingsband = FALSE)
	{
		var.Format(_T("%s\r\n'trainingsband',"), var);
	}

	if (m_cRibbon.m_bAllTurmmeisterband = FALSE)
	{
		var.Format(_T("%s\r\n'turmmeisterband',"), var);
	}

	if (m_cRibbon.m_bAllVeranstaltungsband = FALSE)
	{
		var.Format(_T("%s\r\n'veranstaltungsband',"), var);
	}

	if (m_cRibbon.m_bAllWettbewerbsgedenkband1 = FALSE)
	{
		var.Format(_T("%s\r\n'wettbewerbsgedenkband-1',"), var);
	}

	if (m_cRibbon.m_bAllWettbewerbsgedenkband2 = FALSE)
	{
		var.Format(_T("%s\r\n'wettbewerbsgedenkband-2',"), var);
	}

	if (m_cRibbon.m_bAllWunschband = FALSE)
	{
		var.Format(_T("%s\r\n'wunschband',"), var);
	}

	if (m_cRibbon.m_bAllZutraulichkeitsband = FALSE)
	{
		var.Format(_T("%s\r\n'zutraulichkeitsband',"), var);
	}

	// Generation 3
	if (m_cRibbon.m_bGen3100siegeband = FALSE)
	{
		var.Format(_T("%s\r\n'100-siege-band',"), var);
	}

	if (m_cRibbon.m_bGen350siegeband = FALSE)
	{
		var.Format(_T("%s\r\n'50-siege-band',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderanmuthyper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-anmut-hyper',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderanmutmaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-anmut-master',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderanmutsuper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-anmut-super',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderanmut = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-anmut',"), var);
	}

	if (m_cRibbon.m_bGen3Banddercoolnesshyper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-coolness-hyper',"), var);
	}

	if (m_cRibbon.m_bGen3Banddercoolnessmaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-coolness-master',"), var);
	}

	if (m_cRibbon.m_bGen3Banddercoolnesssuper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-coolness-super',"), var);
	}

	if (m_cRibbon.m_bGen3Banddercoolness = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-coolness',"), var);
	}

	if (m_cRibbon.m_bGen3Banddererde = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-erde',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderklugheithyper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-klugheit-hyper',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderklugheitmaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-klugheit-master',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderklugheitsuper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-klugheit-super',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderklugheit = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-klugheit',"), var);
	}

	if (m_cRibbon.m_bGen3Banddernation = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-nation',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderschoenheithyper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-schoenheit-hyper',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderschoenheitmaste = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-schoenheit-master',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderschoenheitsuper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-schoenheit-super',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderschoenheit = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-schoenheit',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderstaerkehyper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-staerke-hyper',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderstaerkemaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-staerke-master',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderstaerkesuper = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-staerke-super',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderstaerke = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-staerke',"), var);
	}

	if (m_cRibbon.m_bGen3Bandderwelt = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-welt',"), var);
	}

	if (m_cRibbon.m_bGen3Banddeschamps = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-champs',"), var);
	}

	if (m_cRibbon.m_bGen3Banddesgewinners = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-gewinners',"), var);
	}

	if (m_cRibbon.m_bGen3Banddeskuenstlers = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-kuenstlers',"), var);
	}

	if (m_cRibbon.m_bGen3Banddeslandes = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-landes',"), var);
	}

	if (m_cRibbon.m_bGen3Banddessieges = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-sieges',"), var);
	}

	if (m_cRibbon.m_bGen3Cryptoerloesungsband = FALSE)
	{
		var.Format(_T("%s\r\n'crypto-erloesungs-band',"), var);
	}

	if (m_cRibbon.m_bGen3Duellbergband = FALSE)
	{
		var.Format(_T("%s\r\n'duellberg-band',"), var);
	}

	if (m_cRibbon.m_bGen3Turnierband1 = FALSE)
	{
		var.Format(_T("%s\r\n'turnier-band-1',"), var);
	}

	if (m_cRibbon.m_bGen3Turnierband2 = FALSE)
	{
		var.Format(_T("%s\r\n'turnier-band-2',"), var);
	}

	if (m_cRibbon.m_bGen3Turnierband3 = FALSE)
	{
		var.Format(_T("%s\r\n'turnier-band-3',"), var);
	}

// Generation 4
	if (m_cRibbon.m_bGen4Bandderanmutmaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-anmut-master',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderanmutmega = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-anmut-mega',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderanmutultra = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-anmut-ultra',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderanmut = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-anmut',"), var);
	}

	if (m_cRibbon.m_bGen4Banddercoolnessmaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-coolness-master',"), var);
	}

	if (m_cRibbon.m_bGen4Banddercoolnessmega = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-coolness-mega',"), var);
	}

	if (m_cRibbon.m_bGen4Banddercoolnessultra = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-coolness-ultra',"), var);
	}

	if (m_cRibbon.m_bGen4Banddercoolness = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-coolness',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderentspannung = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-entspannung',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderfaehigkeit = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-faehigkeit',"), var);
	}

	if (m_cRibbon.m_bGen4Banddergeschichte = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-geschichte',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderklugheitmaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-klugheit-master',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderklugheitmega = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-klugheit-mega',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderklugheitultra = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-klugheit-ultra',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderklugheit = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-klugheit',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderlegende = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-legende',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderschoenheitmaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-schoenheit-master',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderschoenheitmega = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-schoenheit-mega',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderschoenheitultra = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-schoenheit-ultra',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderschoenheit = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-schoenheit',"), var);
	}

	if (m_cRibbon.m_bGen4Banddersorglosigkeit = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-sorglosigkeit',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderstaerkemaster = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-staerke-master',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderstaerkemega = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-staerke-mega',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderstaerkeultra = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-staerke-ultra',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderstaerke = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-staerke',"), var);
	}

	if (m_cRibbon.m_bGen4Bandderwachsamkeit = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-wachsamkeit',"), var);
	}

	if (m_cRibbon.m_bGen4Banddeschampsvon = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-champs-von',"), var);
	}

	if (m_cRibbon.m_bGen4Banddeslaechelns = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-laechelns',"), var);
	}

	if (m_cRibbon.m_bGen4Banddesniederschlags = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-niederschlags',"), var);
	}

	if (m_cRibbon.m_bGen4Banddertraurigkeit = FALSE)
	{
		var.Format(_T("%s\r\n'band-der-traurigkeit',"), var);
	}

	if (m_cRibbon.m_bGen4Banddesschlafens = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-schlafens',"), var);
	}

	if (m_cRibbon.m_bGen4Banddesschocks = FALSE)
	{
		var.Format(_T("%s\r\n'band-des-schocks',"), var);
	}

	if (m_cRibbon.m_bGen4Doppelbandderfaehigkeit = FALSE)
	{
		var.Format(_T("%s\r\n'doppel-band-der-faehigkeit',"), var);
	}

	if (m_cRibbon.m_bGen4Grossesbandderfaehigkeit = FALSE)
	{
		var.Format(_T("%s\r\n'grosses-band-der-faehigkeit',"), var);
	}

	if (m_cRibbon.m_bGen4Hinreissendesband = FALSE)
	{
		var.Format(_T("%s\r\n'hinreissendes-band',"), var);
	}

	if (m_cRibbon.m_bGen4Hinreissendeskoeniglichesband = FALSE)
	{
		var.Format(_T("%s\r\n'hinreissendes-koenigliches-band',"), var);
	}

	if (m_cRibbon.m_bGen4Koeniglichesband = FALSE)
	{
		var.Format(_T("%s\r\n'koenigliches-band',"), var);
	}

	if (m_cRibbon.m_bGen4Multibandderfaehigkeit = FALSE)
	{
		var.Format(_T("%s\r\n'multi-band-der-faehigkeit',"), var);
	}

	if (m_cRibbon.m_bGen4Paarbandderfaehigkeit = FALSE)
	{
		var.Format(_T("%s\r\n'paar-band-der-faehigkeit',"), var);
	}

	if (m_cRibbon.m_bGen4Weltbandderfaehigkeit = FALSE)
	{
		var.Format(_T("%s\r\n'welt-band-der-faehigkeit',"), var);
	}

	return var;
}

CString CBisafansBlacklistEditorDlg::ConvertManipulationToCString()
{
	CString var;
	if (m_strManipulation == _T("Cheat"))
	{
		var = _T("'hack',/*cheat*/");
	}

	if (m_strManipulation == _T("Hack"))

	{
		var = _T("'hack',");
	}
	if (m_strManipulation == _T("Illegaler-Klon"))

	{
		var = _T("'illegaler-klon',");
	}

	return var;
}

// Formen müssen noch eingebaut werden
CString CBisafansBlacklistEditorDlg::ConvertFormToString()
{
	switch (m_iForm) {
	case 0:
		return _T("");
		break;
	case 1:
		return _T("");
		break;
	case 2:
		return _T("");
		break;
	case 3:
		return _T("");
		break;
	case 4:
		return _T("");
		break;
	case 5:
		return _T("");
		break;
	case 6:
		return _T("");
		break;
	case 7:
		return _T("");
		break;
	case 8:
		return _T("");
		break;
	case 9:
		return _T("");
		break;
	case 10:
		return _T("");
		break;
	case 11:
		return _T("");
		break;
	case 12:
		return _T("");
		break;
	case 13:
		return _T("");
		break;
	case 14:
		return _T("");
		break;
	case 15:
		return _T("");
		break;
	case 16:
		return _T("");
		break;
	case 17:
		return _T("");
		break;
	case 18:
		return _T("");
		break;
	case 19:
		return _T("");
		break;
	case 20:
		return _T("");
		break;
	case 21:
		return _T("");
		break;
	case 22:
		return _T("");
		break;
	case 23:
		return _T("");
		break;
	case 24:
		return _T("");
		break;
	case 25:
		return _T("");
		break;
	case 26:
		return _T("");
		break;
	case 27:
		return _T("");
		break;
	case 28:
		return _T("");
		break;
	case 29:
		return _T("");
		break;
	case 30:
		return _T("");
		break;
	case 31:
		return _T("");
		break;
	case 32:
		return _T("");
		break;
	case 33:
		return _T("");
		break;
	case 34:
		return _T("");
		break;
	case 35:
		return _T("");
		break;
	case 36:
		return _T("");
		break;
	case 37:
		return _T("");
		break;
	case 38:
		return _T("");
		break;
	case 39:
		return _T("");
		break;
	case 40:
		return _T("");
		break;
	case 41:
		return _T("");
		break;
	case 42:
		return _T("");
		break;
	case 43:
		return _T("");
		break;
	case 44:
		return _T("");
		break;
	case 45:
		return _T("");
		break;
	case 46:
		return _T("");
		break;
	case 47:
		return _T("");
		break;
	case 48:
		return _T("");
		break;
	case 49:
		return _T("");
		break;
	case 50:
		return _T("");
		break;
	case 51:
		return _T("");
		break;
	case 52:
		return _T("");
		break;
	case 53:
		return _T("");
		break;
	case 54:
		return _T("");
		break;
	case 55:
		return _T("");
		break;
	case 56:
		return _T("");
		break;
	case 57:
		return _T("");
		break;
	case 58:
		return _T("");
		break;
	case 59:
		return _T("");
		break;
	case 60:
		return _T("");
		break;
	case 61:
		return _T("");
		break;
	case 62:
		return _T("");
		break;
	case 63:
		return _T("");
		break;
	case 64:
		return _T("");
		break;
	case 65:
		return _T("");
		break;
	case 66:
		return _T("");
		break;
	case 67:
		return _T("");
		break;
	case 68:
		return _T("");
		break;
	case 69:
		return _T("");
		break;
	case 70:
		return _T("");
		break;
	case 71:
		return _T("");
		break;
	case 72:
		return _T("");
		break;
	case 73:
		return _T("");
		break;
	case 74:
		return _T("");
		break;
	case 75:
		return _T("");
		break;
	case 76:
		return _T("");
		break;
	case 77:
		return _T("");
		break;
	case 78:
		return _T("");
		break;
	case 79:
		return _T("");
		break;
	case 80:
		return _T("");
		break;
	case 81:
		return _T("");
		break;
	case 82:
		return _T("");
		break;
	case 83:
		return _T("");
		break;
	case 84:
		return _T("");
		break;
	case 85:
		return _T("");
		break;
	case 86:
		return _T("");
		break;
	case 87:
		return _T("");
		break;
	case 88:
		return _T("");
		break;
	case 89:
		return _T("");
		break;
	case 90:
		return _T("");
		break;
	case 91:
		return _T("");
		break;
	case 92:
		return _T("");
		break;
	case 93:
		return _T("");
		break;
	case 94:
		return _T("");
		break;
	case 95:
		return _T("");
		break;
	case 96:
		return _T("");
		break;
	case 97:
		return _T("");
		break;
	case 98:
		return _T("");
		break;
	case 99:
		return _T("");
		break;
	case 100:
		return _T("");
		break;
	case 101:
		return _T("");
		break;
	case 102:
		return _T("");
		break;
	case 103:
		return _T("");
		break;
	case 104:
		return _T("");
		break;
	case 105:
		return _T("");
		break;
	case 106:
		return _T("");
		break;
	case 107:
		return _T("");
		break;
	case 108:
		return _T("");
		break;
	case 109:
		return _T("");
		break;
	case 110:
		return _T("");
		break;
	case 111:
		return _T("");
		break;
	case 112:
		return _T("");
		break;
	case 113:
		return _T("");
		break;
	case 114:
		return _T("");
		break;
	case 115:
		return _T("");
		break;
	case 116:
		return _T("");
		break;
	case 117:
		return _T("");
		break;
	case 118:
		return _T("");
		break;
	case 119:
		return _T("");
		break;
	case 120:
		return _T("");
		break;
	case 121:
		return _T("");
		break;
	case 122:
		return _T("");
		break;
	case 123:
		return _T("");
		break;
	case 124:
		return _T("");
		break;
	case 125:
		return _T("");
		break;
	case 126:
		return _T("");
		break;
	case 127:
		return _T("");
		break;
	case 128:
		return _T("");
		break;
	case 129:
		return _T("");
		break;
	case 130:
		return _T("");
		break;
	case 131:
		return _T("");
		break;
	case 132:
		return _T("");
		break;
	case 133:
		return _T("");
		break;
	case 134:
		return _T("");
		break;
	case 135:
		return _T("");
		break;
	case 136:
		return _T("");
		break;
	case 137:
		return _T("");
		break;
	case 138:
		return _T("");
		break;
	case 139:
		return _T("");
		break;
	case 140:
		return _T("");
		break;
	case 141:
		return _T("");
		break;
	case 142:
		return _T("");
		break;
	case 143:
		return _T("");
		break;
	case 144:
		return _T("");
		break;
	case 145:
		return _T("");
		break;
	case 146:
		return _T("");
		break;
	case 147:
		return _T("");
		break;
	case 148:
		return _T("");
		break;
	case 149:
		return _T("");
		break;
	case 150:
		return _T("");
		break;
	case 151:
		return _T("");
		break;
	case 152:
		return _T("");
		break;
	case 153:
		return _T("");
		break;
	case 154:
		return _T("");
		break;
	case 155:
		return _T("");
		break;
	case 156:
		return _T("");
		break;
	case 157:
		return _T("");
		break;
	case 158:
		return _T("");
		break;
	case 159:
		return _T("");
		break;
	case 160:
		return _T("");
		break;
	case 161:
		return _T("");
		break;
	case 162:
		return _T("");
		break;
	case 163:
		return _T("");
		break;
	case 164:
		return _T("");
		break;
	case 165:
		return _T("");
		break;
	case 166:
		return _T("");
		break;
	case 167:
		return _T("");
		break;
	case 168:
		return _T("");
		break;
	case 169:
		return _T("");
		break;
	case 170:
		return _T("");
		break;
	case 171:
		return _T("");
		break;
	case 172:
		return _T("");
		break;
	case 173:
		return _T("");
		break;
	case 174:
		return _T("");
		break;
	case 175:
		return _T("");
		break;
	case 176:
		return _T("");
		break;
	case 177:
		return _T("");
		break;
	case 178:
		return _T("");
		break;
	case 179:
		return _T("");
		break;
	case 180:
		return _T("");
		break;
	case 181:
		return _T("");
		break;
	case 182:
		return _T("");
		break;
	case 183:
		return _T("");
		break;
	case 184:
		return _T("");
		break;
	case 185:
		return _T("");
		break;
	case 186:
		return _T("");
		break;
	case 187:
		return _T("");
		break;
	case 188:
		return _T("");
		break;
	case 189:
	default:
		return _T("FEHLER");
		break;
	}
}

CString CBisafansBlacklistEditorDlg::ConvertDateToCString()
{
	CString var;
	//varDay = m_dateCatchDate.GetDay();

	if(m_bCatchDate == TRUE)
	{ 
	var.Format(_T("\r\n\t\t'tag' => %s,\r\n\t\t'monat' => %s,\r\n\t\t'jahr' => %s\r\n\t\t\t"), m_dateCatchDate.GetDay(), m_dateCatchDate.GetMonth(), m_dateCatchDate.GetYear());
	}
	return var;
}

//Methode zum Aus- und Einblenden der Werte
void CBisafansBlacklistEditorDlg::OnBnClickedCheckStats()
{
	switch (m_bStats) {
	case FALSE:
		m_statHitPoints.ShowWindow(SW_SHOW);
		m_statAttack.ShowWindow(SW_SHOW);
		m_statDefense.ShowWindow(SW_SHOW);
		m_statSpecialAttack.ShowWindow(SW_SHOW);
		m_statSpecialDefense.ShowWindow(SW_SHOW);
		m_statSpeed.ShowWindow(SW_SHOW);
		m_editHitPoints.ShowWindow(SW_SHOW);
		m_editAttack.ShowWindow(SW_SHOW);
		m_editDefense.ShowWindow(SW_SHOW);
		m_editSpecialAttack.ShowWindow(SW_SHOW);
		m_editSpecialDefense.ShowWindow(SW_SHOW);
		m_editSpeed.ShowWindow(SW_SHOW);
		m_statBox.ShowWindow(SW_SHOW);
		m_bStats = TRUE;
		break;
	case TRUE:
		m_statHitPoints.ShowWindow(SW_HIDE);
		m_statAttack.ShowWindow(SW_HIDE);
		m_statDefense.ShowWindow(SW_HIDE);
		m_statSpecialAttack.ShowWindow(SW_HIDE);
		m_statSpecialDefense.ShowWindow(SW_HIDE);
		m_statSpeed.ShowWindow(SW_HIDE);
		m_editHitPoints.ShowWindow(SW_HIDE);
		m_editAttack.ShowWindow(SW_HIDE);
		m_editDefense.ShowWindow(SW_HIDE);
		m_editSpecialAttack.ShowWindow(SW_HIDE);
		m_editSpecialDefense.ShowWindow(SW_HIDE);
		m_editSpeed.ShowWindow(SW_HIDE);
		m_statBox.ShowWindow(SW_HIDE);
		m_bStats = FALSE;
		break;
	}
}

//Methode zum Aus- und Einblenden der IV-Werte
void CBisafansBlacklistEditorDlg::OnBnClickedCheckStatsIV()
{
	switch (m_bStatsIV) {
	case FALSE:
		m_statIvHitPoints.ShowWindow(SW_SHOW);
		m_statIvAttack.ShowWindow(SW_SHOW);
		m_statIvDefense.ShowWindow(SW_SHOW);
		m_statIvSpecialAttack.ShowWindow(SW_SHOW);
		m_statIvSpecialDefense.ShowWindow(SW_SHOW);
		m_statIvSpeed.ShowWindow(SW_SHOW);
		m_editIvHitPoints.ShowWindow(SW_SHOW);
		m_editIvAttack.ShowWindow(SW_SHOW);
		m_editIvDefense.ShowWindow(SW_SHOW);
		m_editIvSpecialAttack.ShowWindow(SW_SHOW);
		m_editIvSpecialDefense.ShowWindow(SW_SHOW);
		m_editIvSpeed.ShowWindow(SW_SHOW);
		m_statIvBox.ShowWindow(SW_SHOW);
		m_bStatsIV = TRUE;
		break;
	case TRUE:
		m_statIvHitPoints.ShowWindow(SW_HIDE);
		m_statIvAttack.ShowWindow(SW_HIDE);
		m_statIvDefense.ShowWindow(SW_HIDE);
		m_statIvSpecialAttack.ShowWindow(SW_HIDE);
		m_statIvSpecialDefense.ShowWindow(SW_HIDE);
		m_statIvSpeed.ShowWindow(SW_HIDE);
		m_editIvHitPoints.ShowWindow(SW_HIDE);
		m_editIvAttack.ShowWindow(SW_HIDE);
		m_editIvDefense.ShowWindow(SW_HIDE);
		m_editIvSpecialAttack.ShowWindow(SW_HIDE);
		m_editIvSpecialDefense.ShowWindow(SW_HIDE);
		m_editIvSpeed.ShowWindow(SW_HIDE);
		m_statIvBox.ShowWindow(SW_HIDE);
		m_bStatsIV = FALSE;
		break;
	}
}

//Methode zum Aus- und Einblenden der Bänder
/*void CBisafansBlacklistEditorDlg::OnBnClickedCheckRibbon()
{
	switch (m_bRibbon) {
	case FALSE:
		m_statRibbonAll.ShowWindow(SW_SHOW);
		m_statRibbonGen3.ShowWindow(SW_SHOW);
		m_statRibbonGen4.ShowWindow(SW_SHOW);
		m_editRibbonAll.ShowWindow(SW_SHOW);
		m_editRibbonGen3.ShowWindow(SW_SHOW);
		m_editRibbonGen4.ShowWindow(SW_SHOW);
		m_statRibbonBox.ShowWindow(SW_SHOW);
		m_bRibbon = TRUE;
		break;
	case TRUE:
		m_statRibbonAll.ShowWindow(SW_HIDE);
		m_statRibbonGen3.ShowWindow(SW_HIDE);
		m_statRibbonGen4.ShowWindow(SW_HIDE);
		m_editRibbonAll.ShowWindow(SW_HIDE);
		m_editRibbonGen3.ShowWindow(SW_HIDE);
		m_editRibbonGen4.ShowWindow(SW_HIDE);
		m_statRibbonBox.ShowWindow(SW_HIDE);
		m_bRibbon = FALSE;
		break;
	}
}*/

//Methode zum Aus- und Einblenden des Kalenders
void CBisafansBlacklistEditorDlg::OnBnClickedCheckDate()
{
	switch (m_bCatchDate) {
	case FALSE:

		m_EditDate.ShowWindow(SW_SHOW);
		m_statCatchLevel.ShowWindow(SW_SHOW);
		m_editCatchLevel.ShowWindow(SW_SHOW);
		m_bCatchDate = TRUE;
		break;
	case TRUE:
		m_EditDate.ShowWindow(SW_HIDE);
		m_statCatchLevel.ShowWindow(SW_HIDE);
		m_editCatchLevel.ShowWindow(SW_HIDE);
		m_bCatchDate = FALSE;
		break;
	}
}

//Methode zum Aus- und Einblenden des Fangortes
void CBisafansBlacklistEditorDlg::OnBnClickedCheckCatchplace()
{
	switch (m_bCatchPlace) {
	case FALSE:
		m_statCatchPlace.ShowWindow(SW_SHOW);
		m_editCatchPlace.ShowWindow(SW_SHOW);
		m_statCaptureRegion.ShowWindow(SW_HIDE);
		m_EditCaptureRegion.ShowWindow(SW_HIDE);
		m_bCatchPlace = TRUE;
		break;
	case TRUE:
		m_statCatchPlace.ShowWindow(SW_HIDE);
		m_editCatchPlace.ShowWindow(SW_HIDE);
		m_statCaptureRegion.ShowWindow(SW_SHOW);
		m_EditCaptureRegion.ShowWindow(SW_SHOW);
		m_bCatchPlace = FALSE;
		break;
	}
}

void CBisafansBlacklistEditorDlg::OnMcnSelchangeMonthcalendar1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMSELCHANGE pSelChange = reinterpret_cast<LPNMSELCHANGE>(pNMHDR);
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
	*pResult = 0;
}



//Trash
void CAboutDlg::OnBnClickedCheckStats()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}
void CAboutDlg::OnBnClickedCheckDate()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}
void CAboutDlg::OnBnClickedCheckCatchPlace()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}
void CAboutDlg::OnBnClickedOk()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
	CDialogEx::OnOK();
}
void CAboutDlg::OnBnClickedButtonRibbon()
{
	CDialogEx::OnOK();
}
void CAboutDlg::OnBnClickedButtonCheckall()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CBisafansBlacklistEditorDlg::OnLbnSelchangeListRibbonall()
{
	CDialogEx::OnOK();
}






void CBisafansBlacklistEditorDlg::OnBnClickedButtonRibbon()
{
	RibbonDlg dlg;
	dlg.DoModal();
}



