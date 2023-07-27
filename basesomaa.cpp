#include <stdio.h> //biblioteca padrão para comandos de entrada e saída de dados
int main (void)
{
    int valor1, valor2;
    int resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;

    printf("Teste de operadores aritmetcos \n\n");

    printf("Coloque o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Coloque outro valor: ");
    scanf("%d", &valor2);

    resp_soma = valor1 + valor2;

    printf ("\nSoma = %d", resp_soma);


    return (0);
}
