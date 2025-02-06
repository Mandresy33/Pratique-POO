#include "namespace.h"

using namespace isa;

int main()
{
    Complex a;
    Complex b;
    a.setRealPart(2);
    a.setImaginaryPart(5);
    b.setRealPart(1);
    b.setImaginaryPart(7);
    a.afficheComplex();
    return 0;
}