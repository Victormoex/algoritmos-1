#include<stdio.h>   

    int anobissexto(int ano){


        if((ano % 4== 0 && 100!= 0) || (ano % 400==0)){

           return 1;    
        } else{

           return 0;
            
        }
    
        }

        int main(){


    int anofinal, anoinicial;

        printf("Digite seu ano inicial:");
        scanf("%d", &anoinicial);

        printf("Digite seu ano final:");
        scanf("%d", &anofinal);

        if(anoinicial>=anofinal){

        return 0;
    }


    printf(" os anos bissexto entre %d e %d sao:\n", anoinicial, anofinal);

    for (int ano=anoinicial; ano<=anofinal; ano++){
        if(anobissexto(ano)){

            printf("%d\n", ano);

        }


        
    }

    return 0;
          


    



        
    }




    