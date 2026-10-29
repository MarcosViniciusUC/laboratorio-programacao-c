
#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char copia[50];
    char categoria[30];
    char descricao[100];
    int caracteres;

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf("%49s", produto);

    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%29s", categoria);

    caracteres = strlen(produto);

    strcpy(copia, produto);

    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(categoria, "Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(categoria, "Periferico");
    } else {
        strcpy(categoria, "Categoria invalida");
    }

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);
    printf("Caracteres: %d\n", caracteres);
    printf("Categoria: %s\n", categoria);
    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
