//um algoritmo que limite a quantidade de caracter que o usuario pode escrever

#include<stdio.h>


int main(){

    char nome[50];



    printf("Digite seu nome em no maximo 50 caracter:  ");
    scanf("%s",nome );

    printf("seu nome eh: %s", nome);

    return 0;
}
