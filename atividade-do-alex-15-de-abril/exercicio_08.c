#include<stdio.h>

    int main(){

        float altura;
        char nome[50];
        char genero;
        int idade;
        
        
        printf("digite seu genero[M]ou[F]: ");
        
        scanf("%c", &genero);

        printf("digite sua idade:");

        scanf("%d", &idade);

        printf ("Digite sua altura:");
       
        scanf ("%f",&altura);
    
        printf("digite seu nome:");
        
        scanf("%s",&nome);
    
        printf("seu genero eh: %c \n sua idade eh: %d \n sua altura eh: %f\n seu nome eh: %s\n",genero,idade,altura,nome);

    
        return 1;

    }