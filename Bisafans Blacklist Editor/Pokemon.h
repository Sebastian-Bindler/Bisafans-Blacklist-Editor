#pragma once
#include <afx.h>
class CPokemon :
	public CObject
{
private:
	CString m_strDextNumber;
	CString m_strNick;
	CString m_strForm;
	BOOL m_bShiny;
	CString m_strOT;
	CString m_strID;
	CString m_strLevel;
	CString m_strCatchPlace;
	CString m_strCatchRegion; // Set und Get noch anlegen
	CString m_strCatchLevel;
	CString m_strCatchDate;
	CString m_strBall;
	CString m_strCharacteristic;
	CString m_strAbility;
	CString m_strHitPoints;
	CString m_strAttack;
	CString m_strDefense;
	CString m_strSpecialAttack;
	CString m_strSpecialDefense;
	CString m_strSpeed;
	CString m_strNature;
	CString m_strIvHitPoints;
	CString m_strIvAttack;
	CString m_strIvDefense;
	CString m_strIvSpecialAttack;
	CString m_strIvSpecialDefense;
	CString m_strIvSpeed;
	CString m_strRibbon;
	CString m_strEvent;
	CString m_strManipulation;
	CString m_strMiscellaneous;

public:

	//Set Methoden
	void SetDextNumber(CString var) { m_strDextNumber = var;};
	void SetNick(CString var) { m_strNick = var;};
	void SetForm(CString var) { m_strForm = var;};
	void SetShiny(BOOL var) { m_bShiny = var;};
	void SetOT(CString var) { m_strOT = var;};
	void SetID(CString var) { m_strID = var;};
	void SetLevel(CString var) { m_strLevel = var;};
	void SetCatchPlace(CString var) { m_strCatchPlace = var;};
	void SetCatchLevel(CString var) { m_strCatchLevel = var;};
	void SetCatchDate(CString var) { m_strCatchDate = var;};
	void SetBall(CString var) { m_strBall = var;};
	void SetCharacteristic(CString var) { m_strCharacteristic = var;};
	void SetAbility(CString var) { m_strAbility = var;};
	void SetHitPoints(CString var) { m_strHitPoints = var;};
	void SetAttack(CString var) { m_strAttack = var;};
	void SetDefense(CString var) { m_strDefense = var;};
	void SetSpecialAttack(CString var) { m_strSpecialAttack = var;};
	void SetSpecialDefense(CString var) { m_strSpecialDefense = var;};
	void SetSpeed(CString var) { m_strSpeed = var;};
	void SetNature(CString var) { m_strNature = var;};
	void SetIvHitPoints(CString var) { m_strIvHitPoints = var;};
	void SetIvAttack(CString var) { m_strIvAttack = var;};
	void SetIvDefense(CString var) { m_strIvDefense = var;};
	void SetIvSpecialAttack(CString var) { m_strIvSpecialAttack = var;};
	void SetIvSpecialDefense(CString var) { m_strIvSpecialDefense = var;};
	void SetIvSpeed(CString var) { m_strIvSpeed = var;};
	void SetRibbon(CString var) { m_strRibbon = var;};
	void SetEvent(CString var) { m_strEvent = var;};
	void SetManipulation(CString var) { m_strManipulation = var;};
	void SetMiscellaneous(CString var) { m_strMiscellaneous = var;};

	// Get Methoden
	CString GetDextNumber() { return this->m_strDextNumber;};
	CString GetNick() { return this->m_strNick;};
	CString GetForm() { return this ->m_strForm;};
	BOOL	GetShiny() { return this->m_bShiny;};
	CString GetOT() { return this->m_strOT;};
	CString GetID() { return this->m_strID;};
	CString GetLevel() { return this->m_strLevel;};
	CString GetCatchPlace() { return this->m_strCatchPlace;};
	CString GetCatchLevel() { return this->m_strCatchLevel;};
	CString GetCatchDate() { return this->m_strCatchDate;};
	CString GetBall() { return this->m_strBall;};
	CString GetCharacteristic() { return this->m_strCharacteristic;};
	CString GetAbility() { return this->m_strAbility;};
	CString GetHitPoints() { return this->m_strHitPoints;};
	CString GetAttack() { return this->m_strAttack;};
	CString GetDefense() { return this->m_strDefense;};
	CString GetSpecialAttack() { return this->m_strSpecialAttack;};
	CString GetSpecialDefense() { return this->m_strSpecialDefense;};
	CString GetSpeed() { return this->m_strSpeed;};
	CString GetNature() { return this->m_strNature;};
	CString GetIvHitPoints() { return this->m_strIvHitPoints;};
	CString GetIvAttack() { return this->m_strIvAttack;};
	CString GetIvDefense() { return this->m_strIvDefense;};
	CString GetIvSpecialAttack() { return this->m_strIvSpecialAttack;};
	CString GetIvSpecialDefense() { return this->m_strSpecialDefense;};
	CString GetIvSpeed() { return this->m_strIvSpeed;};
	CString GetRibbon() { return this->m_strRibbon;};
	CString GetEvent() { return this->m_strEvent;};
	CString GetManipulation() { return this->m_strManipulation;};
	CString GetMiscellaneous() { return this->m_strMiscellaneous;};
};

