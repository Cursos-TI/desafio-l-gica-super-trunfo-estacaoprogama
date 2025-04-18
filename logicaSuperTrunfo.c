#include <stdio.h> // incluindo a biblioteca padão de entrada e saída para uso do printf

int main() {  // função principal, necessária para iniciar a execução do programa

    char pais1[30] = "Brasil";
    char pais2[30] = "Argentina";
   
    /* Declara 4 variáveis inteiras chamada: "populacao1", "populacao2", "pontosturisticos1", "pontosturisticos2", respectivamente para a identificação
    de população e pontos turísticos com números inteiros. */
    
    int populacao1 = 970000000;
    int populacao2 = 450000000;

    // Declara 4 variáveis de ponto flutuante chamadas "area1", "area2", "pib1", "pib2" para a identificação da área e do PIB respectivamente, com números decimais.

    float area1 = 850000;
    float area2 = 475000;

    float pib1 = 850000000.00;
    float pib2 = 950000000.00; 
    
    int pontosturisticos1 = 200; 
    int pontosturisticos2 = 175;
    

    // Declara variavel para cálculo da densidade populacional.

    float DensidadePopulacional1, DensidadePopulacional2;

    int pais;
    int resultado;
    int atributo1;
    int atributo2;
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

    resultadoPontosTuristicos = pontosturisticos1 > pontosturisticos2;

    resultadoDensidadePopulacional = DensidadePopulacional1 < DensidadePopulacional2;

   
    printf("Escolha o país\n");
    printf("1. %s\n", pais1);
    printf("2. %s\n", pais2);
    printf("3. sair do jogo\n");
    scanf("%d", &pais);

    if ((pais == 1) || (pais == 2) )
    {
      printf("Boa Sorte!  ^-^\n");

      }  else if (pais == 3) {
      
        printf(" Que pena!! Você não vai nem tentar??\n ");
      }          
     
      else {
      printf("Opção inválida. Digite 1 ou 2 ou 3!\n");
    }

    switch (pais)

    {
    case 1:

      printf("\n= = %s = =\n", pais1);
      printf("\n=== Escolha seu atributo === \n");
      
      printf("\n1. População: %d\n", populacao1 );
      printf("2. Área:  %.2f km² \n", area1);
      printf("3. PIB: R$ %.2f\n", pib1);
      printf("4. Pontos Turísticos: %d\n", pontosturisticos1);
      printf("5. Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
      scanf("%d", &atributo1);

          
        switch (atributo1)
        {
        case 1:
          printf("%s: população: %d\n", pais1, populacao1);
          printf("%s: população: %d\n", pais2, populacao2);
      
      
          if (resultadoPopulacao) {

          printf(" Pais %s venceu!\n", pais1);

        } else if (populacao1 < populacao2)
        { 
          printf(" Pais %s venceu!\n", pais2);
          
        } else {

          printf("Empate!\n");
        }        
        break;              
                 
        case 2:

        printf("%s: Área: %.2f\n", pais1, area1);
        printf("%s: Área: %.2f\n", pais2, area2);

        if (resultadoArea) {

          printf("Pais %s venceu!\n", pais1);

        } else if (area1 < area2)
        {
          
          printf("Pais %s venceu!\n", pais2);
        } else {
        
          printf("Empate!\n");
        }
          break;

          case 3:
          printf("%s: PIB: R$ %.2f\n", pais1, pib1);
          printf("%s: PIB: R$ %.2f\n", pais2, pib2);

          if (resultadoPib) {

            printf("Pais %s venceu!\n", pais1);

          } else if (pib1 < pib2)
          {
            printf("Pais %s venceu!\n", pais2);

          } else {
            printf("Empate!\n");
          }
          break;

          case 4:
            printf("%s: Pontos Turísticos: %d\n", pais1, pontosturisticos1);
            printf("%s: Pontos Turísticos: %d\n", pais2, pontosturisticos2);

          if (resultadoPontosTuristicos) {
          
            printf(" Pais %s venceu!\n", pais1);

          } else if (pontosturisticos1 < pontosturisticos2)
          { printf(" Pais %s venceu!\n", pais2);
            
          } else {
            printf("Empate!\n");
          }        
          break;    
          
          case 5:

          printf("%s: Densidade Populacional: %.2f\n", pais1, DensidadePopulacional1);
          printf("%s: Densidade Populacional: %.2f\n", pais2, DensidadePopulacional2);

          if (resultadoDensidadePopulacional) {

            printf("Pais %s venceu!\n", pais1);

          } else if (DensidadePopulacional1 > DensidadePopulacional2)
          {
            printf("Pais %s venceu!\n", pais2);

          } else {
          
            printf("Empate!\n");
          }
            break;  
            
            default:

            printf("Opção inválida. Tente novamente!!!\n");
           
         }  

         break;

        case 2:

            printf("\n= = %s = =\n", pais2);
            printf("\n=== Escolha seu atributo === \n");
      
            printf("1. População: %d\n", populacao2 );
            printf("2. Área:  %.2f km² \n", area2);
            printf("3. PIB: R$ %.2f\n", pib2);
            printf("4. Pontos Turísticos: %d\n", pontosturisticos2);
            printf("5. Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
            scanf("%d", &atributo2);

            
        switch (atributo2)
        {
       
          case 1:

        printf("%s: população: %d\n", pais1, populacao1);
        printf("%s: população: %d\n", pais2, populacao2);

        if (resultadoPopulacao) {

          printf(" Pais %s venceu!\n", pais1);

        } else if (populacao1 < populacao2)
        { 
          printf(" Pais %s venceu!\n", pais2);
          
        } else {
         
          printf("Empate!\n");
        }        
        break;              
                 
        case 2:

        if (resultadoArea) {

          printf("%s: Área: %.2f\n", pais1, area1);
          printf("%s: Área: %.2f\n", pais2, area2); 
         
          printf("Pais %s venceu!\n", pais1);

        } else if (area1 < area2)
        {
                    
          printf("Pais %s venceu!\n", pais2);

        } else {
         
          printf("Empate!\n");
        }
          break;

          case 3:

          printf("%s: PIB: R$ %.2f\n", pais1, pib1);
          printf("%s: PIB: R$ %.2f\n", pais2, pib2);

          if (resultadoPib) {
            
            printf("Pais %s venceu!\n", pais1);

          } else if (pib1 < pib2)
          {
           
            printf("Pais %s venceu!\n", pais2);

          } else {
            
            printf("Empate!\n");
          }
          break;

          case 4:

          printf("%s: Pontos Turísticos: %d\n", pais1, pontosturisticos1);
          printf("%s: Pontos Turísticos: %d\n", pais2, pontosturisticos2);  

          if (resultadoPontosTuristicos) {
            
            printf(" Pais %s venceu!\n", pais1);

          } else if (pontosturisticos1 < pontosturisticos2)
          {
            printf(" Pais %s venceu!\n", pais2);
            
          } else {
            
            printf("Empate!\n");
          }        
          break;    
          
          case 5:

          printf("%s: Densidade Populacional: %.2f\n", pais1, DensidadePopulacional1);
          printf("%s: Densidade Populacional: %.2f\n", pais2, DensidadePopulacional2);  

          if (resultadoDensidadePopulacional) {
                      
            printf("Pais %s venceu!\n", pais1);

          } else if (DensidadePopulacional1 > DensidadePopulacional2)
          {
            
            printf("Pais %s venceu!\n", pais2);

          } else {
            
            printf("Empate!\n");
          }
            break;  
            
            default:

            printf("Opção inválida. Tente novamente!!!\n");
      }  

      break;

           case 3:

         printf("saindo do jogo!\n");

         break;

    }
      return 0; // Fim do programa, indicando que o programa terminou com sucesso.
    }