#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int carta, carta2;
    char estado, estado2;
    char cidade[10], cidade2[10];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontT, pontT2;
    float dpop, dpop2;
    float pibpc, pibpc2;
    float SP,SP2;

    printf("Bem vindo ao jogo super trufo! \n");
    printf("digite as informacões da primeira carta \n");
    
   
    printf("Digite o numero da carta: ");
    scanf("%d", &carta);
    getchar();
 
    printf("Digite o Estado: ");
    scanf(" %c", &estado);
 
    printf("Digite o nome da cidade: ");
    
    getchar(); 
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0; 
 
 
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
 
    printf("Digite a area (km^2): ");
    scanf("%f", &area);
 
    printf("Digite o PIB: ");
    scanf("%f", &pib);
 
    printf("Quantos pontos turisticos: ");
    scanf("%d", &pontT);

    
    dpop = (float) populacao / area;
    pibpc = (float) pib / populacao;

    

    printf("Agora digte as informações da segunda carta: \n");

   
    printf("Digite o numero da carta: ");
    scanf("%d", &carta2);
    getchar();
  
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
  
    printf("Digite o nome da cidade: ");
    
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; 
  
  
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
  
    printf("Digite a area (km^2): ");
    scanf("%f", &area2);
  
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
  
    printf("Quantos pontos turisticos: ");
    scanf("%d", &pontT2);

    

    dpop2 = (float) populacao2 / area2;
    pibpc2 = (float) pib2 / populacao2;
 

    
    
     
    


    
    printf("\nCarta 1: \n") ;
    printf("Estado: %c \n" , estado) ;
    printf("Codigo: %c0%d\n", estado, carta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km^2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontT);
    printf("Densidade Populacional: %f hab/km^2\n", dpop);
    printf("PIB per capita: %f\n", pibpc);

    printf("\nCarta 2: \n") ;
    printf("Estado: %c \n" , estado2) ;
    printf("Codigo: %c0%d\n", estado2,carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontT2);
    printf("Densidade Populacional: %f hab/km^2\n", dpop2);
    printf("PIB per capita: %f\n", pibpc2);


    SP = (populacao, area, pib, pontT,pibpc) / dpop;
    SP2 = (populacao2, area2, pib2, pontT2,pibpc2) / dpop2;

    printf("\nSe carta 1 venceu,aparecera '1' ,caso carta 2 vença, aparecera '0' \n");

    printf("\nPopulacao: venceu %d\n", populacao > populacao2 );
    printf("Area: venceu %d \n", area > area2);
    printf("PIB: venceu  %d\n", pib > pib2);
    printf("Pontos Turisticos: venceu %d\n", pontT > pontT2);
    printf("Densidade Populacional: venceu %d\n", dpop < dpop2);
    printf("PIB per capita: venceu %d\n", pibpc > pibpc2);
    printf("Super poder: venceu %d\n",SP > SP2 );

    


    return 0;
}
