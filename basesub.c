#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    double valor1, valor2;
    
    // Solicita ao usu�rio o primeiro valor
    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);
    
    // Solicita ao usu�rio o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);
    
    // Opera��o de subtra��o
    double subtracao = valor1 - valor2;
    
    // Exibe o resultado da subtra��o na tela
    printf("Resultado da subtracao: %.2lf\n", subtracao);
    
    return 0;
}

