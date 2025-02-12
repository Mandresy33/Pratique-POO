#ifndef INFRASTRUCTURE_H_INCLUDED
#define INFRASTRUCTURE_H_INCLUDED
#include <string>
class Infrastructure
{
    protected:
        int id;
        std::string name;
        std::string localisation;
        std::string type;
        std::string state;
    public:
        Infrastructure();
        ~Infrastructure();
        //Setters
        void setId(int iid);
        void setName(std::string iname);
        void setLocalisation(std::string ilocalisation);
        void setType(std::string itype);
        void setState(std::string istate);
        //Getters
        int getId();
        std::string getName();
        std::string getLocalisation();
        std::string getType();
        std::string getState();
};
#endif //INFRASTRUCTURE_H_INCLUDED
