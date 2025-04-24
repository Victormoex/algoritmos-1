//esse algoritmo calcula uma figura pela sua base comprimente e largura

#include<stdio.h>

int main(){

float base,largura,comprimento;

float volume, areadabase, areatotal;



    printf("Digite o valor da sua base: ");
    scanf("%f", &base);

    printf("Digite o valor da largura: ");
    scanf("%f", &largura);

    printf("Digite o valor do comprimento: ");
    scanf("%f", & comprimento);

    areadabase=largura*comprimento;
    volume= areadabase*base;
    areatotal=2 * (largura * comprimento + largura * base + comprimento * base);

    printf("volume: %.2f", volume);
    printf("area da base: %.2f", areadabase);
    printf("area total: %.2f", areatotal);

    return 0;
}

