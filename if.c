#include <stdio.h>
int main(void)
{
	int a, b, soma;
	
	printf("Digite um numero inteiro: ");
	scanf("%s", &a);
	
	printf("Digite um numero inteiro: ");
	scanf("%s", &b);
	
	soma = a + b;
	printf("Valor da soma = %d \n", soma);
	
	if(soma > 10)
	{
		printf("Valor da soma e maior que 10 \n");
	}
	
	return(0);
}
