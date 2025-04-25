//esse algoritmo faz a soma dos dois numeros que o usuario escolher e o resultado da soma ser a divsao 


#include<stdio.h>


    int main(){

     int f,b,resultado1;   
     int k,l,resultado2,resultado3;  
    
        printf("Digite um numero inteiro:");
        scanf("%d", &f);
        
        printf("Digite outro numero inteiro:");
        scanf("%d", & b);

        resultado1= f+b;

        printf("a soma dos %d+%d e igual %d\n", f,b,resultado1);
    
    
        printf("Digite um numero inteiro:");
        scanf("%d", &k);
        
        printf("Digite outro numero inteiro:");
        scanf("%d", &l );

        resultado2= k+l;

        printf("a soma dos %d+%d e igual %d\n", k,l,resultado2);
    
        resultado3=resultado1/resultado2;

        printf("a divisao eh %d/%d e igual a %d\n",resultado1,resultado2,resultado3);
        
    
    
    
    
    
    
    
    
    }

