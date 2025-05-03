#include <stdio.h>

int main() {
    // Define os nomes dos países
    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    // Define os atributos dos países
    float populacao1 = 211.14; // População em milhões de habitantes
    float area1 = 8.51;         // Área em milhões de km²
    float pib1 = 11.7;          // PIB em trilhões de U$$
    int pontosturisticos1 = 250;
    float densidadePopulacional1 = populacao1 / area1;

    float populacao2 = 45.15;   // População em milhões de habitantes
    float area2 = 8.55;         // Área em milhões de km²
    float pib2 = 10.85;         // PIB em trilhões de U$$
    int pontosturisticos2 = 180;
    float densidadePopulacional2 = populacao2 / area2;

    int escolhaPais1, escolhaAtributo1;
    int escolhaPais2, escolhaAtributo2;
    float valorAtributo1Carta1 = 0, valorAtributo2Carta1 = 0;
    float valorAtributo1Carta2 = 0, valorAtributo2Carta2 = 0;
    float somaAtributosCarta1, somaAtributosCarta2;
    int resultado1 = 0;
    int resultado2 = 0;
    char nomeAtributo1[50];
    char nomeAtributo2[50];

    printf("Bem-vindo ao jogo Super Trunfo de Países!\n\n");

    // Escolha da primeira carta e seu atributo e a opçao de saída do jogo

    printf("Escolha a primeira carta:\n");
    printf("1. %s\n", pais1);
    printf("2. %s\n", pais2);
    printf("3. Sair do jogo...\n");
    printf("Digite o número da opção: ");
    scanf("%d", &escolhaPais1);

    if (escolhaPais1 == 3) { // Verifica se o jogador escolheu sair
        printf("Saindo do jogo...\n");
        return 0; // Encerra o programa
    } else if (escolhaPais1 < 1 || escolhaPais1 > 2) {
        printf("Opção inválida.\n");
        return 0;
    }

    char *nomePaisJogador1 = (escolhaPais1 == 1) ? pais1 : pais2;

    printf("\nAtributos de %s:\n", nomePaisJogador1);
    printf("1. População (milhões): %.2f\n", (escolhaPais1 == 1) ? populacao1 : populacao2);
    printf("2. Área (km²): %.2f\n", (escolhaPais1 == 1) ? area1 : area2);
    printf("3. PIB (trilhões de dólares): %.2f\n", (escolhaPais1 == 1) ? pib1 : pib2 );
    printf("4. Pontos Turísticos: %d\n", (escolhaPais1 == 1) ? pontosturisticos1 : pontosturisticos2);
    printf("5. Densidade Populacional (hab/km²): %.2f\n", (escolhaPais1 == 1) ? densidadePopulacional1 : densidadePopulacional2);
    printf("Escolha o primeiro atributo para comparar: ");
    scanf("%d", &escolhaAtributo1);

    if (escolhaAtributo1 < 1 || escolhaAtributo1 > 5) {
        printf("Opção inválida.\n");
        return 0;
    }

    // Escolha da segunda carta e seu atributo

    printf("\nEscolha a segunda carta:\n");
    printf("1. %s\n", pais1);
    printf("2. %s\n", pais2);
    printf("Digite o número do país: ");
    scanf("%d", &escolhaPais2);

    if (escolhaPais2 < 1 || escolhaPais2 > 2) {
        printf("Opção inválida.\n");
        return 0;
    }

    char *nomePaisJogador2 = (escolhaPais2 == 1) ? pais1 : pais2;

    printf("\nAtributos de %s:\n", nomePaisJogador2);
    printf("1. População (milhões): %.2f\n", (escolhaPais2 == 1) ? populacao1 : populacao2);
    printf("2. Área (km²): %.2f\n", (escolhaPais2 == 1) ? area1 : area2);
    printf("3. PIB (trilhões de dólares): %.2f\n", (escolhaPais2 == 1) ? pib1 : pib2 );
    printf("4. Pontos Turísticos: %d\n", (escolhaPais2 == 1) ? pontosturisticos1 : pontosturisticos2);
    printf("5. Densidade Populacional (hab/km²): %.2f\n", (escolhaPais2 == 1) ? densidadePopulacional1 : densidadePopulacional2);
    printf("Escolha o segundo atributo para comparar: ");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo2 < 1 || escolhaAtributo2 > 5 || (escolhaPais1 == escolhaPais2  &&   escolhaAtributo2 == escolhaAtributo1)) {
        printf("Opção inválida. A segunda escolha de atributo não pode ser a mesma da primeira.\n");
        return 0;
    }

    printf("\n--- Resultado da Comparação ---\n");

    // Nomes dos países

    char *nomePais1 = (escolhaPais1 == 1) ? pais1 : pais2;
    char *nomePais2 = (escolhaPais2 == 1) ? pais1 : pais2;
    printf("País 1: %s\n", nomePais1);
    printf("País 2: %s\n", nomePais2);

    // Inicializa contadores de resultado

    resultado1 = 0;
    resultado2 = 0;

    // Atributo 1 da Carta 1

    printf("\n--- Comparando Atributo 1 ---\n");
    switch (escolhaAtributo1) {
        case 1: printf("%s (População: %.2f) vs %s (População: %.2f)\n", pais1, populacao1, pais2, populacao2); if (populacao1 > populacao2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (populacao2 > populacao1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        case 2: printf("---  (Área) ---\n"); printf("%s (Área: %.2f) vs %s (Área: %.2f)\n", pais1, area1, pais2, area2); if (area1 > area2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (area2 > area1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        case 3: printf("---  (PIB) ---\n"); printf("%s (PIB: %.2f) vs %s (PIB: %.2f)\n", pais1, pib1, pais2, pib2); if (pib1 > pib2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (pib2 > pib1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        case 4: printf("---  (Pontos Turísticos) ---\n"); printf("%s (Pontos Turísticos: %d) vs %s (Pontos Turísticos: %d)\n", pais1, pontosturisticos1, pais2, pontosturisticos2); if (pontosturisticos1 > pontosturisticos2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (pontosturisticos2 > pontosturisticos1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        case 5: printf("---  (Densidade Populacional) ---\n"); printf("%s (Densidade Populacional: %.2f) vs %s (Densidade Populacional: %.2f)\n", pais1, densidadePopulacional1, pais2, densidadePopulacional2); if (densidadePopulacional1 < densidadePopulacional2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (densidadePopulacional2 < densidadePopulacional1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        default: printf("--- (Atributo Inválido) ---\n"); break;
    }

    // Atributo 2 da Carta 1
    printf("\n--- Comparando Atributo 2 ---\n");
    switch (escolhaAtributo2) {
        case 1: printf("%s (População: %.2f) vs %s (População: %.2f)\n", pais1, populacao1, pais2, populacao2); if (populacao1 > populacao2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (populacao2 > populacao1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        case 2: printf("--- (Área) ---\n"); printf("%s (Área: %.2f) vs %s (Área: %.2f)\n", pais1, area1, pais2, area2); if (area1 > area2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (area2 > area1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        case 3: printf("--- (PIB) ---\n"); printf("%s (PIB: %.2f) vs %s (PIB: %.2f)\n", pais1, pib1, pais2, pib2); if (pib1 > pib2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (pib2 > pib1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        case 4: printf("--- (Pontos Turísticos) ---\n"); printf("%s (Pontos Turísticos: %d) vs %s (Pontos Turísticos: %d)\n", pais1, pontosturisticos1, pais2, pontosturisticos2); if (pontosturisticos1 > pontosturisticos2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (pontosturisticos2 > pontosturisticos1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        case 5: printf("--- (Densidade Populacional) ---\n"); printf("%s (Densidade Populacional: %.2f) vs %s (Densidade Populacional: %.2f)\n", pais1, densidadePopulacional1, pais2, densidadePopulacional2); if (densidadePopulacional1 < densidadePopulacional2) { printf("%s venceu este atributo!\n", pais1); resultado1++; } else if (densidadePopulacional2 < densidadePopulacional1) { printf("%s venceu este atributo!\n", pais2); resultado2++; } else { printf("Empate neste atributo!\n"); } break;
        default: printf(" (Atributo Inválido) ---\n"); break;
    }

    // Soma dos atributos para cada carta (mantendo a lógica original, embora não seja diretamente usada para o resultado final)
    somaAtributosCarta1 = 0;
    somaAtributosCarta2 = 0;

    // Determina o resultado final do jogador
    printf("\n--- Resultado Final ---\n");
    if (resultado1 && resultado2) {
        printf("Parabéns você VENCEU!!\n");
    } else if (resultado2 != resultado1) {
        printf("Você EMPATOU!!\n");
    } else {
        printf("Infelizmente você PERDEU\n");
    }

    return 0;
}
