#include "FilEtud.h"
int main(){
    Etudiant e1;
    Filiere f1;
    e1.setNom("abdo");
    e1.setCin("t48939");
    e1.setNote(20);
    f1.setNomF("Info");
    f1.setEtudiant(e1);
    f1.afficher();
}