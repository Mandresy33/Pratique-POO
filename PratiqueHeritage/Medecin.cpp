#include "Medecin.h"
//Constructeur
Medecin::Medecin(){}
//Déconstructeur
Medecin::~Medecin(){}
//Setters
void Medecin::setSpecialities(std::string speciality)
{
    specialities = speciality; 
}
void Medecin::setPhoneNumbers(int tel)
{
    phoneNumbers = tel;
}
void Medecin::setAdressCabinet(std::string adress)
{
    adresseCabinet = adress;
}
void Medecin::setHopital(Hopital hname)
{
    hopital = hname;
}
void Medecin::setHeureConsultation(std::string heure)
{
    heureConsultation = heure;
}
 //Getters
std::string Medecin::getSpecialitites()
{
    return specialities;
}
int Medecin::getPhoneNumbers()
{
    return phoneNumbers;
}
std::string Medecin::getAdressCabinet()
{
    return adresseCabinet;
}
Hopital Medecin::setHopital()
{
    return hopital;
}
std::string Medecin::getHeureConsultation()
{
    return heureConsultation;
}

//Autre
void Medecin::displayInfo()
{
    std::cout << "Information about the Doctor\n";
    std::cout << "Name:" << name << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Hospital: " << hopital.getSpecificName() << std::endl;
    std::cout << "Speciality: " <<  specialities << std::endl;
    std::cout << "Adresse de cabinet: " << adresseCabinet << std::endl;
    std::cout << "Consultation hour: " << heureConsultation << std::endl;
}