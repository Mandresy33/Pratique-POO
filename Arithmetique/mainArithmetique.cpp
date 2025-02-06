#include "namespace.h"

using namespace isa;

int main()
{
    Complex a;
    Complex sum;
    Rationnel r;
    int b(2);
    double c = 1.34;
    a.setRealPart(1);
    a.setImaginaryPart(5);

    r.setNumerateur(1);
    r.setDenominateur(2);

    sum = Arithmetique::addition(b, a);
    sum.afficheComplex();
    sum = Arithmetique::addition(a, b);
    sum.afficheComplex();
    sum = Arithmetique::addition(c, a);
    sum.afficheComplex();
    sum = Arithmetique::addition(a, r);
    sum.afficheComplex();
    sum = Arithmetique::addition(r, a);
    sum.afficheComplex();
}