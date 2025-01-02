#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2, resultado;
	
	num1 = 5.0;
	num2 = 2.0;
	
	resultado = num1 / num2;
	
	printf("O resultado da divisão é %.2f \n", resultado);
	
	return 0;
}
