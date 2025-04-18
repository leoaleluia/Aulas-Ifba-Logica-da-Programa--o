//faça um programa que aprove um emprestimo bancário. O valor das parcelas mensais não pode exceder 30% do salario do usuário
#include <stdio.h>

int main(){
	float valorCasa = 0; float parcelas = 0; int anos = 0; int meses = 0; float parcelasRsv = 0; int mesesRsv = 0; float salario = 0; 
	printf("Digite o valor da casa: ");
	scanf("%f", &valorCasa);
	printf("Em quantos anos você deseja pagar: ");
	scanf("%d", &anos);
	meses = anos * 12;
	mesesRsv = meses;
	parcelas = valorCasa / meses;
	parcelasRsv = parcelas;
	printf("Qual o seu salário? ");
	scanf("%f", &salario);
	if (parcelas <= salario * 0.3){
		printf("Parabéns pelo emprestimo, suas parcelas são de %f durante %d", parcelas, meses);
	} 
	else {
		while (parcelas >= salario * 0.3) {
			parcelas = valorCasa / meses++;
		}
		anos = meses / 12;
		printf("Não podemos te oferecer o emprestimo com as condições solicitadas de %d meses com parcelas de %.2f\n", mesesRsv, parcelasRsv);
		printf("Mas podemos te oferecer esse emprestimo com parcelas de %.2f durante %d meses (%d anos) ", parcelas, meses, anos);
	}
}