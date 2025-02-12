#include <iostream>
#include "Hopital.h"

//Constructeur
Hopital::Hopital(){}
//Déconstructeur
Hopital::~Hopital(){}
//Setters
void Hopital::setSpecificName(std::string specific)
{
    specificName = specific;
}
void Hopital::setState(std::string hstate)
{
    state = hstate;
}
void Hopital::setEmergencyPhoneNUmber(int tel)
{
    emergencyPhoneNumber = tel;
}
void Hopital::setRoomNumber(int hroomNumber)
{
    roomNumber = hroomNumber;
}
 //Getters
std::string Hopital::getSpecificName()
{
    return specificName;
}
std::string Hopital::getState()
{
    return state;
}
int Hopital::getEmergencyPhoneNumber()
{
    return emergencyPhoneNumber;
}
int Hopital::getRoomNumber()
{
    return roomNumber;
}
 //Autre
void Hopital::displayInfo()
{
   
}