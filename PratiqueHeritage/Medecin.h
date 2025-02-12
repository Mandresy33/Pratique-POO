#ifndef MEDECIN_H_INCLUDED
#define MEDECIN_H_INCLUDED
#include "Personne.h"
#include "Hopital.h"
#include <string>
#include <iostream>
class Medecin:public Personne
{
    private:
        std::string specialities;
        int phoneNumbers;
        std::string adresseCabinet;
        Hopital hopital;
        std::string heureConsultation;
    public:
        Medecin();
        ~Medecin();
        //Setters
        void setSpecialities(std::string speciality);
        void setPhoneNumbers(int tel);
        void setAdressCabinet(std::string adress);
        void setHopital(Hopital hname);
        void setHeureConsultation(std::string heure);
        //getters
        std::string getSpecialitites();
        int getPhoneNumbers();
        std::string getAdressCabinet();
        Hopital setHopital();
        std::string getHeureConsultation();
        void displayInfo();
};
#endif //MEDECIN_H_INCLUDED