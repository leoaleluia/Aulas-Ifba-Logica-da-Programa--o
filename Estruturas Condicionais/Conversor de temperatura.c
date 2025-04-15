#include <stdio.h>

int main () {
	
	int resp = 0; float celsius = 0.0; float valorEmFH = 0.0; float Fahren = 0.0; float ValorEmCS = 0.0;
	printf("Deseja saber a temperatura de Celsius para FH (digite 1) ou de FH para Celsius (digite 2), nenhuma das opções (Digite 3)");
	scanf("%d", &resp);
	
	switch(resp) {
		case 1: 
    		    printf("Digite o valor em Celsius: ");
    		    scanf("%f", &celsius);
    		    valorEmFH = celsius * 1.8 + 32;
    		    printf("O valor de Celsius %.2f, para Fahrenheit é %.2f ºF", celsius, valorEmFH);
    		    break;
		case 2: 
    		    printf("Digite o valor em Fahrenheit: ");
    		    scanf("%f", &Fahren);
    		    ValorEmCS = 5.0 / 9 * (Fahren - 32);
    		    printf("O valor de fahrenheit %.2f para celsius é %.2f ºC", Fahren, ValorEmCS);
    		    break;
		case 3:	
    		    printf("Digite um valor válido ");		
    		    break;	
		default: 
		    printf("Opção inválida")
	}
}
