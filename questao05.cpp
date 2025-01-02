#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float metros, centimetros;
	
	printf("Informe um valor em metros: ");
	scanf("%f", &metros);
	
	centimetros = metros * 100;
	
	printf("O valor em centímetros é %.2f \n", centimetros);

	return 0;
}
