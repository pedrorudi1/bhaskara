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
    printf("\nDigite o primeiro d�gito da Equa��o: ");
    scanf("%f",&A);
    printf("\nDigite o segundo d�gito da Equa��o: ");
    scanf("%f",&B);
    printf("\nDigite o terceiro d�gito da Equa��o: ");
    scanf("%f",&C);

    //formula delta
    delta=B*B-4*A*C;
    if (delta<0)
    {
    printf("A equa��o n�o possui ra�zes reais");
    }
    else
    {
    //formulas valor de X
    x1=(-B+sqrt(delta))/(2*A);
    x2=(-B-sqrt(delta))/(2*A);
    }

    printf("\n\nOs valores de X s�o: X'=%.2f e X''=%.2f.",x1,x2);
    printf("\n");
    system("pause");
    return 0;
}
