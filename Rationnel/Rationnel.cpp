#include <iostream>
#include "namespace.h"

using namespace isa;

Rationnel::Rationnel(){};
Rationnel::~Rationnel(){};

void Rationnel::setNumerateur(int num)
{
    numerateur = num;
}
void Rationnel::setDenominateur(int denom)
{
    denominateur = denom;
}
int Rationnel::getNumerateur()
{
    return numerateur;
}
int Rationnel::getDenominateur()
{
    return denominateur;
}
void Rationnel::afficheRationnel()
{
    std::cout << numerateur << " / " << denominateur << std::endl; 
}
Rationnel Rationnel::additionRationnel(Rationnel b)
{
    Rationnel sum;
    if(denominateur == b.getDenominateur()) //Meme denominateur
    {
        sum.setNumerateur(numerateur + b.getNumerateur());
        sum.setDenominateur(denominateur);
    }
    else
    {
        sum.setNumerateur((numerateur * b.getDenominateur()) + (b.getNumerateur() * denominateur));
        sum.setDenominateur(denominateur * b.getDenominateur());
    }
    return sum;
}
Rationnel Rationnel::multiplicationRationnel(Rationnel b)
{
    Rationnel produit;
    produit.setNumerateur(numerateur * b.getNumerateur());
    produit.setDenominateur(denominateur * b.getDenominateur());
    return produit;
}
Rationnel Rationnel::divisionRationnel(Rationnel b)
{
    Rationnel div;
    div.setNumerateur(numerateur * b.getDenominateur());
    div.setDenominateur(denominateur * b.getNumerateur());
    return div;
}