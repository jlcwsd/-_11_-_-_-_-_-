#include "rashod.h"

Rashod::Rashod()
{
	num1 = 0;
    year1 = 2001;
    month1 = 5;
    day1 = 21;

    ORGname1 = "Microsoft";
    comdiv1 = "Ya";
    OKPOcode1 = "112344";
    headpos1 = "Director";
    FName1 = "Vyacheslav";
    SName1 = "Drozhzhin";
    Otchestvo1 = "Alexandrovich";
    Chiefaccountant1 = "1343";
    Cashier1 = "Petrov V.A.";

    recipient1 = "4elovek";
    passnum1 = "154677";

    debitacc1 = "1243567734";
    creditacc1 = "3354235";
    sum1 = 0;
}
Rashod::Rashod(const int N1, const int Y1, const int M1, const int D1, const string ORG1, const string com1, const string OKPO1, const string head1, const string FN1, const string SN1, const string O1, const string Chief1, const string Cash1, const string rec1, const string pass1, const string debit1, const string credit1, const float S1) {
    SetNum1(N1);
	SetYear1(Y1);
	SetMonth1(M1);
	SetDay1(D1);
	SetORG1(ORG1);
	SetCom1(com1);
	SetOKPO1(OKPO1);
	SetHead1(head1);
	SetFName1(FN1);
	SetSName1(SN1);
	SetOtche1(O1);
	SetChief1(Chief1);
	SetCash1(Cash1);
	SetRec1(rec1);
    SetPass1(pass1);
    SetDebit1(debit1);
    SetCredit1(credit1);
    SetSum1(S1);
	}

	Rashod::Rashod(const Rashod &obj1)
	{
    num1 = obj1.num1;
    year1 = obj1.year1;
    month1 = obj1.month1;
    day1 = obj1.day1;

    ORGname1 = obj1.ORGname1;
    comdiv1 = obj1.comdiv1;
    OKPOcode1 = obj1.OKPOcode1;
    headpos1 = obj1.headpos1;
    FName1 = obj1.FName1;
    SName1 = obj1.SName1;
    Otchestvo1 = obj1.Otchestvo1;
    Chiefaccountant1 = obj1.Chiefaccountant1;
    Cashier1 = obj1.Cashier1;

    recipient1 = obj1.recipient1;
    passnum1 = obj1.passnum1;

    debitacc1 = obj1.debitacc1;
    creditacc1 = obj1.creditacc1;
    sum1 = obj1.sum1;
	};


    void Rashod::SetNum1(const int N1) {
		this->num1=N1;
	}
	void Rashod::SetYear1(const int Y1) {
		this->year1=Y1;
	}
	void Rashod::SetMonth1(const int M1) {
		this->month1=M1;
	}
	void Rashod::SetDay1(const int D1) {
		this->day1=D1;
	}
	void Rashod::SetORG1(const string ORG1) {
		this->ORGname1=ORG1;
	}
	void Rashod::SetCom1(const string com1) {
		this->comdiv1=com1;
	}
	void Rashod::SetOKPO1(const string OKPO1) {
		this->OKPOcode1=OKPO1;
	}
	void Rashod::SetHead1(const string head1) {
		this->headpos1=head1;
	}
	void Rashod::SetFName1(const string FN1) {
	    this->FName1=FN1;
	}
	void Rashod::SetSName1(const string SN1) {
	    this->SName1=SN1;
	}
	void Rashod::SetOtche1(const string O1){
	    this->Otchestvo1=O1;
	}
	void Rashod::SetChief1(const string Chief1) {
		this->Chiefaccountant1=Chief1;
	}
	void Rashod::SetCash1(const string Cash1) {
		this->Cashier1=Cash1;
	}
	void Rashod::SetRec1(const string rec1) {
		this->recipient1=rec1;
	}
	void Rashod::SetPass1(const string pass1) {
		this->passnum1=pass1;
	}
	void Rashod::SetDebit1(const string debit1) {
		this->debitacc1=debit1;
	}
	void Rashod::SetCredit1(const string credit1) {
		this->creditacc1=credit1;
	}
	void Rashod::SetSum1(const float S1) {
		this->sum1=S1;
	}

	void Rashod::printras() const
	{
	    cout << "Number: " << num1 << endl;
	    cout << "Date: " << day1 << "/" << month1 << "/" << year1 << endl;
	    cout << "Name of organisation: " << ORGname1 << endl;
	    cout << "Comdiv: " << comdiv1 << endl;
	    cout << "OKPOcode: " << OKPOcode1 << endl;
	    cout << "Header: " << headpos1 << endl;
	    cout << "Full name: " << SName1 << " " << FName1 << " " << Otchestvo1 << endl;
	    cout << "Chiefaccountant: " << Chiefaccountant1 << endl;
	    cout << "Cashier: " << Cashier1 << endl;
	    cout << "Recipient: " << recipient1 << endl;
	    cout << "Passport number: " << passnum1 << endl;
	    cout << "Debit account: " << debitacc1 << endl;
	    cout << "Credit account: " << creditacc1 << endl;
	    cout << "Summary: " << sum1 << endl;
	}


	Rashod & Rashod::operator=(const Rashod &rs) {
    this->num1 = rs.num1;
    this->year1 = rs.year1;
    this->month1 = rs.month1;
    this->day1 = rs.day1;

    this->ORGname1 = rs.ORGname1;
    this->comdiv1 = rs.comdiv1;
    this->OKPOcode1 = rs.OKPOcode1;
    this->headpos1 = rs.headpos1;
    this->FName1 = rs.FName1;
    this->SName1 = rs.SName1;
    this->Otchestvo1 = rs.Otchestvo1;
    this->Chiefaccountant1 = rs.Chiefaccountant1;
    this->Cashier1 = rs.Cashier1;

    this->recipient1 = rs.recipient1;
    this->passnum1 = rs.passnum1;

    this->debitacc1 = rs.debitacc1;
    this->creditacc1 = rs.creditacc1;
    this->sum1 = rs.sum1;
		return *this;
	}

