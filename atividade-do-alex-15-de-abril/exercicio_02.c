#include<stdio.h>

    int main(){

        float altura;
        float mediamulheres=1.60;
        float mediahomens=1.75;
        char genero;

        printf("qual é seu genero?\n Homem=(H)\n Mulher=(M)");
        
        scanf(" %c", &genero);

        printf("qual é a sua altura:\n");

        scanf("%f", &altura);

        if(genero == 'H' ||genero =='h' ){
        
        if(altura>=mediahomens){   

            printf("Voce esta acima da media");
            
        }
        else{

            printf("Voce esta abaixo da media");

        }
      }         


        if(genero == 'M' || genero == 'm'){
        if(altura>=mediamulheres){

            
            printf("Voce esta acima da media");
          }  
        

        else{

            printf("Voce esta abaixo da media");

        }
      }  
        return 0;    

}




