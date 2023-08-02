#include <stdio.h>

int main() {
    // Declaração das variáveis
    double valor1, valor2;
    
    // Solicita ao usuário o primeiro valor
    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);
    
    // Solicita ao usuário o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);
    
    // Operação de subtração
    double subtracao = valor1 - valor2;
    
    // Exibe o resultado da subtração na tela
    printf("Resultado da subtracao: %.2lf\n", subtracao);
    
    return 0;
}

