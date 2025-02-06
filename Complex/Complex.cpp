#include <iostream>
#include "namespace.h"

using namespace isa;

Complex::Complex(){}
Complex::~Complex(){}

void Complex::setRealPart(double real)
{
    realPart = real;
}
void Complex::setImaginaryPart(double imaginary)
{
    imaginaryPart = imaginary;
}
double Complex::getRealPart()
{
    return realPart;
}
double Complex::getImaginaryPart()
{
    return imaginaryPart;
}
void Complex::afficheComplex()
{
    std::cout << realPart << " + i" << imaginaryPart << std::endl;
}
Complex Complex::additionComplex(Complex b)
{
    Complex sum;
    sum.setRealPart(realPart + b.getRealPart());
    sum.setImaginaryPart(imaginaryPart + b.getImaginaryPart());
    return sum;
}
Complex Complex::multiplicationComplex(Complex b)
{
    Complex produit;
    produit.setRealPart((realPart*b.getRealPart()) - (imaginaryPart*b.getImaginaryPart()));
    produit.setImaginaryPart((realPart*b.getImaginaryPart()) + (b.getRealPart()*imaginaryPart));
    return produit;
}
