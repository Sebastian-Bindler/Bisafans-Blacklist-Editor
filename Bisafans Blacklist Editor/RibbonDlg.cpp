// RibbonDlg.cpp: Implementierungsdatei
//

#include "pch.h"
#include "Resource.h"
#include "RibbonDlg.h"
#include "afxdialogex.h"


// RibbonDlg-Dialog

IMPLEMENT_DYNAMIC(RibbonDlg, CDialogEx)

RibbonDlg::RibbonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_RIBBONS, pParent)
	, m_bAllBanddesalolachamps(FALSE)
	, m_bAllBanddesgalarchamps(FALSE)
	, m_bAllBanddeshoennchamps(FALSE)
	, m_bAllBanddeskaloschamps(FALSE)
	, m_bAllBanddesrekords(FALSE)
	, m_bAllBanddeswettbewerbsstars(FALSE)
	, m_bAllBattleroyalemeisterband(FALSE)
	, m_bAllBaumeliteband(FALSE)
	, m_bAllBaummeisterband(FALSE)
	, m_bAllBlauesband(FALSE)
	, m_bAllCoolnessmeisterband(FALSE)
	, m_bAllDienstagsband(FALSE)
	, m_bAllDonnerstagsband(FALSE)
	, m_bAllFestivalband(FALSE)
	, m_bAllFleissband(FALSE)
	, m_bAllFreitagsband(FALSE)
	, m_bAllFussabdruckband(FALSE)
	, m_bAllGeburtstagsband(FALSE)
	, m_bAllGruenesband(FALSE)
	, m_bAllKampfgedenkband1(FALSE)
	, m_bAllKampfgedenkband2(FALSE)
	, m_bAllKampfmeisterband(FALSE)
	, m_bAllKlassischesband(FALSE)
	, m_bAllKlugheitsmeisterband(FALSE)
	, m_bAllMeisterkampfband(FALSE)
	, m_bAllMeisterrangband(FALSE)
	, m_bAllMittwochsband(FALSE)
	, m_bAllMontagsband(FALSE)
	, m_bAllPremierband(FALSE)
	, m_bAllProfikampfband(FALSE)
	, m_bAllPutzigkeitsmeisterband(FALSE)
	, m_bAllRotesband(FALSE)
	, m_bAllSamstagsband(FALSE)
	, m_bAllSchoenheitsmeisterband(FALSE)
	, m_bAllSonderband(FALSE)
	, m_bAllSonntagsband(FALSE)
	, m_bAllStaerkemeisterband(FALSE)
	, m_bAllTrainingsband(FALSE)
	, m_bAllTurmmeisterband(FALSE)
	, m_bAllVeranstaltungsband(FALSE)
	, m_bAllWettbewerbsgedenkband1(FALSE)
	, m_bAllWettbewerbsgedenkband2(FALSE)
	, m_bAllWunschband(FALSE)
	, m_bAllZutraulichkeitsband(FALSE)
	, m_bGen3100siegeband(FALSE)
	, m_bGen350siegeband(FALSE)
	, m_bGen3Bandderanmuthyper(FALSE)
	, m_bGen3Bandderanmutmaster(FALSE)
	, m_bGen3Bandderanmutsuper(FALSE)
	, m_bGen3Bandderanmut(FALSE)
	, m_bGen3Banddercoolnesshyper(FALSE)
	, m_bGen3Banddercoolnessmaster(FALSE)
	, m_bGen3Banddercoolnesssuper(FALSE)
	, m_bGen3Banddercoolness(FALSE)
	, m_bGen3Banddererde(FALSE)
	, m_bGen3Bandderklugheithyper(FALSE)
	, m_bGen3Bandderklugheitmaster(FALSE)
	, m_bGen3Bandderklugheitsuper(FALSE)
	, m_bGen3Bandderklugheit(FALSE)
	, m_bGen3Banddernation(FALSE)
	, m_bGen3Bandderschoenheithyper(FALSE)
	, m_bGen3Bandderschoenheitmaste(FALSE)
	, m_bGen3Bandderschoenheitsuper(FALSE)
	, m_bGen3Bandderschoenheit(FALSE)
	, m_bGen3Bandderstaerkehyper(FALSE)
	, m_bGen3Bandderstaerkemaster(FALSE)
	, m_bGen3Bandderstaerkesuper(FALSE)
	, m_bGen3Bandderstaerke(FALSE)
	, m_bGen3Bandderwelt(FALSE)
	, m_bGen3Banddeschamps(FALSE)
	, m_bGen3Banddesgewinners(FALSE)
	, m_bGen3Banddeskuenstlers(FALSE)
	, m_bGen3Banddeslandes(FALSE)
	, m_bGen3Banddessieges(FALSE)
	, m_bGen3Cryptoerloesungsband(FALSE)
	, m_bGen3Duellbergband(FALSE)
	, m_bGen3Turnierband1(FALSE)
	, m_bGen3Turnierband2(FALSE)
	, m_bGen3Turnierband3(FALSE)
	, m_bGen4Bandderanmutmaster(FALSE)
	, m_bGen4Bandderanmutmega(FALSE)
	, m_bGen4Bandderanmutultra(FALSE)
	, m_bGen4Bandderanmut(FALSE)
	, m_bGen4Banddercoolnessmaster(FALSE)
	, m_bGen4Banddercoolnessmega(FALSE)
	, m_bGen4Banddercoolnessultra(FALSE)
	, m_bGen4Banddercoolness(FALSE)
	, m_bGen4Bandderentspannung(FALSE)
	, m_bGen4Bandderfaehigkeit(FALSE)
	, m_bGen4Banddergeschichte(FALSE)
	, m_bGen4Bandderklugheitmaster(FALSE)
	, m_bGen4Bandderklugheitmega(FALSE)
	, m_bGen4Bandderklugheitultra(FALSE)
	, m_bGen4Bandderklugheit(FALSE)
	, m_bGen4Bandderlegende(FALSE)
	, m_bGen4Bandderschoenheitmaster(FALSE)
	, m_bGen4Bandderschoenheitmega(FALSE)
	, m_bGen4Bandderschoenheitultra(FALSE)
	, m_bGen4Bandderschoenheit(FALSE)
	, m_bGen4Banddersorglosigkeit(FALSE)
	, m_bGen4Bandderstaerkemaster(FALSE)
	, m_bGen4Bandderstaerkemega(FALSE)
	, m_bGen4Bandderstaerkeultra(FALSE)
	, m_bGen4Bandderstaerke(FALSE)
	, m_bGen4Bandderwachsamkeit(FALSE)
	, m_bGen4Banddeschampsvon(FALSE)
	, m_bGen4Banddeslaechelns(FALSE)
	, m_bGen4Banddesniederschlags(FALSE)
	, m_bGen4Banddertraurigkeit(FALSE)
	, m_bGen4Banddesschlafens(FALSE)
	, m_bGen4Banddesschocks(FALSE)
	, m_bGen4Doppelbandderfaehigkeit(FALSE)
	, m_bGen4Grossesbandderfaehigkeit(FALSE)
	, m_bGen4Hinreissendesband(FALSE)
	, m_bGen4Hinreissendeskoeniglichesband(FALSE)
	, m_bGen4Koeniglichesband(FALSE)
	, m_bGen4Multibandderfaehigkeit(FALSE)
	, m_bGen4Paarbandderfaehigkeit(FALSE)
	, m_bGen4Weltbandderfaehigkeit(FALSE)
	{
}

