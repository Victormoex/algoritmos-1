// o algoritmo pega o ano de nascimento do usuario e transforma em dias

#include<stdio.h>

int main(){

    int anonascimento;
    int ano=2025;
    int idade;
    int dias;


    printf("Qual e seu ano de nascimento\n");
    scanf("%d", &anonascimento);

    idade=ano-anonascimento;
    
    dias = idade * 365;

    printf("Voce viveu %d dias", dias);

return 0;
}
