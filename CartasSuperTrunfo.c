#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    //Início do jogo

    printf ("Bem vindo ao jogo de super trunfo. Vamos começar cadastrando as suas cartas.\n");

    // Definição das variáveis para cada atributo da cidade 

    char cidade[50], codigo[50], estado[50];
    int pontos_turisticos;
    float PIB, area, densidade_populacional, PIBperCapita, superpoder;
    unsigned long int populacao;


    // Início do código para entrada e saída de dados

    // Usuário pode inserir o código da cidade
    printf ("Digite aqui o código da cidade utilizando uma letra e um número:\n");
    scanf ("%s", &codigo);


    //Usuário pode inserir o nome da cidade
    printf ("Digite aqui o nome da cidade:\n");
    scanf ("%s", &cidade);

    //Usuário pode inserir o estado
    printf ("Digite aqui o estado:\n");
    scanf ("%s", &estado);


    //Usuário pode inserir a população
    printf ("Digite aqui o número populacional da cidade:\n");
    scanf ("%d", &populacao);


    //Usuário pode inserir a área
    printf ("Digite aqui qual é a área da cidade:\n");
    scanf ("%f", &area);


    //Usuário pode inserir o PIB
    printf ("Digite aqui o PIB da cidade:\n");
    scanf ("%f", &PIB);


    //Usuário pode inserir os pontos turísticos
    printf ("Digite aqui o número de pontos turísticos:\n");
    scanf ("%d", &pontos_turisticos);

    
    //Cálculo das variáveis

    densidade_populacional = populacao / area;
    PIBperCapita = PIB / populacao;

    superpoder = (float) (PIB + area + PIBperCapita + populacao) - densidade_populacional;
    
    
    
    //Resultado com todas as informações da carta


    printf ("***INFORMAÇÕES DA CARTA 1***\n");
    printf ("Código da cidade: %s\nCidade: %s\nEstado: %s\nPopulacao: %d\nPontos Turisticos: %d\nPIB: %f\nÁrea: %f\nDensidade populacional:%.2f\nPib per Capita:%.2f\nSuper Poder: %f\n", codigo, cidade, estado, populacao, area, PIB, pontos_turisticos, densidade_populacional, PIBperCapita, superpoder);


    //CARTA 2


    // Definição das variáveis para cada atributo da cidade 

    char cidade2[50], codigo2[50], estado2[50];
    int pontos_turisticos2;
    float PIB2, area2, densidade_populacional2, PIBperCapita2, superpoder2;
    unsigned long int populacao2;

    
    printf ("Agora vamos cadastrar a segunda carta:\n");

    
    // Início do código para entrada e saída de dados

    // Usuário pode inserir o código da cidade
    printf ("Digite aqui o código da cidade utilizando uma letra e um número:\n");
    scanf ("%s", &codigo2);


    //Usuário pode inserir o nome da cidade
    printf ("Digite aqui o nome da cidade:\n");
    scanf ("%s", &cidade2);

    //Usuário pode inserir o estado
    printf ("Digite aqui o estado:\n");
    scanf ("%s", &estado2);


    //Usuário pode inserir a população
    printf ("Digite aqui o número populacional da cidade:\n");
    scanf ("%d", &populacao2);


    //Usuário pode inserir a área
    printf ("Digite aqui qual é a área da cidade:\n");
    scanf ("%f", &area2);


    //Usuário pode inserir o PIB
    printf ("Digite aqui o PIB da cidade:\n");
    scanf ("%f", &PIB2);


    //Usuário pode inserir os pontos turísticos
    printf ("Digite aqui o número de pontos turísticos:\n");
    scanf ("%d", &pontos_turisticos2);


    //Cálculo das variáveis
    
    densidade_populacional2 = populacao2 / area2;
    PIBperCapita2 = PIB2 / populacao2;

    superpoder2 = (float) (PIB2 + area2 + PIBperCapita2 + populacao2) - densidade_populacional2;




    //Resultado com todas as informações da carta

    printf ("***INFORMAÇÕES DA CARTA 2***\n");

    printf ("Código da cidade: %s\nCidade: %s\nEstado: %s\nPopulacao: %d\nPontos Turisticos: %d\nPIB: %f\nÁrea: %f\nDensidade populacional:%.2f\nPib per Capita:%.2f\nSuper Poder:%f\n", codigo2, cidade2, estado2, populacao2, area2, PIB2, pontos_turisticos2, densidade_populacional2, PIBperCapita2, superpoder2);


    //Comparação de cartas

    printf ("Agora vamos comparar os atributos escolhidos e descobrir quem será o vencedor!\n");

    //Menu para escolha do primeiro atributo

    printf ("Escolha o primeiro atributo com o qual você quer competir:\n");
    printf ("1- População\n 2- Pontos turísticos\n3-PIB\n4- Área\n5- Densidade populacional\n6- Pib per Capita\n7- Super poder\n");
    
    int primeiroAtributo; 

    scanf ("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        
        //Atributo população
        printf ("Resultado:\n");

        printf ("População carta 1: %lu\n", populacao);
        printf ("População carta 2: %lu\n", populacao2);
        
        primeiroAtributo = (populacao > populacao2) ? 1 : 0;
        
        break;

    case 2:
    
        //Atributo área
        printf ("Área carta 1: %f\n", area);
        printf ("Área carta 2: %f\n", area2);
        
        primeiroAtributo = (area > area2) ? 1 : 0;
        
        break;

    case 3:
    
        //Atributo PIB
        printf ("PIB carta 1: %f\n", PIB);
        printf ("PIB carta 2: %f\n", PIB2);
        
        primeiroAtributo = (PIB > PIB2) ? 1 : 0;
        
        break;

    case 4:
    
        //Atributo pontos turísticos
        printf ("Pontos turísticos carta 1: %d\n", pontos_turisticos);
        printf ("Pontos turísticos carta 2: %d\n", pontos_turisticos2);
        
        primeiroAtributo = (pontos_turisticos > pontos_turisticos2) ? 1 : 0;

    case 5:
    
        //Atributo densidade populacional
        printf ("Densidade populacional carta 1: %f\n", densidade_populacional);
        printf ("Densidade populacional carta 2: %f\n", densidade_populacional2);
        
        primeiroAtributo = (densidade_populacional < densidade_populacional2) ? 1 : 0;
        
        break;

    case 6:
    
        //Atributo PIBperCapita
        printf ("PIBperCapita carta 1: %f\n", PIBperCapita);
        printf ("PIBperCapita carta 2: %f\n", PIBperCapita2);
        
        primeiroAtributo = (PIBperCapita > PIBperCapita2) ? 1 : 0;
        
        break;

    case 7:
    
        //Atributo super poder
        printf ("Super poder carta 1: %f\n", superpoder);
        printf ("Super poder carta 2: %f\n", superpoder2);
        
        primeiroAtributo = (superpoder > superpoder2) ? 1 : 0;

        break;



    default: 
        printf ("Opção inválida.");
        break;
    }

    //Menu para escolha do segundo atributo
    
    printf ("Agora escolha o segundo atributo com o qual você quer competir:\n");
    printf ("1- População\n 2- Pontos turísticos\n3-PIB\n4- Área\n5- Densidade populacional\n6- Pib per Capita\n7- Super poder\n");

    int segundoAtributo;

    scanf ("%d", &segundoAtributo);
    
    if (segundoAtributo == primeiroAtributo) {
        printf ("Você não pode escolher o mesmo atributo. Por favor, selecione uma opção diferente para prosseguir.");
    }else {
        switch (segundoAtributo)
    {
    case 1:
        
        //Atributo população
        printf ("Resultado:\n");

        printf ("População carta 1: %lu\n", populacao);
        printf ("População carta 2: %lu\n", populacao2);
        
        primeiroAtributo = (populacao > populacao2) ? 1 : 0;
        
        break;

    case 2:
    
        //Atributo área
        printf ("Área carta 1: %f\n", area);
        printf ("Área carta 2: %f\n", area2);
        
        primeiroAtributo = (area > area2) ? 1 : 0;
        
        break;

    case 3:
    
        //Atributo PIB
        printf ("PIB carta 1: %f\n", PIB);
        printf ("PIB carta 2: %f\n", PIB2);
        
        primeiroAtributo = (PIB > PIB2) ? 1 : 0;
        
        break;

    case 4:
    
        //Atributo pontos turísticos
        printf ("Pontos turísticos carta 1: %d\n", pontos_turisticos);
        printf ("Pontos turísticos carta 2: %d\n", pontos_turisticos2);
        
        primeiroAtributo = (pontos_turisticos > pontos_turisticos2) ? 1 : 0;

    case 5:
    
        //Atributo densidade populacional
        printf ("Densidade populacional carta 1: %f\n", densidade_populacional);
        printf ("Densidade populacional carta 2: %f\n", densidade_populacional2);
        
        primeiroAtributo = (densidade_populacional < densidade_populacional2) ? 1 : 0;
        
        break;

    case 6:
    
        //Atributo PIBperCapita
        printf ("PIBperCapita carta 1: %f\n", PIBperCapita);
        printf ("PIBperCapita carta 2: %f\n", PIBperCapita2);
        
        primeiroAtributo = (PIBperCapita > PIBperCapita2) ? 1 : 0;
        
        break;

    case 7:
    
        //Atributo super poder
        printf ("Super poder carta 1: %f\n", superpoder);
        printf ("Super poder carta 2: %f\n", superpoder2);
        
        primeiroAtributo = (superpoder > superpoder2) ? 1 : 0;

        break;



    default: 
        printf ("Opção inválida.");
        break;
    }
    }


    if (primeiroAtributo == 1 && segundoAtributo == 1) {
        printf ("Carta 1 venceu!");
    }else if (primeiroAtributo == 0 && segundoAtributo == 0) {
        printf ("Carta 2 venceu!");
    }else {
        printf ("Empate!");
    }



    return 0;
}