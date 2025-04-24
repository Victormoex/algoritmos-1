//esse algoritmo volta 5 numeros inteiros em ordem crescente

#include <stdio.h>

int main() {
    int num[5];  
    int temp;

    printf("digite 5 numeros inteiros:\n");
        for (int i = 0; i < 5; i++) {
        
            printf("numero %d: ", i + 1);
        
                if (scanf("%d", &num[i]) != 1) {
        
            printf("entrada errada.\n");
        
            return 1;
        
        }
    }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4 - i; j++) {
                if (num[j] > num[j + 1]) {
                    temp = num[j];
                        num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("numeros :\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", num[i]);
    }


    return 0;
}
