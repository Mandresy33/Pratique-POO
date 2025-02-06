#ifndef RATIONNALCOMPLEX_H_INCLUDED
#define RATIONNALCOMPLEX_H_INCLUDED
class RationnalComplex
{
    private:
        Rationnel realPart;
        Rationnel imaginaryPart;
    public:
        RationnalComplex(); //Constructeur
        ~RationnalComplex(); //Déconstructeur
        //Setters
        void setRealPart(Rationnel real);
        void setImaginaryPart(Rationnel imaginary);
        //Getters
        Rationnel getRealPart();
        Rationnel getImaginaryPart();
        //Méthodes
        void afficheRationnalComplex();
        RationnalComplex additionRationnalComplex(RationnalComplex b);
        RationnalComplex multiplicationRationnalComplex(RationnalComplex b);
        RationnalComplex divisionRationnalComplex(RationnalComplex b);
};
#endif // RATIONNALCOMPLEX_H_INCLUDED