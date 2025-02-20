#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    //Início do jogo

    printf ("Bem vindo ao jogo de super trunfo. Vamos começar cadastrando as suas cartas.");

// Definição das variáveis para cada atributo da cidade 

char cidade[50], codigo[50], estado[50];
int populacao, pontos_turisticos;
float PIB, area, densidade_populacional, PIBperCapita;

densidade_populacional = populacao / area;
PIBperCapita = PIB / populacao;


// Início do código para entrada e saída de dados

// Usuário pode inserir o código da cidade
printf ("Digite aqui o código da cidade utilizando uma letra e um número:\n");
scanf ("%s\n", &codigo);


 //Usuário pode inserir o nome da cidade
printf ("Digite aqui o nome da cidade:\n");
scanf ("%s\n", &cidade);

//Usuário pode inserir o estado
printf ("Digite aqui o estado:\n");
scanf ("%s\n", &estado);


//Usuário pode inserir a população
printf ("Digite aqui o número populacional da cidade:\n");
scanf ("%d\n", &populacao);


//Usuário pode inserir a área
printf ("Digite aqui qual é a área da cidade:\n");
scanf ("%f\n", &area);


//Usuário pode inserir o PIB
printf ("Digite aqui o PIB da cidade:\n");
scanf ("%f\n", &PIB);


//Usuário pode inserir os pontos turísticos
printf ("Digite aqui o número de pontos turísticos:\n");
scanf ("%d\n", &pontos_turisticos);

//Resultado com todas as informações da carta

printf ("Código da cidade: %s\nCidade: %s\nEstado: %s\nPopulacao: %d\nPontos Turisticos: %d\nPIB: %f\nÁrea: %fDensidade populacional:%.2f\nPib per Capita:%.2f\n", codigo, cidade, estado, populacao, area, PIB, pontos_turisticos, densidade_populacional, PIBperCapita);


//CARTA 2



// Definição das variáveis para cada atributo da cidade 

char cidade2[50], codigo2[50], estado2[50];
int populacao2, pontos_turisticos2;
float PIB2, area2, densidade_populacional2, PIBperCapita2;

densidade_populacional2 = populacao2 / area2;
PIBperCapita2 = PIB2 / populacao2;

// Início do código para entrada e saída de dados

// Usuário pode inserir o código da cidade
printf ("Digite aqui o código da cidade utilizando uma letra e um número:\n");
scanf ("%s\n", &codigo2);


 //Usuário pode inserir o nome da cidade
printf ("Digite aqui o nome da cidade:\n");
scanf ("%s\n", &cidade2);

//Usuário pode inserir o estado
printf ("Digite aqui o estado:\n");
scanf ("%s\n", &estado2);


//Usuário pode inserir a população
printf ("Digite aqui o número populacional da cidade:\n");
scanf ("%d\n", &populacao2);


//Usuário pode inserir a área
printf ("Digite aqui qual é a área da cidade:\n");
scanf ("%f\n", &area2);


//Usuário pode inserir o PIB
printf ("Digite aqui o PIB da cidade:\n");
scanf ("%f\n", &PIB2);


//Usuário pode inserir os pontos turísticos
printf ("Digite aqui o número de pontos turísticos:\n");
scanf ("%d\n", &pontos_turisticos2);

//Resultado com todas as informações da carta

printf ("Código da cidade: %s\nCidade: %s\nEstado: %s\nPopulacao: %d\nPontos Turisticos: %d\nPIB: %f\nÁrea: %f\nDensidade populacional:%.2f\nPib per Capita:%.2f\n", codigo2, cidade2, estado2, populacao2, area2, PIB2, pontos_turisticos2, densidade_populacional2, PIBperCapita2);

return 0;
}


