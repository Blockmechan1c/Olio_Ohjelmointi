#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef c_olio("Gordon");

    c_olio.makeSalad(11);

    c_olio.makeSoup(7);

    ItalianChef i_olio("Mario");

    i_olio.askSecret("pizza", 1, 1);

    return 0;
}
