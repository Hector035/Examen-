#include <stdio.h>

int main ()
{
    /* Héctor Silva Reyes*/

    float peso, altura, IMC;
    printf("\n\n Daniel Almaraz Morales");
    printf("\n\n Programa 7");
    printf("\n\n Calcular el índice de masa corporal");
    printf("\n\n Dame el peso en kilogramos");
    scanf("%f", &peso);
    printf("\n\n Dame la altura en centímetros");
    scanf("%f", &altura);
    IMC = peso / (altura * altura);
    printf("\n\n La masa muscular es %f", IMC);
    return 0;
}