RibbonDlg::~RibbonDlg()
{
}

void RibbonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_CHECKBANDDESALOLACHAMPS, m_bAllBanddesalolachamps);
	DDX_Check(pDX, IDC_CHECKBANDDESALOLACHAMPS, m_bAllBanddesalolachamps);
	DDX_Check(pDX, IDC_CHECKBANDDESGALARCHAMPIONS, m_bAllBanddesgalarchamps);
	DDX_Check(pDX, IDC_CHECKBANDDESHOENNCHAMPS, m_bAllBanddeshoennchamps);
	DDX_Check(pDX, IDC_CHECKBANDDESKALOSCHAMPS, m_bAllBanddeskaloschamps);
	DDX_Check(pDX, IDC_CHECKBANDDESREKORDS, m_bAllBanddesrekords);
	DDX_Check(pDX, IDC_CHECKBANDDESWETTBEWERBSSTARS, m_bAllBanddeswettbewerbsstars);
	DDX_Check(pDX, IDC_CHECKBATTLEROYALEMEISTERBAND, m_bAllBattleroyalemeisterband);
	DDX_Check(pDX, IDC_CHECKBAUMELITEBAND, m_bAllBaumeliteband);
	DDX_Check(pDX, IDC_CHECKBAUMMEISTERBAND, m_bAllBaummeisterband);
	DDX_Check(pDX, IDC_CHECKBLAUESBAND, m_bAllBlauesband);
	DDX_Check(pDX, IDC_CHECKCOOLNESSMEISTERBAND, m_bAllCoolnessmeisterband);
	DDX_Check(pDX, IDC_CHECKDIENSTAGSBAND, m_bAllDienstagsband);
	DDX_Check(pDX, IDC_CHECKDONNERSTAGSBAND, m_bAllDonnerstagsband);
	DDX_Check(pDX, IDC_CHECKFESTIVALBAND, m_bAllFestivalband);
	DDX_Check(pDX, IDC_CHECKFLEISSBAND, m_bAllFleissband);
	DDX_Check(pDX, IDC_CHECKFREITAGSBAND, m_bAllFreitagsband);
	DDX_Check(pDX, IDC_CHECKFUSSABDRUCKBAND, m_bAllFussabdruckband);
	DDX_Check(pDX, IDC_CHECKGEBURTSTAGSBAND, m_bAllGeburtstagsband);
	DDX_Check(pDX, IDC_CHECKGRUENESBAND, m_bAllGruenesband);
	DDX_Check(pDX, IDC_CHECKKAMPFGEDENKBAND1, m_bAllKampfgedenkband1);
	DDX_Check(pDX, IDC_CHECKKAMPFGEDENKBAND2, m_bAllKampfgedenkband2);
	DDX_Check(pDX, IDC_CHECKKAMPFMEISTERBAND, m_bAllKampfmeisterband);
	DDX_Check(pDX, IDC_CHECKKLASSISCHESBAND, m_bAllKlassischesband);
	DDX_Check(pDX, IDC_CHECKKLUGHEITSMEISTERBAND, m_bAllKlugheitsmeisterband);
	DDX_Check(pDX, IDC_CHECKMEISTERKAMPFBAND, m_bAllMeisterkampfband);
	DDX_Check(pDX, IDC_CHECKMEISTERRANGBAND, m_bAllMeisterrangband);
	DDX_Check(pDX, IDC_CHECKMITTWOCHSBAND, m_bAllMittwochsband);
	DDX_Check(pDX, IDC_CHECKMONTAGSBAND, m_bAllMontagsband);
	DDX_Check(pDX, IDC_CHECKPREMIERBAND, m_bAllPremierband);
	DDX_Check(pDX, IDC_CHECKPROFIKAMPFBAND, m_bAllProfikampfband);
	DDX_Check(pDX, IDC_CHECKPUTZIGKEITSMEISTERBAND, m_bAllPutzigkeitsmeisterband);
	DDX_Check(pDX, IDC_CHECKROTESBAND, m_bAllRotesband);
	DDX_Check(pDX, IDC_CHECKSAMSTAGSBAND, m_bAllSamstagsband);
	DDX_Check(pDX, IDC_CHECKSCHOENHEITSMEISTERBAND, m_bAllSchoenheitsmeisterband);
	DDX_Check(pDX, IDC_CHECKSONDERBAND, m_bAllSonderband);
	DDX_Check(pDX, IDC_CHECKSONNTAGSBAND, m_bAllSonntagsband);
	DDX_Check(pDX, IDC_CHECKSTAERKEMEISTERBAND, m_bAllStaerkemeisterband);
	DDX_Check(pDX, IDC_CHECKTRAININGSBAND, m_bAllTrainingsband);
	DDX_Check(pDX, IDC_CHECKTURMMEISTERBAND, m_bAllTurmmeisterband);
	DDX_Check(pDX, IDC_CHECKVERANSTALTUNGSBAND, m_bAllVeranstaltungsband);
	DDX_Check(pDX, IDC_CHECKWETTBEWERBSGEDENKBAND1, m_bAllWettbewerbsgedenkband1);
	DDX_Check(pDX, IDC_CHECKWETTBEWERBSGEDENKBAND2, m_bAllWettbewerbsgedenkband2);
	DDX_Check(pDX, IDC_CHECKWUNSCHBAND, m_bAllWunschband);
	DDX_Check(pDX, IDC_CHECKZUTRAULICHKEITSBAND, m_bAllZutraulichkeitsband);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERANMUTMASTER, m_bGen4Bandderanmutmaster);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERANMUTMEGA, m_bGen4Bandderanmutmega);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERANMUTULTRA, m_bGen4Bandderanmutultra);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERANMUT, m_bGen4Bandderanmut);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERCOOLNESSMASTER, m_bGen4Banddercoolnessmaster);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERCOOLNESSMEGA, m_bGen4Banddercoolnessmega);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERCOOLNESSULTRA, m_bGen4Banddercoolnessultra);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERCOOLNESS, m_bGen4Banddercoolness);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERENTSPANNUNG, m_bGen4Bandderentspannung);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERFAEHIGKEIT, m_bGen4Bandderfaehigkeit);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERGESCHICHTE, m_bGen4Banddergeschichte);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERKLUGHEITMASTER, m_bGen4Bandderklugheitmaster);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERKLUGHEITMEGA, m_bGen4Bandderklugheitmega);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERKLUGHEITULTRA, m_bGen4Bandderklugheitultra);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERKLUGHEIT, m_bGen4Bandderklugheit);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERLEGENDE, m_bGen4Bandderlegende);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSCHOENHEITMASTER, m_bGen4Bandderschoenheitmaster);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSCHOENHEITMEGA, m_bGen4Bandderschoenheitmega);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSCHOENHEITULTRA, m_bGen4Bandderschoenheitultra);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSCHOENHEIT, m_bGen4Bandderschoenheit);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSORGLOSIGKEIT, m_bGen4Banddersorglosigkeit);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSTAERKEMASTER, m_bGen4Bandderstaerkemaster);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSTAERKEMEGA, m_bGen4Bandderstaerkemega);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSTAERKEULTRA, m_bGen4Bandderstaerkeultra);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERSTAERKE, m_bGen4Bandderstaerke);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERWACHSAMKEIT, m_bGen4Bandderwachsamkeit);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDESCHAMPSVON, m_bGen4Banddeschampsvon);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDESLAECHELNS, m_bGen4Banddeslaechelns);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDESNIEDERSCHLAGS, m_bGen4Banddesniederschlags);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDERTRAURIGKEIT, m_bGen4Banddertraurigkeit);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDESSCHLAFENS, m_bGen4Banddesschlafens);
	DDX_Check(pDX, IDC_CHECKGEN4BANDDESSCHOCKS, m_bGen4Banddesschocks);
	DDX_Check(pDX, IDC_CHECKGEN4DOPPELBANDDERFAEHIGKEIT, m_bGen4Doppelbandderfaehigkeit);
	DDX_Check(pDX, IDC_CHECKGEN4GROSSESBANDDERFAEHIGKEIT, m_bGen4Grossesbandderfaehigkeit);
	DDX_Check(pDX, IDC_CHECKGEN4HINREISSENDESBAND, m_bGen4Hinreissendesband);
	DDX_Check(pDX, IDC_CHECKGEN4HINREISSENDESKOENIGLICHESBAND, m_bGen4Hinreissendeskoeniglichesband);
	DDX_Check(pDX, IDC_CHECKGEN4KOENIGLICHESBAND, m_bGen4Koeniglichesband);
	DDX_Check(pDX, IDC_CHECKGEN4MULTIBANDDERFAEHIGKEIT, m_bGen4Multibandderfaehigkeit);
	DDX_Check(pDX, IDC_CHECKGEN4PAARBANDDERFAEHIGKEIT, m_bGen4Paarbandderfaehigkeit);
	DDX_Check(pDX, IDC_CHECKGEN4WELTBANDDERFAEHIGKEIT, m_bGen4Weltbandderfaehigkeit);
	DDX_Check(pDX, IDC_CHECKGEN3100SIEGEBAND, m_bGen3100siegeband);
	DDX_Check(pDX, IDC_CHECKGEN350SIEGEBAND, m_bGen350siegeband);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERANMUTHYPER, m_bGen3Bandderanmuthyper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERANMUTMASTER, m_bGen3Bandderanmutmaster);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERANMUTSUPER, m_bGen3Bandderanmutsuper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERANMUT, m_bGen3Bandderanmut);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERCOOLNESSHYPER, m_bGen3Banddercoolnesshyper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERCOOLNESSMASTER, m_bGen3Banddercoolnessmaster);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERCOOLNESSSUPER, m_bGen3Banddercoolnesssuper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERCOOLNESS, m_bGen3Banddercoolness);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERERDE, m_bGen3Banddererde);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERKLUGHEITHYPER, m_bGen3Bandderklugheithyper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERKLUGHEITMASTER, m_bGen3Bandderklugheitmaster);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERKLUGHEITSUPER, m_bGen3Bandderklugheitsuper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERKLUGHEIT, m_bGen3Bandderklugheit);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERNATION, m_bGen3Banddernation);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERSCHOENHEITHYPER, m_bGen3Bandderschoenheithyper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERSCHOENHEITMASTER, m_bGen3Bandderschoenheitmaste);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERSCHOENHEITSUPER, m_bGen3Bandderschoenheitsuper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERSCHOENHEIT, m_bGen3Bandderschoenheit);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERSTAERKEHYPER, m_bGen3Bandderstaerkehyper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERSTAERKEMASTER, m_bGen3Bandderstaerkemaster);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERSTAERKESUPER, m_bGen3Bandderstaerkesuper);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERSTAERKE, m_bGen3Bandderstaerke);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDERWELT, m_bGen3Bandderwelt);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDESCHAMPS, m_bGen3Banddeschamps);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDESGEWINNERS, m_bGen3Banddesgewinners);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDESKUENSTLERS, m_bGen3Banddeskuenstlers);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDESLANDES, m_bGen3Banddeslandes);
	DDX_Check(pDX, IDC_CHECKGEN3BANDDESSIEGES, m_bGen3Banddessieges);
	DDX_Check(pDX, IDC_CHECKGEN3CRYPTOERLOESUNGSBAND, m_bGen3Cryptoerloesungsband);
	DDX_Check(pDX, IDC_CHECKGEN3DUELLBERGBAND, m_bGen3Duellbergband);
	DDX_Check(pDX, IDC_CHECKGEN3TURNIERBAND1, m_bGen3Turnierband1);
	DDX_Check(pDX, IDC_CHECKGEN3TURNIERBAND2, m_bGen3Turnierband2);
	DDX_Check(pDX, IDC_CHECKGEN3TURNIERBAND3, m_bGen3Turnierband3);
}


