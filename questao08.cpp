#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float horasTrabalhadas, valorHora, salario;
	
	printf("Informe as horas trabalhadas: ");
	scanf("%f", &horasTrabalhadas);
	
	printf("Informe o valor por hora: ");
	scanf("%f", &valorHora);
	
	salario = horasTrabalhadas * valorHora;
	
	printf("O salário total do funcionário é R$ %.2f", salario);
	
	return 0;
}
