//esse algoritmo mostra se o resultado da soma e um numero inteiro

#include<stdio.h>

int main(){
int a, b, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &b);

    
    resultado=a/b;


    if(resultado !=0){

        printf("Seu resultado eh %d", resultado);

    }else{

        printf("Seu resultado nao tem um numero inteiro: ");

    }


    return 0;






}
