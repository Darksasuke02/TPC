#include <stdio.h>
#include "operator.h" 

int main(){
    int r;
    int num1, num2;
    unsigned char op;
    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2); 

    getchar();

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf("%c", &op); 

    switch(op){
    case '+' : r = somme(num1, num2);
    break;
    case '-' : r = difference(num1, num2);
    break;
    case '*' : r = produit(num1, num2);
    break;
    case '/' : r = quotient(num1, num2);
    break;
    case '%' : r = modulo(num1, num2);
    break;
    case '&' : r = et(num1, num2);
    break;
    case '|' : r = ou(num1, num2);
    break;
    case '~' : r = negation(num1);
   }
   printf("Résultat : %d", r);
}