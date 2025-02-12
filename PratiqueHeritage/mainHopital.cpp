#include "Medecin.h"
int main()
{
    Infrastructure inf1;
    inf1.setName("Hopital");
    inf1.setType("Batiment");
    Hopital hopital;
    hopital.setSpecificName("HGRA");
    Medecin med1;
    med1.setName("Dr. Stone");
    med1.setGender("Male");
    med1.setHopital(hopital);
    med1.setSpecialities("Pédiatre");
    med1.setHeureConsultation("Mardi: 8h-17h");
    med1.setAdressCabinet("Porte 302");
    med1.setPhoneNumbers(334565490);
    med1.displayInfo();
    return 0;
}
