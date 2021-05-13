
#include <stdio.h>

int main ()
{
   
    float numerodepersonas, numerodealimentos, porciones;
    printf("\n Héctor Silva Reyes");
    printf("\n\n Programa 5");
    printf("\n\n Dame el numero de personas");
    scanf("%f", &numerodepersonas);
    printf("\n\n Dame el numero de alimetos disponible");
    scanf("%f", &numerodealimentos);
    porciones= numerodepersonas/numerodealimentos;
    printf("\n LA PORCION PARA DIVIDIR EQUITATIVAMENTE A CADA PERSONA ES  %f", porciones);
    
    return 0;
}
© 2021 GitHub, In