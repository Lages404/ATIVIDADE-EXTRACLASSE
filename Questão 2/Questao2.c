#include <stdio.h>

int ano_bissexto(int ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano_bissexto(ano)){
        printf("O ano %d eh bissexto.\n", ano);
 }
        else{
        printf("O ano %d nao eh bissexto.\n", ano);
}
    return 0;
}
