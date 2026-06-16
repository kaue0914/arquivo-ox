#include <stdio.h>
#include <stdlib.h>

// Função que valida se o caractere é 'X' ou 'O'
int validar_caractere(char c) {
    if (c == 'X' || c == 'O') {
        return 1; // Válido
    }
    return 0; // Inválido
}

int main(int argc, char *argv[]) {
    // Verifica se recebeu o nome do arquivo + 9 caracteres
    if (argc != 11) {
        printf("Erro: Use o formato .\\arquivo-ox tabuleiro.txt O O O X X X O O O\n");
        return 1;
    }

    char *nome_arquivo = argv[1];
    char matriz[3][3];
    int k = 2; // Os caracteres começam no argv[2]

    // Preenche a matriz e valida cada caractere
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char c = argv[k][0]; 

            if (!validar_caractere(c)) {
                printf("Erro: Caractere invalido '%c'. Use apenas X ou O maiusculos.\n", c);
                return 1;
            }

            matriz[i][j] = c;
            k++;
        }
    }

    // Abre o arquivo para gravação
    FILE *arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Grava as 3 linhas do tabuleiro seguindo o padrão | X | O | X |
    for (int i = 0; i < 3; i++) {
        fprintf(arquivo, "| %c | %c | %c |\n", matriz[i][0], matriz[i][1], matriz[i][2]);
    }

    // Penúltima linha em branco
    fprintf(arquivo, "\n");

    // Última linha com o nome
    fprintf(arquivo, "Criado por Aluno\n");

    fclose(arquivo);
    printf("Arquivo '%s' gerado com sucesso!\n", nome_arquivo);

    return 0;
    printf( feito por kaue alexandre)
}
