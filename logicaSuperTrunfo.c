#include <stdio.h>

int main() {
    char Carta1[10] = "Carta01";
    char Estado1[10] = "D";
    char CodigodaCarta1[10] = "D01";
    char NomedaCidade1[20] = "Fortaleza(CE)";
    int Populacao1 = 2574412;
    float Area1 = 314.11;
    float PIB1 = 73;
    int NumerodePontosTuristicos1 = 16;

    char Carta2[10] = "Carta02";
    char Estado2[10] = "E";
    char CodigodaCarta2[10] = "E01";
    char NomedaCidade2[20] = "Pernambuco(PE)";
    int Populacao2 = 9540000;
    float Area2 = 98.94;
    float PIB2 = 954;
    int NumerodePontosTuristicos2 = 6;

    printf("%s \n", Carta1);
    printf("Estado: %s \n", Estado1);
    printf("Codigo da Carta: %s \n", CodigodaCarta1);
    printf("Nome da Cidade: %s \n", NomedaCidade1);
    printf("Populacao: %d \n", Populacao1);
    printf("Area: %.2fkm² \n", Area1);
    printf("PIB: %.2f Bilhoes \n", PIB1);
    printf("Numero de Pontos Turisticos: %d \n", NumerodePontosTuristicos1);

    printf("%s \n", Carta2);
    printf("Estado: %s \n", Estado2);
    printf("Codigo da Carta: %s \n", CodigodaCarta2);
    printf("Nome da Cidade: %s \n", NomedaCidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %.2fkm² \n", Area2);
    printf("PIB: %.2f Bilhoes \n", PIB2);
    ("Numero de Pontos Turisticos: %d \n", NumerodePontosTuristicos2);
 

    
    float Densidade1 = Populacao1 / Area1;
    float PIBperCapita1 = PIB1 / Populacao1;
    float Densidade2 = Populacao2 / Area2;
    float PIBperCapita2 = PIB2 / Populacao1;
    
    printf("\nResultados:\n"); printf("Carta 1 - Densidade Populacional: %.2f hab/km², PIB per capita: %.2f\n", Densidade1, PIBperCapita1);
    printf("Carta 2 - Densidade Populacional: %.2f hab/km², PIB per capita: %.2f\n", Densidade2, PIBperCapita2);

    
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", NomedaCidade1, Estado1, Populacao1);
    printf("Carta 2 - %s (%s): %d\n", NomedaCidade2, Estado2, Populacao2);

    if (Populacao1 > Populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else if (Populacao1 < Populacao2) {
    printf("Resultado: Carta 2 (%s) venceu!\n", NomedaCidade2);
    } else {
    printf("Resultado: Ambas as cartas têm a mesma população.\n");
    }

    return 0;
}
