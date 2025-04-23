#include <stdio.h>

int main(){

    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turistico;
    float densidadeP;
    float pibC;

    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidadeP2;
    float pibC2;

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado);

    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("digite o numero da populacao: ");
    scanf("%d", &populacao);

    printf("digite a area: ");
    scanf("%f", &area);

    printf("digite o pib: ");
    scanf("%f", &pib);

    printf("digite a quantidade de pontos turistico existe: ");
    scanf("%d", &turistico);



    printf("Digite o nome do segundo estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("digite o numero da populacao: ");
    scanf("%d", &populacao2);

    printf("digite a area: ");
    scanf("%f", &area2);

    printf("digite o pib: ");
    scanf("%f", &pib2);

    printf("digite a quantidade de pontos turistico existe: ");
    scanf("%d", &turistico2);

    densidadeP = populacao / area;
    pibC = pib / populacao;
    densidadeP2 = populacao2 / area2;
    pibC2 = pib2 / populacao2;


    printf("\n Carta 1\n");
    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao);
    printf("area: %.2f km²\n", area);
    printf("pib: R$ %.2f\n", pib);
    printf("pontos turisticos: %d\n", turistico);
    printf ("densidade populacional: %.2f\n", densidadeP);
    printf("pib per capita: %.2f\n", pibC);

    printf("\n Carta 2\n");
    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("pib: R$ %.2f\n", pib2);
    printf("pontos turisticos: %d\n", turistico2);
    printf(" densidade populacional: %.2f\n", densidadeP2);
    printf("pib per capita: %.2f\n", pibC2);

    return 0;

}