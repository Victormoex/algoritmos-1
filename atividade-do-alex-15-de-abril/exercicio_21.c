#include<stdio.h>

int main(){

int num1, num2, resultado;

    printf("Digite dois valores para ser dividido\n valor 1: ");
    scanf("%d", &num1);

    printf("Valor 2: ");
    scanf("%d", &num2);

    resultado= num1%num2;

    if(resultado % 2 == 0){

        printf("Seu numero é par \n");

    }else{

        printf("Seu nuemro é impar\n");

    }

    return 0
    ;


}