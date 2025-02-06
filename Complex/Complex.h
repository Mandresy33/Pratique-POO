#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
    private: 
        double realPart;
        double imaginaryPart;
    public:
        Complex();
        ~Complex();
        //Setters
        void setRealPart(double real);
        void setImaginaryPart(double imaginary);
        double getRealPart();
        double getImaginaryPart();
        void afficheComplex();
        Complex additionComplex(Complex b);
};

#endif // COMPLEX_H_INCLUDED