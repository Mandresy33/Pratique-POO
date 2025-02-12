#include "Infrastructure.h"
//Constructeur
Infrastructure::Infrastructure(){}
//Déconstructeur
Infrastructure::~Infrastructure(){}
//Setters
void Infrastructure::setId(int iid){
    id = iid;
}
void Infrastructure::setName(std::string iname){
    name = iname;
}
void Infrastructure::setLocalisation(std::string ilocalisation){
    localisation = ilocalisation;
}
void Infrastructure::setType(std::string itype){
    type = itype;
}
void Infrastructure::setState(std::string istate){
    state = istate;
}
 //Getters
int Infrastructure::getId(){
    return id;
}
std::string Infrastructure::getName(){
    return name;
}
std::string Infrastructure::getLocalisation(){
    return localisation;
}
std::string Infrastructure::getType(){
    return type;
}
std::string Infrastructure::getState(){
    return state;
}
 //Autre
