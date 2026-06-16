#include <stdio.h>

// Função que valida se o caractere é 'X' ou 'O'
int validar_caractere(char c) {
    if (c == 'X' || c == 'O') {
        return 1; // Válido
    }
    return 0; // Inválido
}
