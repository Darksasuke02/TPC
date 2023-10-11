#include <stdio.h> 
#include "fichier.h"
#include <stdlib.h>
#define TAILLE_MAX 1000

void lire_fichier(char *nom_de_fichier){
    FILE* fp = NULL;
    char chaine[TAILLE_MAX] = "";
    fp = fopen(nom_de_fichier, "r");
    if (fp != NULL){
        while (fgets(chaine, TAILLE_MAX, fp)){
            printf("Contenu du fichier:\n");
            printf("%s", chaine);
            printf("\n");
        }
        fclose(fp);
    }
}

void ecrire_dans_fichier(char *nom_de_fichier, const char *message){
    FILE* fp = NULL;
    fp = fopen(nom_de_fichier,"w");
    if (fp != NULL){
        fputs(message,fp);
        fclose(fp);
    }
}