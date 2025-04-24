#include<stdio.h>

int main(){

int resi1, resi2, req;

    printf("Digite os valores dos resistores\n resitor 1:");
    scanf("%d", &resi1);

    printf("Digite o valor do resistor 2: ");
    scanf("%d", &resi2);

    if(resi1 <=0 || resi2 <= 0){

        printf("Seu numero tem que ser maior que zero\n");

        return 1;
    }

    req= (resi1*resi2) / (resi1 + resi2);


    printf("sua resistencia equivalente é %d\n",req);

    





}   