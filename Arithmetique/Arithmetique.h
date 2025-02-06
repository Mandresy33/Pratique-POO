#ifndef ARITHMETIQUE_H_INCLUDED
#define ARITHMETIQUE_H_INCLUDED
class Arithmetique
{
    public:
        /*On a créer deux fonction pour chaque cas pour que l'ordre des arguments ne compte pas*/
        //Addition entre entier et Complex
        static Complex addition(int a, Complex b);
        static Complex addition(Complex a, int b);
        //Addition entre double et Complex
        static Complex addition(double a, Complex b);
        static Complex addition(Complex a, double b);
        //Addition entre Rationnel et Complex
        static Complex addition(Complex a, Rationnel b);
        static Complex addition(Rationnel a, Complex b);
        //Addition entre Rationnel Complex et Complex
        static Complex addition(RationnalComplex a, Complex b);
};
#endif // ARITHMETIQUE_H_INCLUDED
