#ifndef ETABLISSEMENT_H_INCLUDED
#define ETABLISSEMENT_H_INCLUDED
#include "../classeMere/Infrastructure.h"
namespace study
{
    class Etablissement:public Infrastructure
    {
        private:
            std::string specificName;
            int nombreEtudiant;
            std::string departementName;
            std::string directorName;
        public:
            Etablissement();
            ~Etablissement();
            //Setters
            void setSpecificName(std::string ename);
            void setNombreEtudiant(int eetudiant);
            void setDepartementName(std::string edepartementName);
            void setDirectorName(std::string edirector);

            //Getters
            std::string getSpecificName();
            int getNombreEtudiant();
            std::string getDepatementName();
            std::string getDirectorName();
    };
};
#endif //ETABLISSEMENT_H_INCLUDED