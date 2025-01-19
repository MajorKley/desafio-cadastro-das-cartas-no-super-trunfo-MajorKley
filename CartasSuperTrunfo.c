#include <stdio.h>

//%[^\n]

int main() {

char Estado[20];
char Cid [20];
float populacao, pib, area;
int turismo; //pontos turísticos

printf("Vamos jogar Super Trunfo Paises! Vamos começar cadastrando suas cartas. \n");
printf("Digite um estado: \n");
scanf("%[^\n]", Estado);

    printf("Agora vamos cadastrar as 04 cidades \n");
    printf("Digite a 01 cidade do estado %s:\n", Estado);
    scanf(" %[^\n]%*c", &Cid);
        printf("Digite a Populaçao: \n");
        scanf("%f", &populacao);
        printf("Digite a Área:\n");
        scanf("%f", &area);
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        printf("Digite o Número de pontos turísticos da cidade: \n");
        scanf("%d", &turismo);

            printf("A cidade %s do estado %s possue os seguintes dados: \n", Cid, Estado);
            printf("Populaçao: %f \n", populacao);
            printf("Área: %f \n", area);
            printf("PIB: %f \n", pib);
            printf("Número de Pontos Turísticos:  %d \n", turismo);
            printf("O número da carta será A01 \n");
          
            
    printf("Digite a 02 cidade do estado %s:\n", Estado);
    scanf(" %[^\n]%*c", &Cid);
        printf("Digite a Populaçao: \n");
        scanf("%f", &populacao);
        printf("Digite a Área:\n");
        scanf("%f", &area);
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        printf("Digite o Número de pontos turísticos da cidade: \n");
        scanf("%d", &turismo);

            printf("A cidade %s do estado %s possue os seguintes dados: \n", Cid, Estado);
            printf("Populaçao: %f \n", populacao);
            printf("Área: %f \n", area);
            printf("PIB: %f \n", pib);
            printf("Número de Pontos Turísticos:  %d \n", turismo);
            printf("O número da carta será A02 \n");

    printf("Digite a 03 cidade do estado %s:\n", Estado);
    scanf(" %[^\n]%*c", &Cid);

        printf("Digite a Populaçao: \n");
        scanf("%f", &populacao);
        printf("Digite a Área:\n");
        scanf("%f", &area);
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        printf("Digite o Número de pontos turísticos da cidade: \n");
        scanf("%d", &turismo);

            printf("A cidade %s do estado %s possue os seguintes dados: \n", Cid, Estado);
            printf("Populaçao: %f \n", populacao);
            printf("Área: %f \n", area);
            printf("PIB: %f \n", pib);
            printf("Número de Pontos Turísticos:  %d \n", turismo);
            printf("O número da carta será A03 \n");

    printf("Digite a 04 cidade do estado %s:\n", Estado);
    scanf(" %[^\n]%*c", &Cid);

        printf("Digite a Populaçao: \n");
        scanf("%f", &populacao);
        printf("Digite a Área:\n");
        scanf("%f", &area);
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        printf("Digite o Número de pontos turísticos da cidade: \n");
        scanf("%d", &turismo);

            printf("A cidade %s do estado %s possue os seguintes dados: \n", Cid, Estado);
            printf("Populaçao: %f \n", populacao);
            printf("Área: %f \n", area);
            printf("PIB: %f \n", pib);
            printf("Número de Pontos Turísticos:  %d \n", turismo);
            printf("O número da carta será A04 \n");

        
    printf("Para cadastrar as outras cartas, reinicie o processo.");
    
    return 0;
}