BEGIN_MESSAGE_MAP(RibbonDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_CHECKALL, &RibbonDlg::OnBnClickedButtonCheckall)
	ON_BN_CLICKED(IDC_BUTTON_DEMARKALL, &RibbonDlg::OnBnClickedButtonDemarkall)
END_MESSAGE_MAP()


// RibbonDlg-Meldungshandler


void RibbonDlg::OnBnClickedButtonCheckall()
{
	//Allgemein
	m_bAllBanddesalolachamps = TRUE;
	m_bAllBanddesgalarchamps = TRUE;
	m_bAllBanddeshoennchamps = TRUE;
	m_bAllBanddeskaloschamps = TRUE;
	m_bAllBanddesrekords = TRUE;
	m_bAllBanddeswettbewerbsstars = TRUE;
	m_bAllBattleroyalemeisterband = TRUE;
	m_bAllBaumeliteband = TRUE;
	m_bAllBaummeisterband = TRUE;
	m_bAllBlauesband = TRUE;
	m_bAllCoolnessmeisterband = TRUE;
	m_bAllDienstagsband = TRUE;
	m_bAllDonnerstagsband = TRUE;
	m_bAllFestivalband = TRUE;
	m_bAllFleissband = TRUE;
	m_bAllFreitagsband = TRUE;
	m_bAllFussabdruckband = TRUE;
	m_bAllGeburtstagsband = TRUE;
	m_bAllGruenesband = TRUE;
	m_bAllKampfgedenkband1 = TRUE;
	m_bAllKampfgedenkband2 = TRUE;
	m_bAllKampfmeisterband = TRUE;
	m_bAllKlassischesband = TRUE;
	m_bAllKlugheitsmeisterband = TRUE;
	m_bAllMeisterkampfband = TRUE;
	m_bAllMeisterrangband = TRUE;
	m_bAllMittwochsband = TRUE;
	m_bAllMontagsband = TRUE;
	m_bAllPremierband = TRUE;
	m_bAllProfikampfband = TRUE;
	m_bAllPutzigkeitsmeisterband = TRUE;
	m_bAllRotesband = TRUE;
	m_bAllSamstagsband = TRUE;
	m_bAllSchoenheitsmeisterband = TRUE;
	m_bAllSonderband = TRUE;
	m_bAllSonntagsband = TRUE;
	m_bAllStaerkemeisterband = TRUE;
	m_bAllTrainingsband = TRUE;
	m_bAllTurmmeisterband = TRUE;
	m_bAllVeranstaltungsband = TRUE;
	m_bAllWettbewerbsgedenkband1 = TRUE;
	m_bAllWettbewerbsgedenkband2 = TRUE;
	m_bAllWunschband = TRUE;
	m_bAllZutraulichkeitsband = TRUE;

	// Generation 3
	m_bGen3100siegeband = TRUE;
	m_bGen350siegeband = TRUE;
	m_bGen3Bandderanmuthyper = TRUE;
	m_bGen3Bandderanmutmaster = TRUE;
	m_bGen3Bandderanmutsuper = TRUE;
	m_bGen3Bandderanmut = TRUE;
	m_bGen3Banddercoolnesshyper = TRUE;
	m_bGen3Banddercoolnessmaster = TRUE;
	m_bGen3Banddercoolnesssuper = TRUE;
	m_bGen3Banddercoolness = TRUE;
	m_bGen3Banddererde = TRUE;
	m_bGen3Bandderklugheithyper = TRUE;
	m_bGen3Bandderklugheitmaster = TRUE;
	m_bGen3Bandderklugheitsuper = TRUE;
	m_bGen3Bandderklugheit = TRUE;
	m_bGen3Banddernation = TRUE;
	m_bGen3Bandderschoenheithyper = TRUE;
	m_bGen3Bandderschoenheitmaste = TRUE;
	m_bGen3Bandderschoenheitsuper = TRUE;
	m_bGen3Bandderschoenheit = TRUE;
	m_bGen3Bandderstaerkehyper = TRUE;
	m_bGen3Bandderstaerkemaster = TRUE;
	m_bGen3Bandderstaerkesuper = TRUE;
	m_bGen3Bandderstaerke = TRUE;
	m_bGen3Bandderwelt = TRUE;
	m_bGen3Banddeschamps = TRUE;
	m_bGen3Banddesgewinners = TRUE;
	m_bGen3Banddeskuenstlers = TRUE;
	m_bGen3Banddeslandes = TRUE;
	m_bGen3Banddessieges = TRUE;
	m_bGen3Cryptoerloesungsband = TRUE;
	m_bGen3Duellbergband = TRUE;
	m_bGen3Turnierband1 = TRUE;
	m_bGen3Turnierband2 = TRUE;
	m_bGen3Turnierband3 = TRUE;


	// Generation 4
	m_bGen4Bandderanmutmaster = TRUE;
	m_bGen4Bandderanmutmega = TRUE;
	m_bGen4Bandderanmutultra = TRUE;
	m_bGen4Bandderanmut = TRUE;
	m_bGen4Banddercoolnessmaster = TRUE;
	m_bGen4Banddercoolnessmega = TRUE;
	m_bGen4Banddercoolnessultra = TRUE;
	m_bGen4Banddercoolness = TRUE;
	m_bGen4Bandderentspannung = TRUE;
	m_bGen4Bandderfaehigkeit = TRUE;
	m_bGen4Banddergeschichte = TRUE;
	m_bGen4Bandderklugheitmaster = TRUE;
	m_bGen4Bandderklugheitmega = TRUE;
	m_bGen4Bandderklugheitultra = TRUE;
	m_bGen4Bandderklugheit = TRUE;
	m_bGen4Bandderlegende = TRUE;
	m_bGen4Bandderschoenheitmaster = TRUE;
	m_bGen4Bandderschoenheitmega = TRUE;
	m_bGen4Bandderschoenheitultra = TRUE;
	m_bGen4Bandderschoenheit = TRUE;
	m_bGen4Banddersorglosigkeit = TRUE;
	m_bGen4Bandderstaerkemaster = TRUE;
	m_bGen4Bandderstaerkemega = TRUE;
	m_bGen4Bandderstaerkeultra = TRUE;
	m_bGen4Bandderstaerke = TRUE;
	m_bGen4Bandderwachsamkeit = TRUE;
	m_bGen4Banddeschampsvon = TRUE;
	m_bGen4Banddeslaechelns = TRUE;
	m_bGen4Banddesniederschlags = TRUE;
	m_bGen4Banddertraurigkeit = TRUE;
	m_bGen4Banddesschlafens = TRUE;
	m_bGen4Banddesschocks = TRUE;
	m_bGen4Doppelbandderfaehigkeit = TRUE;
	m_bGen4Grossesbandderfaehigkeit = TRUE;
	m_bGen4Hinreissendesband = TRUE;
	m_bGen4Hinreissendeskoeniglichesband = TRUE;
	m_bGen4Koeniglichesband = TRUE;
	m_bGen4Multibandderfaehigkeit = TRUE;
	m_bGen4Paarbandderfaehigkeit = TRUE;
	m_bGen4Weltbandderfaehigkeit = TRUE;
	UpdateData(FALSE);
}


