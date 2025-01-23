#include <stdio.h>

//%[^\n]

int main() {

char Estado1[20], Estado2[20];
char Cid1[20], Cid2[20];
float populacao, pib, area, densidade, pibpercapta; //cid1
float populacao2, pib2, area2, densidade2, pibpercapta2; //cid2
int turismo, turismo2; 
float SuperPoder, SuperPoder2;


printf("Vamos jogar Super Trunfo Paises! Vamos começar cadastrando as duas cartas que iremos comparar. \n");
printf("Digite o estado da primeira carta: \n");
scanf("%[^\n]", Estado1);

    printf("Agora vamos cadastrar uma cidade! \n");
    printf("Digite a cidade do estado %s:\n", Estado1);
    scanf(" %[^\n]%*c", Cid1);
        printf("Digite a Populaçao: \n");
        scanf("%f", &populacao);
        printf("Digite a Área:\n");
        scanf("%f", &area);
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        printf("Digite o Número de pontos turísticos da cidade: \n");
        scanf("%d", &turismo);

        pibpercapta = pib/populacao;
        densidade = populacao/ area;
        SuperPoder = populacao + pib + area + densidade + pibpercapta + (float)turismo;

            printf("A cidade %s do estado %s possue os seguintes dados: \n", Cid1, Estado1);
            printf("Populaçao: %f \n", populacao);
            printf("Área: %f \n", area);
            printf("PIB: %f \n", pib);
            printf("Número de Pontos Turísticos:  %d \n", turismo);
            printf("Pib Per Capta: %.3f \n", pibpercapta);
            printf("Densidade Populacional: %.3f \n", densidade);
            printf("Super Poder: %.15f\n", SuperPoder);
           

printf("Agora vamos para o próximo cadastro!. \n");
printf("Digite o estado da segunda carta: \n");
scanf("%[^\n]", Estado2);

    printf("Agora vamos cadastrar uma cidade! \n");
    printf("Digite a cidade do estado %s:\n", Estado2);
    scanf(" %[^\n]%*c", Cid2);
        printf("Digite a Populaçao: \n");
        scanf("%f", &populacao2);
        printf("Digite a Área:\n");
        scanf("%f", &area2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        printf("Digite o Número de pontos turísticos da cidade: \n");
        scanf("%d", &turismo2);

        pibpercapta2 = pib2/populacao2;
        densidade2 = populacao2/ area2;
        SuperPoder2 = populacao2 + pib2 + area2 + densidade2 + pibpercapta2 + (float)turismo2;


            printf("A cidade %s do estado %s possue os seguintes dados: \n", Cid2, Estado2);
            printf("Populaçao: %f \n", populacao2);
            printf("Área: %f \n", area2);
            printf("PIB: %f \n", pib2);
            printf("Número de Pontos Turísticos:  %d \n", turismo2);
            printf("Pib Per Capta: %.3f \n", pibpercapta2);
            printf("Densidade Populacional: %.3f \n", densidade2);
             printf("Super Poder: %.15f\n", SuperPoder2);

printf("Agora vamos comparar quem venceu essa batalha:");
Printf()
        



          
   
        
    printf("Para cadastrar as outras cartas, reinicie o processo.");
    
    return 0;
}
