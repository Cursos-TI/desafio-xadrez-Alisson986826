#include <stdio.h>

int main() {
    //Variaveis para o numero de casas a serem movimentadas
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    //Movimento da torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++)
    {
        printf("direita\n");
    }
    //movimento do Bispo
    int i = 0;
    printf("Movimento do Bispo\n");
    while (i < movimentoBispo) {
        printf("cima direita\n");
        i++;
    }
    //Movimento da Rainha
    int j = 0;
    printf("Movimneto da Rainha\n");
    do{
        int k = 0;
        while (k < 1) {
            printf("esquerda\n");
            k++;
        }
        j++;
    } while (j < movimentoRainha);
    //Movimneto do cavalo
    printf("\n");
    printf("Movimento do cavalo\n");
    for(int passo = 0; passo < 1; passo++){
        for(int cima = 0;cima < 2; cima++){
            printf("cima\n");
        } printf("esquerda\n");
    }
   

    return 0;
}
