//Escreva um código que leia dois números e mostre qual deles é o maior.

#include <stdio.h>


int main(){
	
	int num1 = 0; int num2 = 2;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("O primeiro número é maior. Número 1 (%d) > Numero 2 (%d)", num1, num2);
	}
	else if (num2 > num1) {
		printf("O segundo número é maior. Número 2 (%d) > Numero 1 (%d)", num2, num1);
	}
	else {
		printf("Os números %d e %d são iguais", num1, num2);
	}
}