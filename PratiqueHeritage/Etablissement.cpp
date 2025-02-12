#include "Etablissement.h"
//Constructeur
Etablissement::Etablissement(){}
//Déconstructeur
Etablissement::~Etablissement(){}
//Setters
void Etablissement::setSpecificName(std::string ename){
    specificName = ename;
}
void Etablissement::setNombreEtudiant(int eetudiant){
    nombreEtudiant = eetudiant;
}
void Etablissement::setDepartementName(std::string edepartementName){
    departementName = edepartementName;
}
void Etablissement::setDirectorName(std::string edirector){
    directorName = edirector;
}
 //Getters
std::string Etablissement::getSpecificName(){
    return specificName;
}
int Etablissement::getNombreEtudiant(){
    return nombreEtudiant;
}
std::string Etablissement::getDepatementName(){
    return departementName;
}
std::string Etablissement::getDirectorName(){
    return directorName;
}
