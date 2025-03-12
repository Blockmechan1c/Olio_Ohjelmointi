#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas A("Aaa", 1000);
    Asiakas B("Bbb", 1000);
    Asiakas C("Ccc", 1000);

    A.tiliSiirto(50,B);
    B.tiliSiirto(100,C);
    C.tiliSiirto(150,A);
    return 0;
}
