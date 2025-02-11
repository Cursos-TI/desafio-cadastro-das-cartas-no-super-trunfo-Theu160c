#include <stdio.h>

int main(){
    int Populacao;
    float Area;
    float PIB;
    int TURISMO;

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a area por km: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

     printf("Digite os pontos turistico: \n");
    scanf("%d", &TURISMO);

    printf("Populacao: %d \n  Area por km : %f \n");
    printf("PIB: %f \n TURISMO: %d \n");
    

    return 0;


}