#include "prihod.h"

Prihod::Prihod()
{
    num2 = 2;
    year2 = 2002;
    month2 = 5;
    day2 = 22;

    ORGname2 = "Hasbro";
    OKPOcode2 = "232454";
    headpos2 = "Ivanov";
    Cashier2 = "Petrov";
    NDS2 = "10%";

    FName2 = "Alexey";
    SName2 = "Markelov";
    Otchestvo2 = "Vitalevich";

    sum2 = 123.5;
}

Prihod::Prihod(const int N2, const int Y2, const int M2, const int D2, const string ORG2, const string OKPO2, const string head2, const string Cash2, const string nds2, const string FN2, const string SN2, const string O2, const float S2)
{
    SetNum2(N2);
	SetYear2(Y2);
	SetMonth2(M2);
	SetDay2(D2);
	SetORG2(ORG2);
	SetOKPO2(OKPO2);
	SetHead2(head2);
	SetFName2(FN2);
	SetSName2(SN2);
	SetOtche2(O2);
	SetCash2(Cash2);
    SetSum2(S2);
    SetNDS2(nds2);
}

Prihod::Prihod(const Prihod &obj2)
{
    num2 = obj2.num2;
    year2 = obj2.year2;
    month2 = obj2.month2;
    day2 = obj2.day2;

    ORGname2 = obj2.ORGname2;
    OKPOcode2 = obj2.OKPOcode2;
    headpos2 = obj2.headpos2;
    FName2 = obj2.FName2;
    SName2 = obj2.SName2;
    Otchestvo2 = obj2.Otchestvo2;
    Cashier2 = obj2.Cashier2;
    sum2 = obj2.sum2;
    NDS2 = obj2.NDS2;
}


void Prihod::SetNum2(const int N2) {
		this->num2=N2;
	}
	void Prihod::SetYear2(const int Y2) {
		this->year2=Y2;
	}
	void Prihod::SetMonth2(const int M2) {
		this->month2=M2;
	}
	void Prihod::SetDay2(const int D2) {
		this->day2=D2;
	}
	void Prihod::SetORG2(const string ORG2) {
		this->ORGname2=ORG2;
	}
	void Prihod::SetOKPO2(const string OKPO2) {
		this->OKPOcode2=OKPO2;
	}
	void Prihod::SetHead2(const string head2) {
		this->headpos2=head2;
	}
	void Prihod::SetFName2(const string FN2) {
	    this->FName2=FN2;
	}
	void Prihod::SetSName2(const string SN2) {
	    this->SName2=SN2;
	}
	void Prihod::SetOtche2(const string Otche2){
	    this->Otchestvo2=Otche2;
	}
	void Prihod::SetCash2(const string Cash2) {
		this->Cashier2=Cash2;
	}
	void Prihod::SetSum2(const float S2) {
		this->sum2=S2;
	}
	void Prihod::SetNDS2(const string nds2) {
	    this->NDS2=nds2;
	}

Prihod & Prihod::operator=(const Prihod &ps)
{
    this->num2 = ps.num2;
    this->year2 = ps.year2;
    this->month2 = ps.month2;
    this->day2 = ps.day2;

    this->ORGname2 = ps.ORGname2;
    this->OKPOcode2 = ps.OKPOcode2;
    this->headpos2 = ps.headpos2;
    this->FName2 = ps.FName2;
    this->SName2 = ps.SName2;
    this->Otchestvo2 = ps.Otchestvo2;
    this->Cashier2 = ps.Cashier2;
    this->sum2 = ps.sum2;
    this->NDS2 = ps.NDS2;
    return *this;
}


void Prihod::printpri() const
	{
	    cout << "Number: " << num2 << endl;
	    cout << "Date: " << day2 << "/" << month2 << "/" << year2 << endl;
	    cout << "Name of organisation: " << ORGname2 << endl;
	    cout << "OKPOcode: " << OKPOcode2 << endl;
	    cout << "Header: " << headpos2 << endl;
	    cout << "Cashier: " << Cashier2 << endl;
	    cout << "NDS: " << NDS2 << "%" << endl;
	    cout << "Full name: " << SName2 << " " << FName2 << " " << Otchestvo2 << endl;
	    cout << "Summary: " << sum2 << endl;

	}



















