#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	
	printf("Informe a base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf("Informe a altura do tri�ngulo: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("A �rea do tri�ngulo � %.2f \n", area);
	
	return 0;
}
