#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, soma;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	
	printf("A soma de %.2f e %.2f � %.2f \n", num1, num2, soma);
	
	return 0;
	
}
