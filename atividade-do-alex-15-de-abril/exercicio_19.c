#include<stdio.h>
#include<math.h>


int main(){

    float a,b, resultado;

    printf("Digite um valor para ser multiplicado\n valor 1: ");
    scanf("%f", &a);

    printf("Digite o valor 2: ");
    scanf("%f", &b);

    resultado= a*b;

    int arredondado=round(resultado);    

    printf("seu resultado é %d",arredondado);

    return 0;
    }