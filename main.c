#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float A, B, C, delta, x1, x2;
    printf("PROGRAMA PARA CALCULAR BHASKARA");
    printf("\n_________________________________");
    printf("\nDigite o primeiro dígito da Equação: ");
    scanf("%f",&A);
    printf("\nDigite o segundo dígito da Equação: ");
    scanf("%f",&B);
    printf("\nDigite o terceiro dígito da Equação: ");
    scanf("%f",&C);

    //formula delta
    delta=B*B-4*A*C;
    if (delta<0)
    {
    printf("A equação não possui raízes reais");
    }
    else
    {
    //formulas valor de X
    x1=(-B+sqrt(delta))/(2*A);
    x2=(-B-sqrt(delta))/(2*A);
    }

    printf("\n\nOs valores de X são: X'=%.2f e X''=%.2f.",x1,x2);
    printf("\n");
    system("pause");
    return 0;
}
