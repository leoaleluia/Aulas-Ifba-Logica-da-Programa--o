#include <stdio.h>


int main(){
	
	int anoAtual = 0; int anoNascimento = 0; int idade = 0; int prazoDeAtraso = 0; int prazoAlistamento = 0;
	
	printf("Digite o ano Atual: ");
	scanf("%d", &anoAtual);
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	idade = anoAtual - anoNascimento;
	
	if (idade == 18) {
		printf("Ja chegou sua hora de se alistar! ");
	}
	else if (idade > 18) {
		prazoDeAtraso = idade - 18;
		printf("Você ultrapassou o prazo. Tempo de atraso: %d anos", prazoDeAtraso);
	}
	else {
		prazoAlistamento = 18 - idade;
		printf("Ainda resta(m) %d ano(s) para o seu alistamento", prazoAlistamento );
	}
}