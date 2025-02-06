#include "namespace.h"

using namespace isa;

int main()
{
    Rationnel a;
    Rationnel b;
    Rationnel c;
    a.setNumerateur(2);
    a.setDenominateur(3);
    b.setNumerateur(1);
    b.setDenominateur(2);
    a.afficheRationnel();
    b.afficheRationnel();
    c = a.additionRationnel(b);
    c.afficheRationnel();
    c = a.multiplicationRationnel(b);
    c.afficheRationnel();
    c = a.divisionRationnel(b);
    c.afficheRationnel();
    return 0;
}