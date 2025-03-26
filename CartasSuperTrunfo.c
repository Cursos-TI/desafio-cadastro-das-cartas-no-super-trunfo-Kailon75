#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populc1 , populc2 , pnturis1 , pnturis2  ;
    float area1 , area2 , pib1 , pib2 , dnsdpp1 , dnsdpp2 , pibpcpt1 , pibpcpt2 ;
    char estad1 , cdd1 [30] , cdd2 [30] , cdgcarta1 [2]  , cdgcarta2 [2]  ;
    char estad2 ;

    printf("Bem vindo ao jogo super trunfo! \n");
    
    printf("Vamos começar digitando as informações da primeira carta! \n");

    printf("Digite uma letra entre 'A' e 'H' para o estado: \n");
    scanf("%c" , &estad1);

    printf("Agora digite o código da carta: \n");
    scanf("%s" , &cdgcarta1 );

    printf("Agora digite o nome da cidade: \n");
    scanf("%s" , &cdd1 );
    
    printf("Agora digite o tamanho da população dessa cidade: \n");
    scanf("%d" , &populc1 );
    
    printf("Agora digite a área da cidade em km²: \n");
    scanf("%f" , &area1);

    printf("Agora digite o PIB da cidade: \n");
    scanf("%f" , &pib1 );

    printf("Agora digite O número de pontos turíscos: \n");
    scanf("%d" , &pnturis1 );

    dnsdpp1 = (float) populc1 / area1 ;
    pibpcpt1 = (float) pib1 / populc1 ;

    printf("Agora vamos digitar ass informações da segunda carta! \n");

    printf("Digite uma letra entre 'A' e 'H' para o estado:(2) \n");
    scanf("%c" , &estad2 );

    printf("Agora digite o código da carta:(2) \n");
    scanf("%s" , &cdgcarta2 );

    printf("Agora digite o nome da cidade:(2) \n");
    scanf("%s" , &cdd2 );
    
    printf("Agora digite o tamanho da população dessa cidade:(2) \n");
    scanf("%d" , &populc2 );
    
    printf("Agora digite a área da cidade em km²:(2) \n");
    scanf("%f" , &area2);

    printf("Agora digite o PIB da cidade:(2) \n");
    scanf("%f" , &pib2 );

    printf("Agora digite O número de pontos turíscos:(2) \n");
    scanf("%d" , &pnturis2 );

    printf("Aqui está as informações das cartas que foram digitadas: \n");

    dnsdpp2 = (float) populc2 / area2 ;
    pibpcpt2 = (float) pib2 / populc2 ;

    printf("Carta 1: \nEstado:%c \nCódigo da carta:%s \nNome da cidade: %c \nPopulação: %d \n" , estad1 , cdgcarta1 , cdd1 , 
    populc1 );
    printf("Área: %2.f km² \nPIB: %2.f Bilhões de reais \nNúmeros de pontos turíscos: %d \n" , area1 , pib1 , pnturis1 );
    printf("Densidade populacional: %.2f  hab/km² \nPIB per capita: %2.f \n " , dnsdpp1 , pibpcpt1) ;

    printf("Carta 2: \nEstado:%c \nCódigo da carta:%s \nNome da cidade: %c \nPopulação: %d \n" , estad2 , cdgcarta2 , cdd2 , 
    populc2 );
    printf("Área: %2.f km² \nPIB: %2.f bilhões de reais \nNúmeros de pontos turíscos: %d \n" , area2 , pib2 , pnturis2 );
    printf("Densidade populacional: %.2f  hab/km² \nPIB per capita: %2.f \n " , dnsdpp2 , pibpcpt2) ;


}
