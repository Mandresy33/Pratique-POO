#include "Personne.h"
//Constructeur
Personne::Personne(){}
//Déconstructeur
Personne::~Personne(){}
//Setters
void Personne::setName(std::string pname){
    name = pname;
}
void Personne::setAge(int page){
    age = page;
}
void Personne::setGender(std::string pgender){
    gender = pgender;
}
//Getters
std::string Personne::getName(){
    return name;
}
int Personne::getAge(){
    return age;
}
std::string Personne::getGender(){
    return gender;
}
