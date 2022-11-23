#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2)
{
    int result
    result = n1 + n2;
    printf ("%d", result);
    return result;
}

int subtracao(int n1, int n2)
{
    int result
    result = n1 - n2;
    printf ("%d", result);
    return result;
}
int divisao(int n1, int n2)
{
    int result
    result = n1 / n2;
    printf ("%d", result);
    return result;
}
int multiplicacao(int n1, int n2)
{
    int result
    result = n1 * n2;
    printf ("%d", result);
    return result;
}


int main()
{
    int n1, n2, soma, subtracao,divisao, multiplicacao;

    scanf("%d",&n1);
    scanf("%d",&n2);

    soma = int soma(n1, n2);
    subtracao = subtracao(n1, n2);
    divisao = divisao(n1, n2);
    multiplicacao = multiplicacao(n1, n2);

    printf("Ola!")
    printf("opa opa opa")

    printf("A Soma de n1 e n2 é: %d", soma);
    printf("A Subtração de n1 e n2 é: %d", subtracao);
    printf("A Divisão de n1 e n2 é: %d", divisao);
    printf("A Multiplicação n1 e n2 é: %d", multiplicacao);
return 0;
}