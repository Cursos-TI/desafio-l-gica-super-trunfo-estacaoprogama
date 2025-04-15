#include <stdio.h> // incluindo a biblioteca padão de entrada e saída para uso do printf

int main() {  // função principal, necessária para iniciar a execução do programa

    char pais1 = "Brasil";
    char pais2 = "Argentina";
   
    /* Declara 4 variáveis inteiras chamada: "populacao1", "populacao2", "pontosturisticos1", "pontosturisticos2", respectivamente para a identificação
    de população e pontos turísticos com números inteiros. */
    
    int populacao1 = 970000000;
    
    int populacao2 = 450000000;
    
    int pontosturisticos1 = 250; 
    int pontosturisticos2 = 175;

     // Declara 4 variáveis de ponto flutuante chamadas "area1", "area2", "pib1", "pib2" para a identificação da área e do PIB respectivamente, com números decimais.

    float area1 = 850000
    float area2 = 475000;
    float pib1 = 850000000.00;
    float pib2 = 950000000.00; 

    // Declara variavel para cálculo da densidade populacional.

    float DensidadePopulacional1, DensidadePopulacional2;
    int pais;
    int atributo;
        // Delcara variáveis de comparação de atributos das cartas.

        int resultadoPopulacao;
        int resultadoArea;
        int resultadoPib;
        int resultadoPontosTuristicos;
        int resultadoDensidadePopulacional;

    printf("escolha o país\n");
    printf("1. Brasil");
    printf("2. Argentina");

    switch (pais)
    {
    case 1:
    printf("Escolha seu atributo\n");
      printf("1. População: %d\n", populacao1 );
      printf("2. Área:  %.2f km² \n", area1);
      printf("3. PIB: R$ %.2f\n", pib1);
      printf("4. Pontos Turísticos: %d", pontosturisticos1);
      printf("5. Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
      break;
        default:
    (printf("Tente novamente"));
      break;

      switch (atributo)
      {
      case 1:
        if (resultadoPopulacao)
        printf(" ")
        break;
      
      default:
        break;
      }
    }

    printf("Escolha o atributo para comparação\n");
    printf("1. população\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    print


    switch (opcao)
    {
    case constant expression:
      /* code */
      break;
    
    default:
      break;
    }

    // Delcara variáveis de comparação de atributos das cartas.

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
      

    // função printf para exibir o texto formatado entre aspas na tela e "/n" para adicionar uma nova linha ao fim da mensagem.
    
    
    // cálcula a densidadade populacional.
    
    DensidadePopulacional1 = populacao1 / area1;

    DensidadePopulacional2 = populacao2 / area2;

    // calcula o PIB per Capita.

    PibPercapta1 = pib1 / (float)populacao1;

    PibPercapta2 = pib2 / (float)populacao2;

    // calcula o valor das variáveis superPoderCarta1  e SuperPoderCarta2.

    superPoderCarta1 = populacao1 + area1 + pib1 + pontosturisticos1 + PibPercapta1 + (1 / DensidadePopulacional1);

    superPoderCarta2 = populacao2 + area2 + pib2 + pontosturisticos2 + PibPercapta2 + (1 / DensidadePopulacional2);

    // Calcula o resultado da comparação dos atributos das cartas.

    resultadoPopulacao = populacao1 > populacao2;

    resultadoArea = area1 > area2;

    resultadoPib = pib1 > pib2;

    resultadoPontosTuristicos = pontosturisticos2 > pontosturisticos2;

    resultadoDensidadePopulacional = DensidadePopulacional1 < DensidadePopulacional2;

    resultadoPibPercapita = PibPercapta1 > PibPercapta2;

    resultadoSuperPoder = superPoderCarta1 > superPoderCarta2;

    
    // função printf para exibir o texto formatado entre aspas na tela e "/n" para adicionar uma nova linha ao fim da mensagem.                     
                                       
    printf("\nCarta 1: \n");

    /* função printf utilizada para imprimir a saída dos dados, com "/n" para adicionar uma nova linha ao fim da mensagem.
      sintaxe: printf("texto exibido na tela", lista de argumentos)*/
       
    printf("Estado: %c\n", estado1); // "%c" representa o local onde será escrita a variável caractere "estado1"
                                            
    printf("Código: %s\n", codigocarta1); // "%s" representa o local onde será escrita a variável caractere  "codigocarta1" 
                                         
    printf("Nome da cidade: %s\n", cidade1); // "%s" representa o local onde será escrita a variável caractere "cidade1" 
                                           
    printf("População: %lu\n", populacao1); // "%d" representa o local onde será escrita a variável inteira  "populacao1" 
                                            
    printf("Área: %.2f km²\n", area1); // "%f" representa o local onde será escrita a variável float  "area1"
                                
    printf("PIB: %.2f bilhões de reais\n", pib1); // "%f" representa o local onde será escrita a variável float  "pib1"

    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1); // "%d" representa o local onde será escrita a variável inteira "pontosturisticos1" 

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1); // Insere a variável DensidadePopulacional1 com 2 casas decimais

    printf("PIB per Capita: %.2f reais\n", PibPercapta1); // Insere a variável PibPercapita1 com 2 casas decimais

    
                          
    /* função printf utilizada para imprimir a saída dos dados, com "/n" para adicionar uma nova linha ao fim da mensagem.
      sintaxe: printf("texto exibido na tela", lista de argumentos)*/

    printf("\nCarta 2: \n"); 
  
    printf("Estado: %c\n", estado2);  /* "%c" representa o local onde será escrita a variável caractere "estado2" */

    printf("Código: %s\n", codigocarta2);  /* "%s" representa o local onde será escrita a variável caractere  "codigocarta2" */

    printf("Nome da cidade: %s\n", cidade2);  /* "%s" representa o local onde será escrita a variável caractere "cidade2" */

    printf("População: %lu\n", populacao2); /* "%d" representa o local onde será escrita a variável inteira  "populacao2" */

    printf("Área: %.2f km²\n", area2);  /* "%f" representa o local onde será escrita a variável float  "area2"*/

    printf("PIB: %.2f bilhões de reais\n", pib2);  /* "%f" representa o local onde será escrita a variável float  "pib2"*/

    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);  /* "%d" representa o local onde será escrita a variável inteira "pontosturisticos2" */

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2); // Insere a variável DensidadePopulacional2 com 2 casas decimais
    
    printf("PIB per Capita: %.2f reais\n", PibPercapta2); // Insere a variável PibPercapita2 com 2 casas decimais

    // função pintf para imprimir o resultado das comparações dos atributos.

    printf("\nComparação das Cartas\n");

    printf("\nAtributo: População: \n");
    
      printf("Carta 1 (%s): %lu \n", cidade1, populacao1);
      printf("Carta 2 (%s): %lu \n", cidade2, populacao2);
    
      if ( resultadoPopulacao) {
        printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);
    } else { 
        printf("Resultado: Carta 2 (%s) venceu!!\n", cidade2);
    }

    printf("\nAtributo: Área: \n");

    printf("Carta 1 (%s): %.2f km² \n", cidade1, area1);
    printf("Carta 2 (%s): %.2f km² \n", cidade2, area2);
       
    if ( resultadoArea) {
        printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);
    } else { 
        printf("Resultado Carta 2 (%s) venceu!!\n", cidade2);
    }

    printf("\nAtributo: PIB:\n");

    printf("Carta1 (%s): R$ %.2f\n", cidade1, pib1);
    printf("Carta2 (%s): R$ %.2f\n", cidade2, pib2);

    if (resultadoPib){

      printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);
    } else { 
      printf("Resultado: Carta 2 (%s) venceu!!\n", cidade2);
    }

    printf("\nAtributo: Pontos Turísticos:\n");

    printf("Carta 1 (%s): %d\n", cidade1, pontosturisticos1);
    printf("Carta 2 (%s): %d\n", cidade2, pontosturisticos2);

    if (resultadoPontosTuristicos) {

      printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!!\n", cidade2);
    }

    printf("\nAtributo: Densidade Populacional:\n");

    printf("carta 1 (%s): %.2f\n", cidade1, DensidadePopulacional1);
    printf("Carta 2 (%s): %.2f\n", cidade2, DensidadePopulacional2);

    if (resultadoDensidadePopulacional)
    {
      printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }else {
      printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

      printf("\nAtributo: PIB per capita:\n");
      
    printf("carta 1 (%s): R$ %.2f\n", cidade1, PibPercapta1);
    printf("Carta 2 (%s): R$ %.2f\n", cidade2, PibPercapta2);

    if (resultadoPibPercapita)
    {
      printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }else {

     printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }


      printf("\nAtributo: Super Poder:\n");    
      
    printf("carta 1 (%s): %f\n", cidade1, superPoderCarta1);
    printf("Carta 2 (%s): %f\n", cidade2, superPoderCarta2);

    if (resultadoSuperPoder)
    {
      printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }else {
      printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
     }
    

      return 0; // Fim do programa, indicando que o programa terminou com sucesso.
    }