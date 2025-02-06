#include <iostream>
#include "namespace.h"

using namespace isa;

Complex Arithmetique::addition(int a, Complex b)
{
    Complex sum;
    sum.setRealPart(b.getRealPart() + a);
    sum.setImaginaryPart(b.getImaginaryPart());
    return sum;
}
Complex Arithmetique::addition(Complex a, int b)
{
    Complex sum;
    sum.setRealPart(a.getRealPart() + b);
    sum.setImaginaryPart(a.getImaginaryPart());
    return sum;
}
Complex Arithmetique::addition(double a, Complex b)
{
    Complex sum;
    sum.setRealPart(b.getRealPart() + a);
    sum.setImaginaryPart(b.getImaginaryPart());
    return sum;
}
Complex Arithmetique::addition(Complex a, double b)
{
    Complex sum;
    sum.setRealPart(a.getRealPart() + b);
    sum.setImaginaryPart(a.getImaginaryPart());
    return sum;
}
Complex Arithmetique::addition(Complex a, Rationnel b)
{
    Complex sum;
    double i = b.getNumerateur();
    double j = b.getDenominateur();
    sum.setRealPart(a.getRealPart() + (i/j) );
    sum.setImaginaryPart(a.getImaginaryPart());
    return sum;
}
Complex Arithmetique::addition(Rationnel a, Complex b)
{
    Complex sum;
    double i = a.getNumerateur();
    double j = a.getDenominateur();
    sum.setRealPart(b.getRealPart() + (i/j) );
    sum.setImaginaryPart(b.getImaginaryPart());
    return sum;
}
Complex Arithmetique::addition(RationnalComplex a, Complex b)
{
    Complex sum;
    Rationnel i = a.getRealPart();
    Rationnel j = a.getImaginaryPart();
    double e = i.getNumerateur();
    double f = i.getDenominateur();
    sum.setRealPart(b.getRealPart() + (e/f));
    e = j.getNumerateur();
    f = j.getDenominateur();
    sum.setImaginaryPart(b.getImaginaryPart() + (e/f));
    return sum;
}