void RibbonDlg::OnBnClickedButtonDemarkall()
{
	//Allgemein
	m_bAllBanddesalolachamps = FALSE;
	m_bAllBanddesgalarchamps = FALSE;
	m_bAllBanddeshoennchamps = FALSE;
	m_bAllBanddeskaloschamps = FALSE;
	m_bAllBanddesrekords = FALSE;
	m_bAllBanddeswettbewerbsstars = FALSE;
	m_bAllBattleroyalemeisterband = FALSE;
	m_bAllBaumeliteband = FALSE;
	m_bAllBaummeisterband = FALSE;
	m_bAllBlauesband = FALSE;
	m_bAllCoolnessmeisterband = FALSE;
	m_bAllDienstagsband = FALSE;
	m_bAllDonnerstagsband = FALSE;
	m_bAllFestivalband = FALSE;
	m_bAllFleissband = FALSE;
	m_bAllFreitagsband = FALSE;
	m_bAllFussabdruckband = FALSE;
	m_bAllGeburtstagsband = FALSE;
	m_bAllGruenesband = FALSE;
	m_bAllKampfgedenkband1 = FALSE;
	m_bAllKampfgedenkband2 = FALSE;
	m_bAllKampfmeisterband = FALSE;
	m_bAllKlassischesband = FALSE;
	m_bAllKlugheitsmeisterband = FALSE;
	m_bAllMeisterkampfband = FALSE;
	m_bAllMeisterrangband = FALSE;
	m_bAllMittwochsband = FALSE;
	m_bAllMontagsband = FALSE;
	m_bAllPremierband = FALSE;
	m_bAllProfikampfband = FALSE;
	m_bAllPutzigkeitsmeisterband = FALSE;
	m_bAllRotesband = FALSE;
	m_bAllSamstagsband = FALSE;
	m_bAllSchoenheitsmeisterband = FALSE;
	m_bAllSonderband = FALSE;
	m_bAllSonntagsband = FALSE;
	m_bAllStaerkemeisterband = FALSE;
	m_bAllTrainingsband = FALSE;
	m_bAllTurmmeisterband = FALSE;
	m_bAllVeranstaltungsband = FALSE;
	m_bAllWettbewerbsgedenkband1 = FALSE;
	m_bAllWettbewerbsgedenkband2 = FALSE;
	m_bAllWunschband = FALSE;
	m_bAllZutraulichkeitsband = FALSE;

	// Generation 3
	m_bGen3100siegeband = FALSE;
	m_bGen350siegeband = FALSE;
	m_bGen3Bandderanmuthyper = FALSE;
	m_bGen3Bandderanmutmaster = FALSE;
	m_bGen3Bandderanmutsuper = FALSE;
	m_bGen3Bandderanmut = FALSE;
	m_bGen3Banddercoolnesshyper = FALSE;
	m_bGen3Banddercoolnessmaster = FALSE;
	m_bGen3Banddercoolnesssuper = FALSE;
	m_bGen3Banddercoolness = FALSE;
	m_bGen3Banddererde = FALSE;
	m_bGen3Bandderklugheithyper = FALSE;
	m_bGen3Bandderklugheitmaster = FALSE;
	m_bGen3Bandderklugheitsuper = FALSE;
	m_bGen3Bandderklugheit = FALSE;
	m_bGen3Banddernation = FALSE;
	m_bGen3Bandderschoenheithyper = FALSE;
	m_bGen3Bandderschoenheitmaste = FALSE;
	m_bGen3Bandderschoenheitsuper = FALSE;
	m_bGen3Bandderschoenheit = FALSE;
	m_bGen3Bandderstaerkehyper = FALSE;
	m_bGen3Bandderstaerkemaster = FALSE;
	m_bGen3Bandderstaerkesuper = FALSE;
	m_bGen3Bandderstaerke = FALSE;
	m_bGen3Bandderwelt = FALSE;
	m_bGen3Banddeschamps = FALSE;
	m_bGen3Banddesgewinners = FALSE;
	m_bGen3Banddeskuenstlers = FALSE;
	m_bGen3Banddeslandes = FALSE;
	m_bGen3Banddessieges = FALSE;
	m_bGen3Cryptoerloesungsband = FALSE;
	m_bGen3Duellbergband = FALSE;
	m_bGen3Turnierband1 = FALSE;
	m_bGen3Turnierband2 = FALSE;
	m_bGen3Turnierband3 = FALSE;


	// Generation 4
	m_bGen4Bandderanmutmaster = FALSE;
	m_bGen4Bandderanmutmega = FALSE;
	m_bGen4Bandderanmutultra = FALSE;
	m_bGen4Bandderanmut = FALSE;
	m_bGen4Banddercoolnessmaster = FALSE;
	m_bGen4Banddercoolnessmega = FALSE;
	m_bGen4Banddercoolnessultra = FALSE;
	m_bGen4Banddercoolness = FALSE;
	m_bGen4Bandderentspannung = FALSE;
	m_bGen4Bandderfaehigkeit = FALSE;
	m_bGen4Banddergeschichte = FALSE;
	m_bGen4Bandderklugheitmaster = FALSE;
	m_bGen4Bandderklugheitmega = FALSE;
	m_bGen4Bandderklugheitultra = FALSE;
	m_bGen4Bandderklugheit = FALSE;
	m_bGen4Bandderlegende = FALSE;
	m_bGen4Bandderschoenheitmaster = FALSE;
	m_bGen4Bandderschoenheitmega = FALSE;
	m_bGen4Bandderschoenheitultra = FALSE;
	m_bGen4Bandderschoenheit = FALSE;
	m_bGen4Banddersorglosigkeit = FALSE;
	m_bGen4Bandderstaerkemaster = FALSE;
	m_bGen4Bandderstaerkemega = FALSE;
	m_bGen4Bandderstaerkeultra = FALSE;
	m_bGen4Bandderstaerke = FALSE;
	m_bGen4Bandderwachsamkeit = FALSE;
	m_bGen4Banddeschampsvon = FALSE;
	m_bGen4Banddeslaechelns = FALSE;
	m_bGen4Banddesniederschlags = FALSE;
	m_bGen4Banddertraurigkeit = FALSE;
	m_bGen4Banddesschlafens = FALSE;
	m_bGen4Banddesschocks = FALSE;
	m_bGen4Doppelbandderfaehigkeit = FALSE;
	m_bGen4Grossesbandderfaehigkeit = FALSE;
	m_bGen4Hinreissendesband = FALSE;
	m_bGen4Hinreissendeskoeniglichesband = FALSE;
	m_bGen4Koeniglichesband = FALSE;
	m_bGen4Multibandderfaehigkeit = FALSE;
	m_bGen4Paarbandderfaehigkeit = FALSE;
	m_bGen4Weltbandderfaehigkeit = FALSE;
	UpdateData(FALSE);
}
