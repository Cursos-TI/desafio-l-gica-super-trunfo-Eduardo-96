#include <stdio.h>

int main(){
    char estadoC1[50], estadoC2 [50]; 
    char codigoDaCartaC1[50], codigoDaCartaC2[50];
    char NomeDaCidadeC1[50], NomeDaCidadeC2[50];
    int PopulacaoC1, PopulacaoC2;
    float areaC1, areaC2; 
    float pibC1, pibC2;
    int NumeroPontosTuristicosC1, NumeroPontosTuristicosC2;

    printf("--------SUPER TRUNFO------ \n ");
    printf("\n");
    printf("O Jogo será duas cartas de duas cidades diferentes \n");
    printf("\n");
    printf("\n");
    printf("O estado que tiver maior numero vitórias ganha!! \n ");
    printf("\n");
    printf("Você precisa prencher todos os dados de cada carta! VAmos começar pela Carta 1: \n");

        printf("Digite o Estado da 1º carta que você quer comparar \n");
        scanf("%49s", estadoC1);

        printf("Digite o Codigo da 1º carta que você quer comparar \n");
        scanf("%49s", codigoDaCartaC1);
        
        printf("Digite o Nome da Cidade da 1º carta que você quer comparar \n");
        scanf("%49s", NomeDaCidadeC1);
        
        printf("Digite a população da 1º carta que você quer comparar \n");
        scanf("%d", &PopulacaoC1);
        
        printf("Digite o Tamnho da AREA da 1º carta que você quer comparar \n");
        scanf("%f", &areaC1);
        
        printf("Digite a PIB da Cidade da 1º carta que você quer comparar \n");
        scanf("%f", &pibC1);
        
        printf("Digite a Quantidade de pontos Turisticos  da 1º carta que você quer comparar \n");
        scanf("%d", &NumeroPontosTuristicosC1);
        
        printf("\n");
        printf(" AGORA QUE DIGITOU A PRIMEIRA CARTA VAMOS PRA SEGUNDA ");
        printf("\n");
        
        printf("Digite o Estado da 2º carta que você quer comparar \n");
        scanf("%49s", estadoC2);
        
        printf("Digite o Codigo da 2º carta que você quer comparar \n");
        scanf("%49s", codigoDaCartaC2);
        
        printf("Digite o Nome da Cidade da 1º carta que você quer comparar \n");
        scanf("%49s", NomeDaCidadeC2);
        
        printf("Digite a população da 1º carta que você quer comparar \n");
        scanf("%d", &PopulacaoC2);
        
        printf("Digite o Tamnho da AREA da 1º carta que você quer comparar \n");
        scanf("%f", &areaC2);
        
        printf("Digite a PIB da Cidade da 1º carta que você quer comparar \n");
        scanf("%f", &pibC2);
        
        printf("Digite a Quantidade de pontos Turisticos da 1º carta que você quer comparar \n");
        scanf("%d", &NumeroPontosTuristicosC2);
            
        printf(" \n ------Resultado------\n");

    //população
    if(PopulacaoC1 > PopulacaoC2){
        printf("Carta 1: A população de %s é maior \n", estadoC1);
    }else{
        printf("Carta 2: A população %s é maior \n", estadoC2);
         }

    //Area
    if(areaC1 > areaC2){
        printf("Carta 1: A Area de %s é maior \n", estadoC1);
    }else{
        printf("Carta 2: A Area %s é maior \n", estadoC2);
        }    
    
    //pib
    if(pibC1 > pibC2){
        printf("Carta 1: A PIB de %s é maior \n", estadoC1);
    }else{
        printf("Carta 2: A PIB %s é maior \n", estadoC2);
        } 
    
    //Pontos Turisticos
    if(NumeroPontosTuristicosC1 > NumeroPontosTuristicosC2){
        printf("Carta 1: O Estado do %s tem mais pontos turísticos \n", estadoC1);
    }else{
        printf("Carta 2: O estado de %s tem mais pontos turisticos \n", estadoC2);
        }     
return 0;
    }