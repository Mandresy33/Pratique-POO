#include "namespace.h"
#include <iostream>
using namespace isa;

RationnalComplex::RationnalComplex(){}
RationnalComplex::~RationnalComplex(){}

void RationnalComplex::setRealPart(Rationnel real)
{
    realPart.setNumerateur(real.getNumerateur());
    realPart.setDenominateur(real.getDenominateur());
}
void RationnalComplex::setImaginaryPart(Rationnel imaginary)
{
    imaginaryPart.setNumerateur(imaginary.getNumerateur());
    imaginaryPart.setDenominateur(imaginary.getDenominateur());
}
Rationnel RationnalComplex::getRealPart()
{
    return realPart;
}
Rationnel RationnalComplex::getImaginaryPart()
{
    return imaginaryPart;
}
void RationnalComplex::afficheRationnalComplex()
{
    std::cout << realPart.getNumerateur() << "/" << realPart.getDenominateur() << " + i" << imaginaryPart.getNumerateur() << "/" << imaginaryPart.getDenominateur()<< std::endl; 
}
RationnalComplex RationnalComplex::additionRationnalComplex(RationnalComplex b)
{
    RationnalComplex sum;
    Rationnel i;
    i = realPart.additionRationnel(b.getRealPart());
    sum.setRealPart(i);
    i = imaginaryPart.additionRationnel(b.getImaginaryPart());
    sum.setImaginaryPart(i);
    return sum;
}
RationnalComplex RationnalComplex::multiplicationRationnalComplex(RationnalComplex b)
{
    RationnalComplex produit;
    Rationnel i;
    i = realPart.multiplicationRationnel(b.getRealPart());
    produit.setRealPart(i);
    i = imaginaryPart.multiplicationRationnel(b.getImaginaryPart());
    produit.setImaginaryPart(i);
    return produit;
}
RationnalComplex RationnalComplex::divisionRationnalComplex(RationnalComplex b)
{
    RationnalComplex div;
    Rationnel i;
    i = realPart.divisionRationnel(b.getRealPart());
    div.setRealPart(i);
    i = imaginaryPart.divisionRationnel(b.getImaginaryPart());
    div.setImaginaryPart(i);
    return div;
}