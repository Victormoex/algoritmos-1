//um algoritmo para transformar um numero real para inteiro
#include <stdio.h>

int main() {
    float num1;
    int num2;

    printf("Digite um valor: ");
    scanf("%f", &num1);

    num2 = (int)num1;

    printf("Parte inteira: %d\n", num2);

    return 0;
}
