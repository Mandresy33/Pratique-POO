#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include "Personne.h"
#include "Etablissement.h"
#include <string>
class Etudiant:public Personne
{
    private:
        Etablissement etablissement;
        std::string grade;
        std::string numeroInscription;
    public:
        Etudiant();
        ~Etudiant();

        //Setters
        void setEtablissement(Etablissement eEtab);
        void setGrade(std::string eGrade);
        void setNumeroInscription(std::string numInscri);
        //Getters
        Etablissement getEtablissement();
        std::string getGrade();
        std::string getNumeroInscription();
};
#endif //ETUDIANT_H_INCLUDED