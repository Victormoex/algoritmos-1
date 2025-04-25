//um algoritmo que mostra um cardapio para o usuario escolherp

#include<stdio.h>

    int main(){

        int escolhas;


        do{
            printf("MENU DE OPCOES\n");
            printf("0 - sair\n");
            printf("1 - temaki frito\n");
            printf("2 - frango grelhado\n");
            printf("3 - pizza de frango com queijo\n");
            printf("4 - cookie\n");
            printf("5 - coca cola\n");

            printf("Escolha uma opcao: ");
            scanf("%d", &escolhas);





            switch(escolhas){
            case 0:
                printf("vc escolheu sair do cardapio:\n");
                break;
            
            case 1:
                printf("temaki frito:\n");
                break;
            
            case 2: 
                printf("frango grelhado:\n");
                break;
            
            case 3:
                printf("pizza de frango com queijo:\n");
                break;
            
            case 4:
                printf("cookie:\n");
                break;
            
            case 5:
                printf("coca cola:\n");
                break;
              
             default:

                printf("nao tem essa opcao: ");

                }
        
           } while(escolhas != 0);
        
            
        
        
            
        
        
        
        
        
        
        
        
        
        
        
        
        



        return 0;


        
    
}
    
