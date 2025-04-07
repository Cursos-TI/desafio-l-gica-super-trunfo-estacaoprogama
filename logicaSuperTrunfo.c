#include <stdio.h> // incluindo a biblioteca padão de entrada e saída para uso do printf

int main() {  // função principal, necessária para iniciar a execução do programa

    char estado1;   // Declara uma variável de caractere chamada "estado1", para armazenar a identificação de um estado. 
    char estado2;   // Declara uma variável de caractere chamada "estado2"  armazenar a identificação de um estado.
    char codigocarta1[4]; // Declara uma variável de caractere chamada "codigocarta1" com 4 caracteres para armazenar a identificação do código de uma carta.
    char codigocarta2[4]; // Declara uma variável de caractere chamada "codigocarta2" com 4 caracteres para armazenar a identificação do código de uma carta.
    char cidade1[20];  // Declara uma variável de caractere chamada "cidade1" com 20 caracteres para armazenar a identificação de uma cidade.
    char cidade2[20];  // Declara uma variável de caractere chamada "cidade2" com 20 caracteres para armazenar a identificação de uma cidade.
    float superPoderCarta1, superPoderCarta2;  // delcara uma variável tipo float chamada "superPoder" para armazenar a soma dos atributos das cartas.;
    
    /* Declara 4 variáveis inteiras chamada: "populacao1", "populacao2", "pontosturisticos1", "pontosturisticos2", respectivamente para a identificação
    de população e pontos turísticos com números inteiros.
    
    Aumenta a capacidade de armazenmento da variável população1 e população2 */

    unsigned long int populacao1, populacao2;
    
    int pontosturisticos1, pontosturisticos2;

     // Declara 4 variáveis de ponto flutuante chamadas "area1", "area2", "pib1", "pib2" para a identificação da área e do PIB respectivamente, com números decimais.

    float area1, area2, pib1, pib2; 

    // Declara variavel para cálculo da densidade populacional.

    float DensidadePopulacional1, DensidadePopulacional2;

    // Declara variável para cálculo do PIB per Capita.

    float PibPercapta1, PibPercapta2; 

    // Delcara variáveis de comparação de atributos das cartas.

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPibPercapita;
    int resultadoSuperPoder;    

    // função printf para exibir o texto formatado entre aspas na tela e "/n" para adicionar uma nova linha ao fim da mensagem.
    
    printf("Cadastro das Cartas\n"); 

    printf("\nCarta 1: \n");
         
    printf("Digite uma letra de A a H referente ao estado: "); // função printf utilizada para exibir o texto formatado entre as aspas na tela.
    scanf(" %c", &estado1); /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                             O valor lido será armazenado no endereço da variável de caractere chamada "estado1". */

    printf("Digite o código da carta: "); // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%s", &codigocarta1);  /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                                  O valor lido será armazenado no endereço da variável de caractere chamada "codigocarta1". */

    printf("Digite a Cidade: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%s", &cidade1); /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                            O valor lido será armazenado no endereço da variável de caractere chamada "cidade1". */

    printf("Digite a população: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%lu", &populacao1); /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                               O valor lido será armazenado no endereço da variável inteira chamada "pupulacao1". */ 

    printf("Digite a área em km²: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%f", &area1); /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                          O valor lido será armazenado no endereço da variável de ponto flutante chamada "area1". */

    printf("Digite o PIB: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%f", &pib1); /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                         O valor lido será armazenado no endereço da variável de ponto flutuante chamada "pib1". */

    printf("Digite o número do pontos turísticos: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%d", &pontosturisticos1); /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                                      O valor lido será armazenado no endereço da variável inteira chamada "pontosturisticos1". */
      
     // função printf para exibir o texto formatado entre aspas na tela e "/n" para adicionar uma nova linha ao fim da mensagem.                              

    printf("\nCarta 2: \n");

    printf("Digite uma letra de A a H referente ao estado: ");  // função printf utilizada para exibir o texto que está formatado entre as aspas na tela.
    scanf(" %c", &estado2);  /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                              O valor lido será armazenado no endereço da variável de caractere chamada "estado2". */ 

    printf("Digite o código da carta: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%s", &codigocarta2);   /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                                  O valor lido será armazenado no endereço da variável de caractere chamada "codigocarta2". */

    printf("Digite a Cidade: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%s", &cidade2);  /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                            O valor lido será armazenado no endereço da variável de caractere chamada "cidade2". */

    printf("Digite a população: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%lu", &populacao2);  /* função scanf utilizada para fazer a leitura de dados formatados via teclado.  (entrada de dados)
                                O valor lido será armazenado no endereço da variável inteira chamada "pupulacao2". */ 

    printf("Digite a área em km²: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%f", &area2);  /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                           O valor lido será armazenado no endereço da variável de ponto flutante chamada "area2". */

    printf("Digite o PIB: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%f", &pib2); /* função scanf utilizada para fazer a leitura de dados formatados via teclado. (entrada de dados)
                         O valor lido será armazenado no endereço da variável de ponto flutuante chamada "pib2". */

    printf("Digite o número do pontos turísticos: ");  // função printf utilizada para exibir o texto que está entre aspas na tela.
    scanf("%d", &pontosturisticos2); /* função scanf utilizada para fazer a leitura de dados formatados via teclado.  (entrada de dados)
                                      O valor lido será armazenado no endereço da variável inteira chamada "pontosturisticos2". */

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

    resultadoDensidadePopulacional = DensidadePopulacional1 > DensidadePopulacional2;

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

    // Se o resutado for "1", venceu a carta 1, mas se o resultado for "0", venceu a carta 2.

    printf("\nPopulação: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea );
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %d\n", resultadoDensidadePopulacional);
    printf("PIB per capita: %d\n", resultadoPibPercapita);
    printf("Super Poder: %d\n", resultadoSuperPoder); 

    if ( area1 > area2) {
        printf("Carta 1 venceu!");
    } else { 
        printf("Carta 2 venceu!");
    }


    return 0; // Fim do programa, indicando que o programa terminou com sucesso.
    

}