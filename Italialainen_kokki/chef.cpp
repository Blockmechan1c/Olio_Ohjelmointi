#include "chef.h"

Chef::Chef()
{
    cout << "Chef defaultkonstruktori, ei nimeä"
         << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, kokin nimi "
         << chefName
         << endl;
}

Chef::~Chef()
{
     cout << "Chef destruktori"
         << endl;
}

int Chef::makeSalad(int aines)
{
    int annoksia = 0;
    cout << "Aineksia "
         << aines
         << endl;

    while (aines >= 5)
    {
        aines = aines - 5;
        annoksia++;
    }

    cout << "Annoksia tehtiin "
         << annoksia
         << endl;
}

int Chef::makeSoup(int aines)
{
    int annoksia2 = 0;
    cout << "Aineksia "
         << aines
         << endl;

    while (aines >= 3)
    {
        aines = aines - 3;
        annoksia2++;
    }

    cout << "Annoksia tehtiin "
         << annoksia2
         << endl;
}

string Chef::getChefName() const
{
    return chefName;
}


