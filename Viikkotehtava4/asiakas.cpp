#include "asiakas.h"

Asiakas::Asiakas(string n, double lr)
    : kayttotili(n), luottotili(n, lr)
{
    nimi = n;
    cout << "Uusi asiakkuus avattu " << nimi << endl;
}

string Asiakas::getNimi() const
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Pankkitilin saldo " << kayttotili.getSaldo() << endl;
    cout << "Luottotilin saldo " << luottotili.getSaldo() << endl;
}

bool Asiakas::luotonMaksu(double summa)
{
    if (summa < 0.0)
    {
        cout << "Luoton maksu " << summa << " ei sallittu" << endl;
        return false;
    } else
    {
        luottotili.deposit(summa);
        return true;
    }
}

bool Asiakas::luotonNosto(double summa)
{
    if (summa < 0.0)
    {
        cout << "Luoton nosto " << summa << " ei sallittu" << endl;
        return false;
    } else
    {
        luottotili.withdraw(summa);
        return true;
    }
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    cout << "Pankkitili: " << getNimi() << " siirtaa "
         << summa << " " << saaja.getNimi() << ":lle"
         << endl;
    cout << getNimi() << " ";
    if (true == nosto(summa))
    {
        cout << saaja.getNimi() << " ";
        saaja.talletus(summa);
    }
}

bool Asiakas::nosto(double summa)
{
    if (summa < 0.0)
    {
        cout << "Nosto " << summa << " ei sallittu" << endl;
        return false;
    } else
    {
        kayttotili.withdraw(summa);
        return true;
    }
}

bool Asiakas::talletus(double summa)
{
    if (summa <= 0.0)
    {
        cout << "Talletus " << summa << " ei sallittu" << endl;
        return false;
    } else {
        kayttotili.deposit(summa);
        return true;
    }
}
