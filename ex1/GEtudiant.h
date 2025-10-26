#ifndef GETUDIANT_H
#define GETUDIANT_H
#include<string>
class Etudiant{
    private:
        std::string nom,cin;
        float n1,n2,n3;
    public:
        void setNom(std::string nom){this->nom=nom;}
        std::string getNom(){return nom;}


        void setCin(std::string cin){this->cin=cin;}
        std::string getCin(){return cin;}


        void setN1(float n ){ if(n>0 && n<=20) n1=n;}
        float getN1(){return n1;}

        void setN2(float n ){if(n>0 && n<=20) n2=n;}
        float getN2(){return n2;}

        void setN3(float n ){if(n>0 && n<=20) n3=n;}
        float getN3(){return n3;}
        

        float caluclMoyenne();
        void afficher();
};

#endif