#include<stdio.h>

int main(){

    int lado1, lado2, lado3;


    printf("Digite os valores do triangulo\n Digite o valor 1: ");
    scanf("%d", &lado1);

    printf("Digite o valor 2: ");
    scanf("%d", &lado2);

    printf("Digite o valor 3: ");
    scanf("%d", &lado3);

    if(lado1+lado2>lado3 && lado2+lado3>lado1 && lado1+lado3>lado2){
        if(lado1==lado2 && lado2==lado3){
         printf("é Equilatero");
       }
       
       else if(lado1==lado2 || lado2==lado3 || lado3 == lado1){
        printf("isoceles");
       }else{
        printf("escaleno");
       }
    
    
   } else{
        printf("Nao é um trinagulo");
    }


}