#include "Etudiant.h"
//Constructeur
Etudiant::Etudiant(){}
//Déconstructeur
Etudiant::~Etudiant(){}
//Setters
void Etudiant::setEtablissement(Etablissement eEtab){
    etablissement=eEtab;
}
void Etudiant::setGrade(std::string eGrade){
    grade = eGrade;
}
void Etudiant::setNumeroInscription(std::string numInscri){
    numeroInscription = numInscri;
}
 //Getters
Etablissement Etudiant::getEtablissement(){
    return etablissement;
}
std::string Etudiant::getGrade(){
    return grade;
}
std::string Etudiant::getNumeroInscription(){
    return numeroInscription;
}
 //Autre