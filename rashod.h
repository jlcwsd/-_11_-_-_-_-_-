#ifndef RASHOD_H_INCLUDED
#define RASHOD_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Rashod
{
    private:
    int num1;
    int year1;
    int month1;
    int day1;

    string ORGname1;
    string comdiv1;
    string OKPOcode1;
    string headpos1;
    string FName1;
    string SName1;
    string Otchestvo1;
    string Chiefaccountant1;
    string Cashier1;

    string recipient1;
    string passnum1;

    string debitacc1;
    string creditacc1;
    float sum1;

    public:
    Rashod();
    Rashod(const int N1, const int Y1, const int M1, const int D1, const string ORG1, const string com1, const string OKPO1, const string head1, const string FN1, const string SN1, const string O1, const string Chief1, const string Cash1, const string rec1, const string pass1, const string debit1, const string credit1, const float S1);
    Rashod(const Rashod &obj1);
    //~Rashod();

    Rashod & operator=(const Rashod &rs);

    void SetNum1(const int N1);
	void SetYear1(const int Y1);
	void SetMonth1(const int M1);
	void SetDay1(const int D1);
	void SetORG1(const string ORG1);
	void SetCom1(const string com1);
	void SetOKPO1(const string OKPO1);
	void SetHead1(const string head1);
	void SetFName1(const string FN1);
	void SetSName1(const string SN1);
	void SetOtche1(const string O1);
	void SetChief1(const string Chief1);
	void SetCash1(const string Cash1);
	void SetRec1(const string rec1);
	void SetPass1(const string pass1);
	void SetDebit1(const string debit1);
	void SetCredit1(const string credit1);
	void SetSum1(const float S1);

	void printras() const;

};

#endif // RASHOD_H_INCLUDED
