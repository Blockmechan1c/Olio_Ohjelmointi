#include "pankkitili.h"

Pankkitili::Pankkitili()
{

}

Pankkitili::Pankkitili(string o)
{
    omistaja = o;
    cout << "Pankkitilin omistaja on " << omistaja << endl;
    cout << "Pankkitilin saldo on " << saldo << endl;
}

double Pankkitili::getSaldo() const
{
    return saldo;
}

bool Pankkitili::deposit(double summa)
{
    if(summa > 0)
    {
        saldo = saldo + summa;
        return true;
    }
    else
    {
        return false;
    }

    cout << "Pankkitili talletus: " << saldo << endl;
}


bool Pankkitili::withdraw(double summa)
{
    if(summa < 0)
    {
        return false;
    }
    else if(summa > saldo)
    {
        return false;
    }
    else
    {
        saldo = saldo - summa;
        return true;
    }

    cout << "Pankkitili nosto: " << summa << endl;
}
