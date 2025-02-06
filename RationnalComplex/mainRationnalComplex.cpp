#include "namespace.h"

using namespace isa;

int main()
{
    RationnalComplex a;
    RationnalComplex b;
    Rationnel e;
    Rationnel f;
    RationnalComplex sum;
    RationnalComplex produit;
    e.setNumerateur(1);
    e.setDenominateur(2);
    f.setNumerateur(1);
    f.setDenominateur(5);
    a.setRealPart(e);
    a.setImaginaryPart(f);
    b.setRealPart(e);
    b.setImaginaryPart(f);
    a.afficheRationnalComplex();
    sum = a.additionRationnalComplex(b);
    sum.afficheRationnalComplex();
    produit = a.multiplicationRationnalComplex(b);
    produit.afficheRationnalComplex();
    produit = a.divisionRationnalComplex(b);

    produit.afficheRationnalComplex();
}