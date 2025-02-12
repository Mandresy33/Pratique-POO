#include "Enseignant.h"
namespace study
{
    //Constructeur
    Enseignant::Enseignant(){}
    //Déconstructeur
    Enseignant::~Enseignant(){}
    //Setters
    void Enseignant::setEtablissement(Etablissement wetab){
        etablissement = wetab;
    }
    void Enseignant::setIdentifiant(int wid){
        identifiant = wid;
    }
    void Enseignant::setMailAdress(std::string wemail){
        mailAdress = wemail;
    }
    void Enseignant::setMatiereEnseignment(std::string matiere){
        matiereEnseignment = matiere;
    }
    //Getters
    Etablissement Enseignant::getEtablissement(){
        return etablissement;
    }
    int Enseignant::getId(){
        return identifiant;
    }
    std::string Enseignant::getMailAdress(){
        return mailAdress;
    }
    std::string Enseignant::getMatiereEnseignment(){
        return matiereEnseignment;
    }
    //Autre
    void Enseignant::displayInfo()
    {
        std::cout << "Information about the teacher: " << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Nom Etablissement: " << etablissement.getSpecificName()<< std::endl;
        std::cout << "E mail adress: " << mailAdress <<std::endl;
        std::cout << "UE: " << matiereEnseignment << std::endl;
    }
};