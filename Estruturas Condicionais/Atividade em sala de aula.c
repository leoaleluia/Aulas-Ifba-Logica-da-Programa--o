Atividade feita em sala de aula: 
#include <stdio.h>

int main()
{
    int L1 = 0; int L2 = 0; int L3 = 0;
   
    printf("Digite o primeiro lado do triangulo");
    scanf("%d", &L1);
    printf("Digite o segundo lado do triângulo");
    scanf("%d", &L2);
    printf("Digite o terceiro lado do triângulo");
    scanf("%d", &L3);
   

    if ((L1 + L2 > L3) && (L2 + L3 > L1) && (L1 + L3 > L2)) {
        if ((L1 == L2) && (L2 == L3)){
            printf("triângulo equilátero");
        }
        else if ((L1 == L2) || (L2 == L3) || (L1 == L3)){
            printf("tRIANGULO isosceles");
        }
        else{
            printf("tRIANGULO escaleno");
        }
    }else {
        printf("Não forma um triângulo válido");
    }

}
