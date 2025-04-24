#include <stdio.h>
#define Tam 25

int main(){
	float preco = 0; float desconto = 0;  float precoFinal = 0; float acrescimo = 0;
	int opcao = 0;
	char nome[Tam];
	
	printf("Bem vindo ao super lojão\n");
	printf("Digite o nome do produto: ");
	scanf("%s", &nome);
	
	printf("Qual o valor do produto? ");
	scanf("%f", &preco);
	
	printf("Como deseja pagar?\n"
	"á vista, dinheiro ou pix = 10%% de desconto (Pressione 1)\n"
	"Á vista no cartão = 5%% de desconto (Pressiona 2)\n"
	"Em ate 2x = preço normal (Pressione 3)\n"
	"3x ou mais = 20%% de juros (Pressione 4)");
	scanf("%d", &opcao);
	
	if (opcao == 1) {
		desconto = preco * 0.10;
		precoFinal = preco - desconto;
		printf("O preço do produto %s é %.2f, seu desconto é de %.2f, o valor final é de %.2f", nome, preco, desconto, precoFinal);
	}
	else if (opcao == 2) {
		desconto = preco * 0.05;
		precoFinal = preco - desconto;
		printf("O preco do produto %s é %.2f, seu desconto é de %.2f, o valor final é de %.2f", nome, preco, desconto, precoFinal);
	}
	else if (opcao == 3) {
		precoFinal = preco / 2;
		printf("o produto %s foi divido em 2x, o valor de cada parcela é de %.2f", nome, precoFinal);
	}
	else if (opcao == 4) {
		acrescimo = preco * 0.20;
		precoFinal = preco + acrescimo;
		printf("O produto %s foi divido em 3x ou mais, portando ele sofreu um acrescimo de %.2f, e seu valor fianl é %.2f", nome, acrescimo, precoFinal);
	}
}