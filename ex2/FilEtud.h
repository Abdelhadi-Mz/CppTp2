#ifndef FILETUD_H
#define FILETUD_H
#include<string>
class Etudiant{
 private:
    std::string nom, cin;
    float note;
 public: 
    void setNom(std::string nom){this->nom=nom;}
    std::string getNom(){return nom;}
    void setCin(std::string cin){this->cin=cin;}
    std::string getCin(){return cin;}
    void setNote(int note){this->note=note;}
    float getnote(){return note;}
    void afficher();
};
class Filiere{
 private:
    std::string nomFiliere;
    Etudiant e;
 public:
    void setNomF(std::string nomFiliere){this->nomFiliere=nomFiliere;}
    void setEtudiant(Etudiant e){this->e=e;}
    void afficher();

};
#endif