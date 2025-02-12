#include "Enseignant.h"
using namespace study;
int main()
{
    Infrastructure inf1;
    inf1.setName("Etablissement");
    inf1.setType("Batiment");
    Etablissement etab;
    etab.setSpecificName("MIT");
    etab.setLocalisation("Ankatso");
    Enseignant ens1;
    ens1.setName("Mr. Tahiry");
    ens1.setGender("Male");
    ens1.setMailAdress("tahiry@gmail.com");
    ens1.setMatiereEnseignment("Object Oriented Programmation");
    ens1.setEtablissement(etab);
    ens1.displayInfo();
    return 0;
}