//um algoritmo que mostra a sequencia de fibonacci sem a memorizaçao por que o juan lascou tudo

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, temp;

    
    printf("digite quantos termos da sequencia do fibonacci : ");
    scanf("%d", &n);

    
    printf("sequencia de fibonacci: ");
   
    for (int i = 0; i < n; i++) {
   
        printf("%d ", a);
   
        temp = a;
   
        a = b;
   
        b = temp + b;  

            }
    return 0;
    }
