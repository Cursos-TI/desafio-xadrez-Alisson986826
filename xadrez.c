#include <stdio.h>


  //TORRE
  void moverTorre(int casas) {
    if(casas == 0) return;
    printf("direita\n");
    moverTorre(casas - 1);
  }
  //BISPO
  void moverBispo(int casas) {
    if (casas == 0) return;
    //loop aninhado
    for (int v = 0; v < 1; v++){
        for (int h = 0; h < 1; h++){
            printf("cima direita\n");
        }
    }
    moverBispo(casas - 1);
  }
  //RAINHA
  void moverRainha(int casas) {
    if (casas == 0) return;
    printf("esquerda\n");
    moverRainha(casas - 1);
  }
  //CAVALO
  void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < movimentos; i++){
      int vertical  = 0;
      int horizontal = 0;
      for (vertical = 0; vertical < 2; vertical++) {
        if (vertical == 1) {
          continue;
        }
        printf("cima\n");
      }
      for (horizontal = 0; horizontal < 2; horizontal++) {
        if (horizontal > 0){
          break;
        }
        printf("direita\n");


      }
    }
  }

  int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 2;
    //Exibindo os movimentos
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    moverCavalo(movimentosCavalo);


    return 0;

  }

