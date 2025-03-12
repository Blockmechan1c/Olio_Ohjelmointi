#include "luottotili.h"

Luottotili::Luottotili()
{

}

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    luottoRaja = lr;
    cout << "luottoraja = " << luottoRaja << endl;
    cout << "Luottotilin saldo on " << saldo << endl;
}

bool Luottotili::deposit(double summa)
{
    double velka;
    if(summa < 0)
    {
        return false;
    }
    else if(velka - summa < 0)
    {
        return false;
    }
    else
    {
        velka = velka + summa;
    }

    cout << "Luottotili: Luoton nosto: " << summa << endl;
}


bool Luottotili::withdraw(double summa)
{
    if(summa < 0)
    {
        return false;
    }
    else if(saldo + summa > luottoRaja)
    {
        return false;
    }
    else
    {
        saldo = saldo + summa;
        return true;
    }

    cout << "Luottotili: Luoton maksu: " << summa << endl;
}
