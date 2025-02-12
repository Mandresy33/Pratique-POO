#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <string>
class Personne
{
    protected:
        std::string name;
        int age;
        std::string gender;
    public:
        Personne();
        ~Personne();

        //Setters
        void setName(std::string pname);
        void setAge(int page);
        void setGender(std::string pgender);
        //Getters
        std::string getName();
        int getAge();
        std::string getGender();
};
#endif //PERSONNE_H_INCLUDED
