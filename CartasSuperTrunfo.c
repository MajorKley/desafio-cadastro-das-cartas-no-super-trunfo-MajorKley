#include <stdio.h>

//%[^\n]

int main() {

int escolha;
char Estado1[20], Estado2[20];
char Cid1[20], Cid2[20];
float populacao, pib, area, densidade, pibpercapta; //Dados da primeira cidade
float populacao2, pib2, area2, densidade2, pibpercapta2; //Dados da segunda cidade
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
            printf("Populaçao: %.3f \n", populacao);
            printf("Área: %.3f \n", area);
            printf("PIB: %.3f \n", pib);
            printf("Número de Pontos Turísticos:  %d \n", turismo);
            printf("Pib Per Capta: %.3f \n", pibpercapta);
            printf("Densidade Populacional: %.3f \n", densidade);
            printf("Super Poder: %.5f\n", SuperPoder);
           
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
            printf("Populaçao: %.3f \n", populacao2);
            printf("Área: %.3f \n", area2);
            printf("PIB: %.3f \n", pib2);
            printf("Número de Pontos Turísticos:  %d \n", turismo2);
            printf("Pib Per Capta: %.3f \n", pibpercapta2);
            printf("Densidade Populacional: %.3f \n", densidade2);
            printf("Super Poder: %.5f\n", SuperPoder2);

//MENU DE OPÇÃO

printf("\nAgora vamos comparar quem venceu essa batalha:");
printf("Escolha um dos atributos para comparar: \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Turismo \n");
printf("5. Densidade Populacional \n");
printf("6. Super Poder das Cartas \n");

//escolha da opção
printf("Escolha: ");
scanf("%d", &escolha);

//Comparação entre cartas
switch (escolha)
{
case 1:
    if(populacao > populacao2){
        printf("Primeiro Atributo é o vencedor! \n");
        }else{
        printf("O Segundo Atributo é o vencedor! \n");
        }
break;

case 2:
    if(area > area2){
        printf(" Primeiro Atributo é o vencedor! \n");
    }else{
        printf("O Segundo Atributo é o vencedor! \n");
    }
break;

case 3:
    if(pib > pib2){
        printf(" Primeiro Atributo é o vencedor! \n");
    }else{
        printf("O Segundo Atributo é o vencedor! \n");
    }
break;

case 4:
    if(turismo > turismo2){
        printf(" Primeiro Atributo é o vencedor! \n");
    }else{
        printf("O Segundo Atributo é o vencedor! \n");
    }
break;

case 5:
    if(densidade < densidade2){
        printf(" Primeiro Atributo é o vencedor! \n");
    }else{
        printf("O Segundo Atributo é o vencedor! \n");
    }
break;

case 6:
    if(SuperPoder > SuperPoder2){
        printf(" Primeiro Atributo é o vencedor! \n");
    }else{
        printf("O Segundo Atributo é o vencedor! \n");
    }
break;

default:
    printf("Opção Inválida\n");
    break;
}

//encerramento

printf("\nA carta vencedora é a que ganhou na comparação de atributos! \n");
printf("Para cadastrar as outras cartas, reinicie o processo.");
    
    return 0;
}
