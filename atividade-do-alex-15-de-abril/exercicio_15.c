// esse aqui pega digite 3 valores e soma e dps pega o resultado e divide pelo resultado

#include<stdio.h>

int main(){

    int num1, num2, num3, resultado, resultado2;
    
    printf("Digite 3 valores que serão dividido pelo resultado \n Valor 1: ");
    scanf("%d", &num1);

    printf("Digite o 2 valor: ");
    scanf("%d", &num2);
    
    printf("Digite o 3 valor: ");
    scanf("%d", &num3);
    
    resultado= num1+num2+num3;
 
    resultado2= resultado/3;

    printf("seu resultado é %d\n",resultado2);
}

