#include <stdio.h>

float calcularMedia(int v[], int tam) {
    int soma = 0;
    int i;
    for (i = 0; i < tam; i++) {
        soma += v[i];
    }
    return (float)soma / tam;
}

void maiorMenor(int v[], int tam, int *maior, int *menor) {
    int i;
    *maior = v[0];
    *menor = v[0];
    for (i = 1; i < tam; i++) {
        if (v[i] > *maior) *maior = v[i];
        if (v[i] < *menor) *menor = v[i];
    }
}

int contarPares(int v[], int tam) {
    int cont = 0;
    int i;
    for (i = 0; i < tam; i++) {
        if (v[i] % 2 == 0) cont++;
    }
    return cont;
}

int main() {
    int vet[10];
    int maior, menor;
    int i;

    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }

    float media = calcularMedia(vet, 10);
    maiorMenor(vet, 10, &maior, &menor);
    int pares = contarPares(vet, 10);

    printf("Media: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Quantidade de pares: %d\n", pares);

    return 0;
}