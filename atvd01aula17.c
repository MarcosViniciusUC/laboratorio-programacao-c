
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char copia[50];
    char mensagem[100];
    int quantidade;

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    quantidade = strlen(nome);

    strcpy(copia, nome);

    if (strcmp(perfil, "ADMIN") == 0) {
        strcpy(perfil, "Administrador");
    } else {
        strcpy(perfil, "Usuario comum");
    }

    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", copia);
    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("Perfil: %s\n", perfil);

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
