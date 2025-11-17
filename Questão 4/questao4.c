#include <stdio.h>

float somar(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

int main()
{
    float a, b, resultado;
    int op;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &op);

    if (op == 1) {
        resultado = somar(a, b);
        printf("Resultado: %.2f\n", resultado);
    }
    else if (op == 2) {
        resultado = subtrair(a, b);
        printf("Resultado: %.2f\n", resultado);
    }
    else if (op == 3){
        resultado = multiplicar(a, b);
        printf("Resultado: %.2f\n", resultado);
    }
    else if (op == 4){
        if (b == 0){
            printf("Erro: divisao por zero!\n");
            return 0;
        }
        resultado = dividir(a, b);
        printf("Resultado: %.2f\n", resultado);
    }
    else{
        printf("Operacao invalida!\n");
    }

    return 0;
}
