
// Bisafans Blacklist EditorDlg.h: Headerdatei
//

#pragma once
#include "Ribbon.h"


// CBisafansBlacklistEditorDlg-Dialogfeld
class CBisafansBlacklistEditorDlg : public CDialogEx
{
// Konstruktion
public:
	CBisafansBlacklistEditorDlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BISAFANSBLACKLISTEDITOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString GetPHP();
	CString ConvertShinyToCString();
	CString ConvertCatchPlace();
	CString ConvertRegionToCString();
	CString ConvertFatefulEncounterToCString(CString _var);

	CString ConvertDateToCString();
	CString ConvertStatsToCString();
	CString ConvertIvStatsToCString();
	CString ConvertRibbonToCString();
	CString ConvertManipulationToCString();
	CString ConvertFormToString();

	afx_msg void OnMcnSelchangeMonthcalendar1(NMHDR *pNMHDR, LRESULT *pResult);
	int m_iDextNumber;
	CString m_strForm;
	CString m_strNick;
	CString m_strOT;
	CString m_strID;
	CString m_strLevel;
	CString m_strNature;
	CString m_strCharacteristic;
	BOOL m_bShiny;
	CString m_strAbility;
	
	CString m_strCatchRegion;
	COleDateTime m_dateCatchDate;
	BOOL m_bStats;
	CString m_strHitPoints;
	CString m_strAttack;
	CString m_strDefense;
	CString m_strSpecialAttack;
	CString m_strSpecialDefense;
	CString m_strSpeed;
	
	CString m_strIvHitPoints;
	CString m_strIvAttack;
	CString m_strIvDefense;
	CString m_strIvSpecialAttack;
	CString m_strIvSpecialDefense;
	CString m_strIvSpeed;
	
	CString m_strRibbonAll;
	CString m_strRibbonGen3;
	CString m_strRibbonGen4;
	CString m_strBall;
	CString m_strEvent;
	CString m_strManipulation;
	CString m_strMiscellaneous;
	CString m_strURL;
	CString m_strCatchPlace;
	
	
	//Elemente zum Aus- und Einblenden der Werte
	afx_msg void OnBnClickedCheckStats();
	CStatic m_statHitPoints;
	CStatic m_statAttack;
	CStatic m_statDefense;
	CStatic m_statSpecialAttack;
	CStatic m_statSpecialDefense;
	CStatic m_statSpeed;
	CEdit m_editHitPoints;
	CEdit m_editAttack;
	CEdit m_editDefense;
	CEdit m_editSpecialAttack;
	CEdit m_editSpecialDefense;
	CEdit m_editSpeed;
	CStatic m_statBox;

	//Elemente zum Aus- und Einblenden der IV-Werte
	afx_msg void OnBnClickedCheckStatsIV();
	BOOL m_bStatsIV;

	CStatic m_statIvHitPoints;
	CStatic m_statIvAttack;
	CStatic m_statIvDefense;
	CStatic m_statIvSpecialAttack;
	CStatic m_statIvSpecialDefense;
	CStatic m_statIvSpeed;
	CEdit m_editIvHitPoints;
	CEdit m_editIvAttack;
	CEdit m_editIvDefense;
	CEdit m_editIvSpecialAttack;
	CEdit m_editIvSpecialDefense;
	CEdit m_editIvSpeed;
	CStatic m_statIvBox;


	//Elemente zum Aus- und Einblenden des Kalenders
	afx_msg void OnBnClickedCheckDate();
	BOOL m_bCatchDate;
	CStatic m_statCatchLevel;
	CString m_strCatchLevel;
	CEdit m_editCatchLevel;
	
	CMonthCalCtrl m_EditDate;
	

	//Elemente zum Aus- und Einblenden des Fangortes
	afx_msg void OnBnClickedCheckCatchplace();
	BOOL m_bCatchPlace;

	CStatic m_statCatchPlace;
	CEdit m_editCatchPlace;
	
	
	
	CStatic m_statCaptureRegion;
	CComboBox m_EditCaptureRegion;
	BOOL m_bFatefulEncounter;

	
	afx_msg void OnLbnSelchangeListRibbonall();

	afx_msg void OnBnClickedButtonRibbon();

	CRibbon m_cRibbon;
	int m_iForm;
};
