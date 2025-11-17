#include <stdio.h>
#include <string.h>

int somar_digitos(int n) {
    char texto[20];
    int soma = 0;
    int i;

    sprintf(texto, "%d", n);

    for (i = 0; i < strlen(texto); i++) {
        if (texto[i] >= '0' && texto[i] <= '9') {
            soma += texto[i] - '0';
        }
    }

    return soma;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Soma dos digitos: %d\n", somar_digitos(numero));

    return 0;
}