#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    //Criação das variáveis e tabuleiro
    int i, j;
    int tabuleiro[10][10];

    //For usado para criar o tabuleiro completo com ZEROS que representam água
    for (i = 0; i < 10; i++){

        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }

    }

    //Colocar o navio horizontal no tabuleiro
    for (i = 3; i < 6; i++){
        tabuleiro[4][i] = 3;
    }

    //Colocar o navio vertical no tabuleiro
    for (i = 2; i < 5; i++){
        tabuleiro[i][8] = 3;
    }

    

    //Colocar o primeiro navio diagonal no tabuleiro
    for (i = 6; i < 9; i++){
        tabuleiro[i][i] = 3;
    }

    //Colocar o segundo navio diagonal no tabuleiro
    j = 2;
    for (i = 3; i > 0; i--){
        tabuleiro[i][j] = 3;
        j++;
    }

    //For utilizado para imprimir o tabuleiro
    printf("    A B C D E F G H I J\n");
    for (i = 0; i < 10; i++){

        if (i == 9){
            printf("%d- ", i+1);
        }else{
            printf("%d-  ", i+1);
        }
        

        for (j = 0; j < 10; j++){
            printf("%d ",tabuleiro[i][j]);
        }

        printf("\n");

    }

    //Implementação das habilidades especiais do desafio Mestre
    //For usado para criar o tabuleiro completo com ZEROS que representam água
    for (i = 0; i < 10; i++){

        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }

    }

    //Implementação da habilidade Cone
    int conelinha = 3, conecoluna = 3, coneaumento = 1;
    for (i = 0; i < 10; i++){

        for (j = 0; j < 10; j++){
            if ( i == conelinha && j == conecoluna && coneaumento < 5){
                tabuleiro[i][j] = 1;
                if (coneaumento > 1 && coneaumento < 5){
                    for (int linha = 1; linha < coneaumento; linha++){
                        tabuleiro[i][j-coneaumento+linha] = 1;
                        tabuleiro[i][j+coneaumento-linha] = 1;
                    }
                }
                conelinha++;
                coneaumento++;
            }
        }

    }

     //For utilizado para imprimir o tabuleiro
     printf("    A B C D E F G H I J\n");
     for (i = 0; i < 10; i++){
 
         if (i == 9){
             printf("%d- ", i+1);
         }else{
             printf("%d-  ", i+1);
         }
         
 
         for (j = 0; j < 10; j++){
             printf("%d ",tabuleiro[i][j]);
         }
 
         printf("\n");
 
     }

     
     //For usado para criar o tabuleiro completo com ZEROS que representam água
    for (i = 0; i < 10; i++){

        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }

    }

    //Implementação da habilidade Octaedro
    int octalinha = 2, octacoluna = 4, octaaumento = 1, octaaumento2 = 4;
    for (int a = 0; a < 10; a++){

        for (int b = 0; b < 10; b++){
            if ( a == octalinha && b == octacoluna && octaaumento < 5){
                tabuleiro[a][b] = 1;
                if (octaaumento > 1 && octaaumento < 5){
                    for (int linha2 = 1; linha2 < octaaumento; linha2++){
                        tabuleiro[a][b-octaaumento+linha2] = 1;
                        tabuleiro[a][b+octaaumento-linha2] = 1;
                    }
                }
                octalinha++;
                octaaumento++;
            }
        }
    }
    // Parte de baixo (espelhada)
    int octalinha_baixo = octalinha; // começa onde parou
    octaaumento = 3; // começa diminuindo

    for (int a = octalinha_baixo; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            if (a == octalinha_baixo && b == octacoluna && octaaumento > 0) {
                tabuleiro[a][b] = 1;
                if (octaaumento > 1) {
                    for (int linha2 = 1; linha2 < octaaumento; linha2++) {
                        tabuleiro[a][b - octaaumento + linha2] = 1;
                        tabuleiro[a][b + octaaumento - linha2] = 1;
                    }
                }
                octalinha_baixo++;
                octaaumento--;
            }
        }
    }

    //For utilizado para imprimir o tabuleiro
    printf("    A B C D E F G H I J\n");
    for (i = 0; i < 10; i++){

        if (i == 9){
            printf("%d- ", i+1);
        }else{
            printf("%d-  ", i+1);
        }
        

        for (j = 0; j < 10; j++){
            printf("%d ",tabuleiro[i][j]);
        }

        printf("\n");

    }

    //For usado para criar o tabuleiro completo com ZEROS que representam água
    for (i = 0; i < 10; i++){

        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }

    }

    //Implementação da habilidade em, cruz
    int linhaalvo = 4, colunaalvo = 4;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i == linhaalvo){
                tabuleiro[i][j] = 1;
            }
            if (j == colunaalvo){
                tabuleiro[i][j] = 1;
            }
        }
    }

    //For utilizado para imprimir o tabuleiro
    printf("    A B C D E F G H I J\n");
    for (i = 0; i < 10; i++){

        if (i == 9){
            printf("%d- ", i+1);
        }else{
            printf("%d-  ", i+1);
        }
        

        for (j = 0; j < 10; j++){
            printf("%d ",tabuleiro[i][j]);
        }

        printf("\n");

    }


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
