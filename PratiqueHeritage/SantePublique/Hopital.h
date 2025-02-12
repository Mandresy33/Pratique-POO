#ifndef HOPITAL_H_INCLUDED
#define HOPITAL_H_INCLUDED
#include <string>
#include "../classeMere/Infrastructure.h"
namespace health{
    class Hopital:public Infrastructure
    {
        private:
            std::string specificName;
            std::string state; //private or public
            int emergencyPhoneNumber;
            int roomNumber;
        public:
            Hopital();
            ~Hopital();
            //Setters
            void setSpecificName(std::string specific);
            void setState(std::string hstate);
            void setEmergencyPhoneNUmber(int tel);
            void setRoomNumber(int hroomNumber);
            //Getters
            std::string getSpecificName();
            std::string getState();
            int getEmergencyPhoneNumber();
            int getRoomNumber();
            void displayInfo();
    };
};
#endif //HOPITAL_H_INCLUDED