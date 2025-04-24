#include<stdio.h>



    void exercio1(){
    float pontoX, pontoY;


    printf("Digite 2 valores no plano cartesiano\n Digite o valor de X: ");
    scanf("%f", &pontoX);
    printf("Digite o valor de Y: ");
    scanf("%f", &pontoY);
    printf("Seus valores são de X é %f e seu valor de Y é %f ", pontoX, pontoY);

     }

     void exercio2(){

        int a,b,c;

        printf("Digite tres valoes\n Valor 1: ");
        scanf("%d", &a);
        printf("Valor 2 :");
        scanf("%d", &b);
        printf("Valor 3: ");
        scanf("%d", &c);

        }

    void exercio3(){

            int mes, idade, anos;

            printf("Qual a sua idade: ");
            scanf("%d", &idade);
            printf("Qual mes vc nasceu: ");
            scanf("%d", &mes);
            printf("Qual ano vc nasceu: ");
            scanf("%d", & anos);
                }
        
        
    void exercio4(){

        int idade, anoinicial, dia;
        int anofinal=2025;
        
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        anoinicial=idade-anofinal;
        dia=idade*365;

        printf("Seu nascimento em dias é: %d ", dia);
                }

    void exercio5(){

        int n1,n2,n3;
        
        printf("Digite 3 notas de estudante\n Nota 1: ");
        scanf("%d", &n1);
        printf("Nota 2: ");
        scanf("%d", &n2);
        printf("Nota 3: ");
        scanf("%d", &n3);
        printf(" sua notas são %d, %d, e %d", n1, n2, n3);
                }


    void exercio6(){

        float v1,v2,v3;

        printf("Digite tres valores \n Valor 1: ");
        scanf("%f", &v1);
        printf("Valor 2: ");
        scanf("%f", &v2);
        printf("Valor 3: ");
        scanf("%f", &v3);
                }


    void exercio7(){

        int v1,v2;
        printf("Digite 2 valores inteiros\n Valor 1: ");
        scanf("%d",&v1);
        printf("Valor 2: ");
        scanf("%d", &v2);
                }

    void exercio8(){           
     
        int a,b,c,id;
        printf("Digite suas 3 notas\n Nota 1: ");
        scanf("%d", &a);
        printf("Nota 2: ");
        scanf("%d", &b);
        printf("Nota 3: ");
        scanf("%d", &c);
        printf("Digite seu ID");
        scanf("%d", &id);
                    }


    void exercio9(){

        float altura;
        char genero;
        
        printf("Digite seu genero");
        scanf("%c", &genero);
    
        if(genero == 'M' || genero == 'm'){

            printf("seu genero é masculino");

        }else if(genero == 'F' || genero== 'f'){

            printf("Seu genero é feminino");

        }else{

            printf("seu genero é invalido");

            printf("Qual a sua altura?");
            scanf("%f", &altura);


            printf("Sua altura é %f e seu genero é %c", genero,altura);


                    }

        
                }
 
    void exercio10(){
 
                int horainicio, horafim;
            
                printf("Digite a hora de início do jogo (0 a 23): ");
                scanf("%d", &horainicio);
            
                printf("Digite a hora de fim do jogo (0 a 23): ");
                scanf("%d", &horafim);
                            }
  
                            
    void exercio11() {
                int n1, n2, n3, n4;
                            
                printf("Digite 4 numeros inteiros:\n");
                            
                    printf("Numero 1: ");
                    scanf("%d", &n1);
                            
                    printf("Numero 2: ");
                    scanf("%d", &n2);
                            
                     printf("Numero 3: ");
                    scanf("%d", &n3);
                            
                    printf("Numero 4: ");
                     scanf("%d", &n4);
                            
                    printf("Voce digitou: %d, %d, %d, %d\n", n1, n2, n3, n4);
                            }                    
        
                        


    void exercio12() {
            float valor;

            printf("Digite um valor real: ");
            scanf("%f", &valor);
            
            printf("Voce digitou: %f\n", valor);                  
                                    }



    void exercio13() {
        int numeros[10];
        int i;

        printf("Digite 10 numeros inteiros:\n");

        for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
                }

        printf("Voce digitou:\n");
        for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
                 }
    
      
            printf("\n");                             
                 }
   
   
   
   
    void exercio14() {
        char c;
        int contador = 0;
                
        while (contador < 4) {
            printf("Digite um caractere: ");
            scanf(" %c", &c);
            printf("Voce digitou: %c\n", c);
            contador++;
                    }
                }

 
 
 
    void exercio15() {
            int inteiro1, inteiro2;
        float real;
        char c1, c2, c3;
                
                do {
                printf("Digite o primeiro numero inteiro: ");
                scanf("%d", &inteiro1);
                
                printf("Digite o segundo numero inteiro: ");
                scanf("%d", &inteiro2);
                
                printf("Digite um numero real: ");
                scanf("%f", &real);
                
                printf("Digite 3 caracteres:\n");
                scanf(" %c", &c1);  
                scanf(" %c", &c2);
                scanf(" %c", &c3);
                
                    } while(0); 
                
                    printf("Voce digitou:\n");
                    printf("Inteiros: %d e %d\n", inteiro1, inteiro2);
                    printf("Numero real: %.2f\n", real);
                    printf("Caracteres: %c, %c, %c\n", c1, c2, c3);
                }
                         
                #include <stdio.h>

    void exercio16() {
         float num1, num2, num3, num4, num5;
                
         printf("Digite 5 numeros reais:\n");
                
         printf("Numero 1: ");
         scanf("%f", &num1);
                
        printf("Numero 2: ");
        scanf("%f", &num2);
                
        printf("numero 3: ");
        scanf("%f", &num3);
                
         printf("Numero 4: ");
         scanf("%f", &num4);
                
        printf("Numero 5: ");
        scanf("%f", &num5);
                
        printf("\nVoce digitou:\n");
        printf("%f, %f, %f, %f, %f\n", num1, num2, num3, num4, num5);
                }
              
              
              
              
              
    void exercio17() {
    
        int num1, num2;
         char c;
                
        printf("Digite o primeiro número inteiro: ");
        scanf("%d", &num1);
                
        printf("Digite o segundo número inteiro: ");
        scanf("%d", &num2);
                
        printf("Digite um caractere: ");
        scanf(" %c", &c);  
                
        printf("voce digitou:\n");
        printf("Inteiro 1: %d\n", num1);
        printf("Inteiro 2: %d\n", num2);
        printf("Caractere: %c\n", c);
                }



                

    void exercio18() {
            int numInteiro;
            float numReal;
                
            printf("Digite um número inteiro: ");
            scanf("%d", &numInteiro);
                
            printf("Digite um número real: ");
            scanf("%f", &numReal);
                
            printf("\nVocê digitou:\n");
            printf("Número inteiro: %d\n", numInteiro);
            printf("Número real: %.2f\n", numReal);
                }
               
               
               
    void exercio19() {
        int num;
                
         printf("Digite um numero inteiro: ");
         scanf("%d", &num);
                
                    if (num % 2 == 0) {
                        printf("O numero %d é PAR.\n", num);
                    } else {
                        printf("O numero %d é IMPAR.\n", num);
                    }
                }                      


            

    void exercio20() {
        float num1, num2, num3;
                
        printf("Digite o primeiro numero real: ");
        scanf("%f", &num1);
                
        printf("Digite o segundo numero real: ");
        scanf("%f", &num2);
                
        printf("Digite o terceiro numero real: ");
        scanf("%f", &num3);
                
        float media = (num1 + num2 + num3) / 3;
        printf("A media dos numeros e: %.2f\n", media);
                }


    void exercio21() {
        int num1, num2;
                
        printf("Digite o primeiro numero inteiro: ");
        scanf("%d", &num1);
                
        printf("Digite o segundo numero inteiro: ");
        scanf("%d", &num2);
                
         printf("A soma dos numeros é: %d\n", num1 + num2);
                }
         
        
                
    void menu(){           
        
                printf("MENU DE EXERCICIOS PARA VOCE ALEX\n ");
                printf("0- sair\n");
                for(int a = 1 ; a <= 21 ;a++){

                 printf("%d exercicios\n",a);   
                }
                printf("Escolha qualquer um: ");
                }

     void exercicios(int opcao){

        switch(opcao){

            case 0: 
            printf("encerrando");
            break;
            
            case 1:
            exercio1();
            break;
           
            case 2:
            exercio2();
            break;
         
            case 3:
           exercio3();
            break;
            
            case 4:
            exercio4();
            break;
            
            case 5:
            exercio5();
            break;
            
            case 6:
            exercio6();
            break;
           
            case 7:
            exercio7();
            break;
            
            case 8:
            exercio8();
            break;
           
            case 9:
            exercio9();
            break;
            
            case 10:
            exercio10();
            break;
            
            case 11:
            exercio11();
            break;
            
            case 12:
            exercio12();
            break;
          
            case 13:
            exercio13();
            break;
           
            case 14:
            exercio14();
            break;
           
            case 15:
            exercio15();
            break;
           
            case 16:
            exercio16();
            break;
           
            case 17:
            exercio17();
            break;
            
            case 18:
            exercio18();
            break;
           
            case 19:
            exercio19();
            break;
           
            case 20:
            exercio20();
            break;
           
            case 21:
            exercio21();
            break;
           
            default:
                printf("nao tem essa pai");

           
                    }
            }    
    int main(){
        int escolha;

        do{

            menu();  
            scanf("%d", &escolha);
            exercicios(escolha);
          }while (escolha !=0);
           
            return 0;
        
        



    }























































































































        


















         
                             