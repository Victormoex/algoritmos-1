#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;


        printf("Qual o valor de A: ");
        scanf("%f", &a);

        printf("Qual o valor de B: ");
        scanf("%f", &b);

        printf("Qual valor de C: ");
        scanf("%f", &c);


delta = b * b - 4 * a * c;


    if(a==0){

        printf("nao e uma equacao");
        return 1;
    }if (delta < 0) {
        printf("a equacao nao tem numero real\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        
        printf("As raizes da equacao:\n");
        
        printf("x1 = %.2f\n", x1);
        
        printf("x2 = %.2f\n", x2);
        }
return 0;
}