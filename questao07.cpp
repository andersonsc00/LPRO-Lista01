#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float preco, total;
	int quantidade;
	
	printf("Informe o preço do produto: ");
	scanf("%f", &preco);
	
	printf("Informe a quantidade comprada: ");
	scanf("%d", &quantidade);
	
	total = preco * quantidade;
	
	printf("Valor total a pagar: %.2f",total);
	
	return 0;
}
