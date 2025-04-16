#include <stdio.h> // incluindo a biblioteca padão de entrada e saída para uso do printf

int main() {  // função principal, necessária para iniciar a execução do programa

    char pais1; 
    char pais2; 
   
    /* Declara 4 variáveis inteiras chamada: "populacao1", "populacao2", "pontosturisticos1", "pontosturisticos2", respectivamente para a identificação
    de população e pontos turísticos com números inteiros. */
    
    int populacao1 = 970000000;
    
    int populacao2 = 450000000;
    
    int pontosturisticos1 = 250; 
    int pontosturisticos2 = 175;

     // Declara 4 variáveis de ponto flutuante chamadas "area1", "area2", "pib1", "pib2" para a identificação da área e do PIB respectivamente, com números decimais.

    float area1 = 850000;
    float area2 = 475000;
    float pib1 = 850000000.00;
    float pib2 = 950000000.00; 

    // Declara variavel para cálculo da densidade populacional.

    float DensidadePopulacional1, DensidadePopulacional2;
    int pais;
    int resultado;
    int atributo;
        // Delcara variáveis de comparação de atributos das cartas.

        int resultadoPopulacao;
        int resultadoArea;
        int resultadoPib;
        int resultadoPontosTuristicos;
        int resultadoDensidadePopulacional;

            // cálcula a densidadade populacional.
    
    DensidadePopulacional1 = populacao1 / area1;

    DensidadePopulacional2 = populacao2 / area2;



    resultadoPopulacao = populacao1 > populacao2;

    resultadoArea = area1 > area2;

    resultadoPib = pib1 > pib2;

    resultadoPontosTuristicos = pontosturisticos2 > pontosturisticos2;

    resultadoDensidadePopulacional = DensidadePopulacional1 < DensidadePopulacional2;


    printf("Escolha o país\n");
    printf("1. Brasil\n");
    printf("2. Argentina\n");
    printf("3. sair do jogo\n");
    scanf("%d", &pais);
    
    switch (pais)
    {
    case 1:
      printf("= = Brasil = =\n");
      printf("=== Escolha seu atributo ===\n");
      printf("1. População: %d\n", populacao1 );
      printf("2. Área:  %.2f km² \n", area1);
      printf("3. PIB: R$ %.2f\n", pib1);
      printf("4. Pontos Turísticos: %d\n", pontosturisticos1);
      printf("5. Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
      scanf("%d",atributo);

      break;
        default:
        printf("Opção inválida. Tente novamente");
      }
        switch (atributo)
        {
        case 1:
        if (resultadoPopulacao) {
          printf("%s: população: %d", pais1, populacao1);
          printf("%s: população: %d", pais2, populacao2);
          printf(" Pais %s venceu!", pais1);
        } else if (populacao1 , populacao2)
        { printf("%s: população: %d", pais1, populacao1);
          printf("%s: população: %d", pais2, populacao2);
          printf(" Pais %s venceu!", pais2);
          
        } else {
          printf("%s: população: %d", pais1, populacao1);
          printf("%s: população: %d", pais2, populacao2);
          printf("Empate!");
        }        
        default:
          break;
        }

        
          
         
          
        case 2:
        if (resultadoArea)
        {
          printf("%s: Área: %.2f", pais1, area1);
          printf("%s: Área: %.2f", pais2, area2);
          printf("Pais %s venceu!", pais1);
        } else if (area1 < area2)
        {
          printf("%s: Área: %.2f", pais1, area1);
          printf("%s: Área: %.2f", pais2, area2);
          printf("Pais %s venceu!", pais2);
        } else {
          printf("%s: Área: %.2f", pais1, area1);
          printf("%s: Área: %.2f", pais2, area2);
          printf("Empate!");
        }
          break;
      }  
      }
      return 0; // Fim do programa, indicando que o programa terminou com sucesso.
    }