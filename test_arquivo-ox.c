#include <stdio.h>
#include <assert.h>

int validar_caractere(char c) {
    if (c == 'X' || c == 'O') {
        return 1;
    }
    return 0;
}

int main() {
    printf("Executando testes...\n");

    // Testes básicos
    assert(validar_caractere('X') == 1);
    assert(validar_caractere('O') == 1);
    assert(validar_caractere('x') == 0);

    printf("Todos os testes passaram com sucesso!\n");
    return 0;
}
