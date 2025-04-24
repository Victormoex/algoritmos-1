//esse algoritmo verifica se a soma dos numeros do usuario é maior que o numero 10

#include<stdio.h>

int main(){

    int numero1,numero2,resultado;


    printf("digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("digite o segundo valor: ");
    scanf("%d", &numero2);

    resultado= numero1 + numero2;

    if(resultado >=10){

        printf("A sua soma é maior ou igual 10 e ela eh %d ", resultado);

    }else
        printf("sua soma é menor que 10 ");

    return 0;
}
