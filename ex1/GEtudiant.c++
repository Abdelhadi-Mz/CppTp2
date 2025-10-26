#include <iostream>
#include "GEtudiant.h"

float Etudiant::caluclMoyenne(){
    return (n1+n2+n3)/3;
};
void Etudiant::afficher(){
    std::cout<<"la moyenne de l'etudiant "<<nom<<", CIN :"<<cin<<" est :"<<caluclMoyenne()<<std::endl;
}
