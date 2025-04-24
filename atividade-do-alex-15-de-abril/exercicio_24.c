//um algoritmo que verifica que o usuario é apto a participá do exercicito brasileiro

#include <stdio.h>

int main() {
    int idade;
    char sexo;
    char nacionalidade[20];
    char deficiencia[10];

    printf("idade: ");
    scanf("%d", &idade);

    printf("sexo (m/f): ");
    scanf(" %c", &sexo);

    printf("nacionalidade: ");
    scanf("%s", nacionalidade);

    printf("deficiencia (sim/nao): ");
    scanf("%s", deficiencia);

    // Verificacao simples
    if (sexo == 'm' && idade >= 18 &&
        nacionalidade[0] == 'b' && deficiencia[0] == 'n') {
        printf("apto\n");
    } else {
        printf("nao apto\n");
    }

    return 0;
}














