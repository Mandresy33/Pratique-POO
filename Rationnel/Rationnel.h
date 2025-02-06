#ifndef RATIONNEL_H_INCLUDED
#define RATIONNEL_H_INCLUDED

class Rationnel
{
    private:
        int numerateur;
        int denominateur;
    public:
        Rationnel(); //Constructeur
        ~Rationnel(); //Déconstructeur
        //Setters
        void setNumerateur(int num);
        void setDenominateur(int denom);
        //Getter
        int getNumerateur();
        int getDenominateur();
        //Méthodes
        void afficheRationnel();
        Rationnel additionRationnel(Rationnel b);
        Rationnel multiplicationRationnel(Rationnel b);
        Rationnel divisionRationnel(Rationnel b);
};

#endif // RATIONNEL_H_INCLUDED