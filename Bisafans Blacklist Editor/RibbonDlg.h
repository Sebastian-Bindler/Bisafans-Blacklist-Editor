#pragma once


// RibbonDlg-Dialog

class RibbonDlg : public CDialogEx
{
	DECLARE_DYNAMIC(RibbonDlg)

public:
	RibbonDlg(CWnd* pParent = nullptr);   // Standardkonstruktor
	virtual ~RibbonDlg();

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RIBBONS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung

	DECLARE_MESSAGE_MAP()
public:
	//Allgemein
	BOOL m_bAllBanddesalolachamps;
	BOOL m_bAllBanddesgalarchamps;
	BOOL m_bAllBanddeshoennchamps;
	BOOL m_bAllBanddeskaloschamps;
	BOOL m_bAllBanddesrekords;
	BOOL m_bAllBanddeswettbewerbsstars;
	BOOL m_bAllBattleroyalemeisterband;
	BOOL m_bAllBaumeliteband;
	BOOL m_bAllBaummeisterband;
	BOOL m_bAllBlauesband;
	BOOL m_bAllCoolnessmeisterband;
	BOOL m_bAllDienstagsband;
	BOOL m_bAllDonnerstagsband;
	BOOL m_bAllFestivalband;
	BOOL m_bAllFleissband;
	BOOL m_bAllFreitagsband;
	BOOL m_bAllFussabdruckband;
	BOOL m_bAllGeburtstagsband;
	BOOL m_bAllGruenesband;
	BOOL m_bAllKampfgedenkband1;
	BOOL m_bAllKampfgedenkband2;
	BOOL m_bAllKampfmeisterband;
	BOOL m_bAllKlassischesband;
	BOOL m_bAllKlugheitsmeisterband;
	BOOL m_bAllMeisterkampfband;
	BOOL m_bAllMeisterrangband;
	BOOL m_bAllMittwochsband;
	BOOL m_bAllMontagsband;
	BOOL m_bAllPremierband;
	BOOL m_bAllProfikampfband;
	BOOL m_bAllPutzigkeitsmeisterband;
	BOOL m_bAllRotesband;
	BOOL m_bAllSamstagsband;
	BOOL m_bAllSchoenheitsmeisterband;
	BOOL m_bAllSonderband;
	BOOL m_bAllSonntagsband;
	BOOL m_bAllStaerkemeisterband;
	BOOL m_bAllTrainingsband;
	BOOL m_bAllTurmmeisterband;
	BOOL m_bAllVeranstaltungsband;
	BOOL m_bAllWettbewerbsgedenkband1;
	BOOL m_bAllWettbewerbsgedenkband2;
	BOOL m_bAllWunschband;
	BOOL m_bAllZutraulichkeitsband;

	// Generation 3
	BOOL m_bGen3100siegeband;
	BOOL m_bGen350siegeband;
	BOOL m_bGen3Bandderanmuthyper;
	BOOL m_bGen3Bandderanmutmaster;
	BOOL m_bGen3Bandderanmutsuper;
	BOOL m_bGen3Bandderanmut;
	BOOL m_bGen3Banddercoolnesshyper;
	BOOL m_bGen3Banddercoolnessmaster;
	BOOL m_bGen3Banddercoolnesssuper;
	BOOL m_bGen3Banddercoolness;
	BOOL m_bGen3Banddererde;
	BOOL m_bGen3Bandderklugheithyper;
	BOOL m_bGen3Bandderklugheitmaster;
	BOOL m_bGen3Bandderklugheitsuper;
	BOOL m_bGen3Bandderklugheit;
	BOOL m_bGen3Banddernation;
	BOOL m_bGen3Bandderschoenheithyper;
	BOOL m_bGen3Bandderschoenheitmaste;
	BOOL m_bGen3Bandderschoenheitsuper;
	BOOL m_bGen3Bandderschoenheit;
	BOOL m_bGen3Bandderstaerkehyper;
	BOOL m_bGen3Bandderstaerkemaster;
	BOOL m_bGen3Bandderstaerkesuper;
	BOOL m_bGen3Bandderstaerke;
	BOOL m_bGen3Bandderwelt;
	BOOL m_bGen3Banddeschamps;
	BOOL m_bGen3Banddesgewinners;
	BOOL m_bGen3Banddeskuenstlers;
	BOOL m_bGen3Banddeslandes;
	BOOL m_bGen3Banddessieges;
	BOOL m_bGen3Cryptoerloesungsband;
	BOOL m_bGen3Duellbergband;
	BOOL m_bGen3Turnierband1;
	BOOL m_bGen3Turnierband2;
	BOOL m_bGen3Turnierband3;


	// Generation 4
	BOOL m_bGen4Bandderanmutmaster;
	BOOL m_bGen4Bandderanmutmega;
	BOOL m_bGen4Bandderanmutultra;
	BOOL m_bGen4Bandderanmut;
	BOOL m_bGen4Banddercoolnessmaster;
	BOOL m_bGen4Banddercoolnessmega;
	BOOL m_bGen4Banddercoolnessultra;
	BOOL m_bGen4Banddercoolness;
	BOOL m_bGen4Bandderentspannung;
	BOOL m_bGen4Bandderfaehigkeit;
	BOOL m_bGen4Banddergeschichte;
	BOOL m_bGen4Bandderklugheitmaster;
	BOOL m_bGen4Bandderklugheitmega;
	BOOL m_bGen4Bandderklugheitultra;
	BOOL m_bGen4Bandderklugheit;
	BOOL m_bGen4Bandderlegende;
	BOOL m_bGen4Bandderschoenheitmaster;
	BOOL m_bGen4Bandderschoenheitmega;
	BOOL m_bGen4Bandderschoenheitultra;
	BOOL m_bGen4Bandderschoenheit;
	BOOL m_bGen4Banddersorglosigkeit;
	BOOL m_bGen4Bandderstaerkemaster;
	BOOL m_bGen4Bandderstaerkemega;
	BOOL m_bGen4Bandderstaerkeultra;
	BOOL m_bGen4Bandderstaerke;
	BOOL m_bGen4Bandderwachsamkeit;
	BOOL m_bGen4Banddeschampsvon;
	BOOL m_bGen4Banddeslaechelns;
	BOOL m_bGen4Banddesniederschlags;
	BOOL m_bGen4Banddertraurigkeit;
	BOOL m_bGen4Banddesschlafens;
	BOOL m_bGen4Banddesschocks;
	BOOL m_bGen4Doppelbandderfaehigkeit;
	BOOL m_bGen4Grossesbandderfaehigkeit;
	BOOL m_bGen4Hinreissendesband;
	BOOL m_bGen4Hinreissendeskoeniglichesband;
	BOOL m_bGen4Koeniglichesband;
	BOOL m_bGen4Multibandderfaehigkeit;
	BOOL m_bGen4Paarbandderfaehigkeit;
	BOOL m_bGen4Weltbandderfaehigkeit;
	afx_msg void OnBnClickedButtonCheckall();
	afx_msg void OnBnClickedButtonDemarkall();
};
