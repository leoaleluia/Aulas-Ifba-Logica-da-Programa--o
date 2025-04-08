//faça um algoritmo que mostre o valor cobrado de imposto sobre o salario mensal
#include <stdio.h>


int main() {
	
	float salario = 0; float imposto = 0; float calcSal = 0;
	
	printf("Digite seu salario mensal");
	scanf("%f", &salario);
	
	if (salario <= 2259.20) {
		printf("Vôce está isento de imposto\n");
	}
	else if ((salario >= 2259.21 ) && (salario <= 2826.65)){
		calcSal = salario - 2259.21;
		imposto = calcSal * (7.5 / 100);
	}
	else if ((salario >= 2826.66) && (salario <= 3751.05)) {
		calcSal = salario - 2826.66;
		imposto = calcSal * 0.15;
	}
	else if ((salario >= 3751.06) && (salario <= 4664.68)) {
		calcSal = salario - 3751.06;
		imposto = calcSal * (22.5 / 100);
	}
	else {
		calcSal = salario - 4664.69;
		imposto = calcSal * (27.5 / 100);
	}