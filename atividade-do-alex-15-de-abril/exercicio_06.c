//esse algoritmo faz a soma dos dois numeros inteiros que o usuario digitar

#include<stdio.h>


    int main(){

     int f,b,resultado;   

    
        printf("Digite um numero inteiro:");
        scanf("%d", &f);
        
        printf("Digite outro numero inteiro:");
        scanf("%d", & b);

        resultado= f+b;

        printf("a soma dos %d+%d e igual %d\n", f,b,resultado);
    }
