#include <stdio.h>
int main()

int main()
{
    int num,num1,subtracao,multi,div,soma, mod;

    printf("Calculadora basica\n");
    printf("Entre com 2 numeros a serem processados: ");
    scanf("%i%i", &num, &num1);

    soma = num + num1;
    subtracao  = num - num1;
    multi   = num * num1;
    div  = num / num1;
    mod = num % num1;

    printf("soma e: %i\n", soma);
    printf("subtracao e: %i\n", subtracao);
    printf("multiplicacao e: %i \n", multi);
    printf("divisao e: %i \n", div);
    printf("resto da divisao e: %i \n", mod);
    return 0;
}
