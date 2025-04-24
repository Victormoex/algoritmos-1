#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


int num1, num2, num3, num4, num5, sorteio;


printf("Digite 5 numeros para ser sorteado\n o valor 1: ");
scanf("%d", &num1);


printf("Digite o valor 2: ");
scanf("%d", &num2);


printf("Digite o valor 3: ");
scanf("%d", &num3);


printf("Digite o valor 4: ");
scanf("%d", &num4);

printf("Digite o valor 5: ");
scanf("%d", &num5);


srand(time(NULL));
sorteio = rand() % 5 + 1;

    if(sorteio==1){

    printf("%d", num1);

    }else if(sorteio==2){

  
    printf("%d", num2);
    }   
    else if(sorteio==3){

  
    printf("%d", num3);
    }
    else if(sorteio==4){

    printf("%d", num4);
        }


    else{   

    printf("%d", num5);

    }

}




































