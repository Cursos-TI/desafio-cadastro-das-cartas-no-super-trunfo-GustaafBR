#include <stdio.h>

int main(){
    char estado1[50], estado2[50]; //string
    char codigocarta1[50], codigocarta2[50]; //string
    char nomedacidade1[150], nomedacidade2[150]; //string
    int populacao1, populacao2; //numero inteiro
    int numeroponturisticos1, numeroponturisticos2; //numero inteiro
    float areakm21, areakm22; //numero decimal (com vírgula)
    float PIB1, PIB2; //numero decimal (com vírgula)
    float PIBPC1, PIBPC2; //numero decimal (com vírgula)
    float DensDem1, DensDem2; //numero decimal (com vírgula)

    printf("Registrando Dados dos estados \n");
    printf("------------------------------------------------------------------------------------------------------------------------ \n");
//-----------------------------------------------------------------------------------------------------------------------    
    printf("Carta 1: \n");
    printf("Digite um nome de um estado: \n");
    scanf("%s", estado1); //é para o Estado 

    printf("Digite uma letra maiuscula, de A a H \nColoque junto da letra um número de 01 a 04 (usando o zero no meio) \nExemplo: A01:\n");
    scanf("%s", codigocarta1); //é para o Código 

    printf("Digite o nome da cidade do estado, sem dar espaço: \n");
    scanf("%s", nomedacidade1); //é para o Nome da Cidade

    printf("Digite a quantidade de moradores que o estado tem: \n");
    scanf("%d", &populacao1); //é para a População

    printf("Digite, em km², o tamanho do estado: \n");
    scanf("%f", &areakm21); //é para a Área

    printf("Digite, em bilhões de R$, o PIB do estado: \n");
    scanf("%f", &PIB1); //é para o PIB

    printf("Digite quantos pontos turísticos o estado tem: \n");
    scanf("%d", &numeroponturisticos1); //é para o Número de Pontos Turísticos
//-----------------------------------------------------------------------------------------------------------------------
    printf("------------------------------------------------------------------------------------------------------------------------ \n");
//------------------------------------------------------------------------------------------------------------------------
    printf("Carta 2: \n");
    printf("Digite um nome de um estado: \n");
    scanf("%s", estado2); //é para o Estado 

    printf("Digite uma letra maiuscula, de A a H \nColoque junto da letra um número de 01 a 04 (usando o zero no meio) \nExemplo: A01:\n");
    scanf("%s", codigocarta2); //é para o Código 

    printf("Digite o nome da cidade do estado, sem dar espaço: \n");
    scanf("%s", nomedacidade2); //é para o Nome da Cidade

    printf("Digite a quantidade de moradores que o estado tem: \n");
    scanf("%d", &populacao2); //é para a População

    printf("Digite, em km², o tamanho do estado: \n");
    scanf("%f", &areakm22); //é para a Área

    printf("Digite, em bilhões de R$, o PIB do estado: \n");
    scanf("%f", &PIB2); //é para o PIB

    printf("Digite quantos pontos turísticos o estado tem: \n");
    scanf("%d", &numeroponturisticos2); //é para o Número de Pontos Turísticos
//------------------------------------------------------------------------------------------------------------------------
    printf("------------------------------------------------------------------------------------------------------------------------ \n");
//------------------------------------------------------------------------------------------------------------------------    
    DensDem1 = populacao1 / areakm21; //Calcula a Densidade Demográfica e entrega o resultado em habitantes por quilômetro quadrado da Carta 1
    PIBPC1 = PIB1 / populacao1; //Calcula o PIB per Capita da Carta 1 
//------------------------------------------------------------------------------------------------------------------------
    DensDem2 = populacao2 / areakm22; //Calcula a Densidade Demográfica e entrega o resultado em habitantes por quilômetro quadrado da Carta 2
    PIBPC2 = PIB2 / populacao2; //Calcula o PIB per Capita da Carta 2 
//------------------------------------------------------------------------------------------------------------------------
    printf("Carta 1 \n");
    printf("\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigocarta1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", areakm21);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Números de Pontos Turísticos: %d \n", numeroponturisticos1);
    printf("Densidade Demográfica: %.2f hab/km² \n", DensDem1);
    printf("PIB per Capita: %.2f reais \n", PIBPC1);
//------------------------------------------------------------------------------------------------------------------------
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
//------------------------------------------------------------------------------------------------------------------------
    printf("Carta 2 \n");
    printf("\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", areakm22);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Números de Pontos Turísticos: %d \n", numeroponturisticos2);
    printf("Densidade Demográfica: %.2f hab/km² \n", DensDem2);
    printf("PIB per Capita: %.2f reais \n", PIBPC2);    
}