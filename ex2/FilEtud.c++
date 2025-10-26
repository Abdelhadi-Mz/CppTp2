#include<iostream>
#include "FilEtud.h"

void Etudiant::afficher(){
    std::cout<<"Etudiant :"<< nom<<"(Cin : "<< cin<<")"<<" Note : "<<note<<std::endl;
}
void Filiere::afficher(){
    std::cout<<"Filiere : "<< nomFiliere<<std::endl;
    e.afficher();
}