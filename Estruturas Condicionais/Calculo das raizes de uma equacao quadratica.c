//faça um programa que calcule as raizes de uma equação quadrática

#include <stdio.h>
#include <math.h>

int main(){
	int valorA = 0; int valorB = 0; int valorC = 0; 
	double valorDeDelta = 0; double raiz = 0; double raiz1 = 0; double raiz2 = 0; 
	printf("Digite o valor de A: ");
	scanf("%d", &valorA);
	printf("Digite o valor de B: ");
	scanf("%d", &valorB);
	printf("Digite o valor de C: ");
	scanf("%d", &valorC);
	
	valorDeDelta = (valorB * valorB) - (4 * valorA * valorC);
	raiz = sqrt(valorDeDelta);
	
	if (valorDeDelta > 0 ){
		raiz1 = (-valorB + raiz) / (2.0 * valorA);
		printf("O valor da primeira raiz é %.2f", raiz1);
		raiz2 = (-valorB - raiz) / (2.0 * valorA);
		printf("O valor da segunda Raiz é %.2f", raiz2);
	}
	else if (valorDeDelta == 0){
		raiz1 = -valorB / (2.0 * valorA);
		printf("A raiz é única %.2f", raiz1);
	}
	else {
		printf("Não existem raizes de números negativos %.2f", raiz);
	}
}