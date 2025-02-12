#ifndef ENSEIGNANT_H_INCLUDED
#define ENSEIGNANT_H_INCLUDED
#include <string>
#include <iostream>
#include "../classeMere/Personne.h"
#include "Etablissement.h"
using namespace study;
namespace study{
    class Enseignant:public Personne
    {
        private:
            Etablissement etablissement;
            int identifiant;
            std::string mailAdress;
            std::string matiereEnseignment;
        public:
            Enseignant();
            ~Enseignant();

            //Setters
            void setEtablissement(Etablissement wetab);
            void setIdentifiant(int wid);
            void setMailAdress(std::string wemail);
            void setMatiereEnseignment(std::string matiere);
            //Getters
            Etablissement getEtablissement();
            int getId();
            std::string getMailAdress();
            std::string getMatiereEnseignment();
            //Autre
            void displayInfo();
    };
};
#endif //ENSEIGNANT_H_INCLUDED