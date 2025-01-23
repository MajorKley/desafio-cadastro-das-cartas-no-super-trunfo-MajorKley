#include <stdio.h>

//%[^\n]

int main() {

char Estado1[20], Estado2[20];
char Cid1[20], Cid2[20];
float populacao, pib, area, densidade, pibpercapta; //Dados da primeira cidade
float populacao2, pib2, area2, densidade2, pibpercapta2; //Dados da segunda cidade
int rpopulacao, rpib, rarea, rdensidade, rpibpercapta, rturismo, rSuperPoder; //resultados das comparações
int turismo, turismo2; 
float SuperPoder, SuperPoder2;


printf("Vamos jogar Super Trunfo Paises! Vamos começar cadastrando as duas cartas que iremos comparar. \n");
printf("Digite o estado da primeira carta: \n");
scanf(" %[^\n]%*c", Estado1);

//Cadastro da Primeira Carta
    printf("\nAgora vamos cadastrar uma cidade! \n");
    printf("Digite a cidade do estado %s:\n", Estado1);
    scanf(" %[^\n]%*c", Cid1);// Consome até o \n e limpa o buffer

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
            printf("Populaçao: %.5f \n", populacao);
            printf("Área: %.5f \n", area);
            printf("PIB: %.5f \n", pib);
            printf("Número de Pontos Turísticos:  %d \n", turismo);
            printf("Pib Per Capta: %.5f \n", pibpercapta);
            printf("Densidade Populacional: %.3f \n", densidade);
            printf("Super Poder: %.10f\n", SuperPoder);
           
//Cadastro da Segunda Carta
printf("\nAgora vamos para o próximo cadastro!. \n");
printf("Digite o estado da segunda carta: \n");
scanf(" %[^\n]%*c", Estado2);// Consome até o \n e limpa o buffer

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
            printf("Populaçao: %.5f \n", populacao2);
            printf("Área: %.5f \n", area2);
            printf("PIB: %.5f \n", pib2);
            printf("Número de Pontos Turísticos:  %d \n", turismo2);
            printf("Pib Per Capta: %.5f \n", pibpercapta2);
            printf("Densidade Populacional: %.5f \n", densidade2);
            printf("Super Poder: %.10f\n", SuperPoder2);

//Comparações entre as habilidades das cartas

printf("\nAgora vamos comparar quem venceu essa batalha:");
printf("Se a resposta para as comparações: 1 - verdadeiro/ganhador, 0 - falso/perdedor\n");
   
    rpopulacao = populacao > populacao2;
    rarea = area > area2;
    rpib = pib > pib2;
    rturismo = turismo > turismo2;
    rpibpercapta = pibpercapta > pibpercapta2;
    rdensidade = densidade < densidade2;
    rSuperPoder = SuperPoder > SuperPoder2;


printf("População: %.4f VS %.4f = %d \n", populacao, populacao2, rpopulacao);
printf("Área: %.4f VS %.4f = %d \n", area, area2, rarea);
printf("Pib: %.4f VS %.4f = %d \n", pib, pib2, rpib);
printf("Pontos Turisticos: %d VS %d = %d \n", turismo, turismo2, rturismo);
printf("Pib per Capta: %.4f VS %.4f = %d \n", pibpercapta, pibpercapta2, rpibpercapta);
printf("Densidade Populacional: %.4f VS %.4f = %d \n", densidade, densidade2, rdensidade);
printf("Super Poder: %.4f VS %.4f = %d \n", SuperPoder, SuperPoder2, rSuperPoder);

//encerramento

printf("\nA carta vencedora é a que ganhou mais vezes nas Comparações! \n");
printf("Para cadastrar as outras cartas, reinicie o processo.");
    
    return 0;
}
