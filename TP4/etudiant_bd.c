#include <stdio.h>
#include <string.h>

#include "fichier.h" 

int main(){
int ed = 5;
int i;

char nomFichier[] = "etudiant.txt";
const char monMessage[] = "Ceci est un exemple d'écriture dans un fichier en C.";

struct etudiant{
char prenom[30];
char nom[30];
char adresse[30];
float note1;
float note2;
};

ecrire_dans_fichier(nomFichier, monMessage);

struct etudiant etudiantcpe[ed];

for(i=0; i<5; i++){
    printf("Entrez les détails de l'étudiant.e %d\n", i);
    printf("Nom :");
    scanf("%s", etudiantcpe[i].nom);

    printf("Prénom : ");
    scanf("%s", etudiantcpe[i].prenom);

    printf("Adresse : ");
    scanf("%s", etudiantcpe[i].adresse); // Permet de lire toute la ligne, espaces inclus.

    printf("Note 1 : ");
    scanf("%f", &etudiantcpe[i].note1);

    printf("Note 2 : ");
    scanf("%f", &etudiantcpe[i].note2);

}
}
