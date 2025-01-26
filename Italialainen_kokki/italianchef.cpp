#include "italianchef.h"


ItalianChef::ItalianChef()
{
    cout << "ItalianChef defaultkonstruktori "
         << endl;
}

ItalianChef::ItalianChef(string name)
{
    cout << "ItalianChef konstruktori "
        << "kokin nimi on "
        << name
         << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori "
         << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    cout << "Syötä salasana "
         << endl;
    cin >> pw;
    cout << "Syötä jauhojen määrä "
         << endl;
    cin >> f;
    cout << "Syötä veden määrä "
         << endl;
    cin >> w;

    flour = f;

    water = w;

    int result = password.compare(pw);

    if(result == 0)
    {
        makePizza();
        return true;
    }
}

int ItalianChef::makePizza()
{
    int pizza = 0;

    while (flour >= 5 && water >= 5)
    {
        flour = flour - 5;
        water = water - 5;
        pizza++;
    }

    cout << "Pizzoja tehtiin "
         << pizza
         << endl;
}
