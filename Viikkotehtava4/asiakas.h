#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
public:
    Asiakas(string n, double lr);

    bool talletus(double summa);

    bool tiliSiirto(double summa, Asiakas &saaja);

    string getNimi() const;
    void showSaldo();
    bool nosto(double summa);
    bool luotonMaksu(double);
    bool luotonNosto(double);

private:
    Pankkitili kayttotili;
    Luottotili luottotili;
    string nimi;

};

#endif // ASIAKAS_H
