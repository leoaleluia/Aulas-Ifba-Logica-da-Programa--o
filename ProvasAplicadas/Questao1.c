/* Sabendo que a area do quadrado e calculada elevando ao quadrado a medida de um dos seus
 lados, ou seja, Aquadrado = a²; e que a area do círculo e calculada multiplicando PI
 (aproximadamente 3.14) pelo quadrado do raio (Acirculo = π r²); sua tarefa e, considerando as
 relaçoes apresentadas e a figura abaixo, escrever um programa em C, que leia o valor de r,
 calcule e imprima o valor da área sombreada: 
 Por exemplo, se o valor de r for 1, a area do círculo e igual a 3.14 (3.14 * 12), a area do quadrado 
e igual a 4 (22) e a area sombreada e igual a 0.86 (4 – 3.14)*/


#include <stdio.h>


int main () {
	float areaRaio, raio, areaQuadrado, quadrado, areaSombreada;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	areaRaio = 3.14 * raio * raio;
	
	printf("Digite o lado do quadrado: ");
	scanf("%f", &quadrado);
	areaQuadrado = quadrado * quadrado;
	
	areaSombreada = areaQuadrado - areaRaio;
	printf("A area sombreada é: %.2f", areaSombreada);
}