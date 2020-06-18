#ifndef PRIHOD_H_INCLUDED
#define PRIHOD_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Prihod
{
private:
    int num2;
    int year2;
    int month2;
    int day2;

    string ORGname2;                   // Информация о продавце
    string OKPOcode2;
    string headpos2;
    string Cashier2;
    string NDS2;

    string FName2;                     // Информация о плательщике
    string SName2;
    string Otchestvo2;

    float sum2;

public:
    Prihod();
    Prihod(const int N2, const int Y2, const int M2, const int D2, const string ORG2, const string OKPO2, const string head2, const string Cash2, const string nds2, const string FN2, const string SN2, const string Otche2, const float S2);
    Prihod(const Prihod &obj2);

    Prihod & operator=(const Prihod &ps);

    void SetNum2(const int N2);
	void SetYear2(const int Y2);
	void SetMonth2(const int M2);
	void SetDay2(const int D2);
	void SetORG2(const string ORG2);
	void SetOKPO2(const string OKPO2);
	void SetHead2(const string head2);
	void SetFName2(const string FN2);
	void SetSName2(const string SN2);
	void SetOtche2(const string O2);
	void SetCash2(const string Cash2);
	void SetSum2(const float S2);
	void SetNDS2(const string nds2);

	void printpri() const;
};


#endif // PRIHOD_H_INCLUDED
