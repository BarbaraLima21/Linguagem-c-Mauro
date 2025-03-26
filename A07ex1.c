#include <stdio.h>

int main() {
  char tamanho;

  printf("Digite o tamanho recebido, F para encerrar: ");
  tamanho = getchar();
  getchar();

  int quantidadeP = 0;
  int quantidadeM = 0;
  int quantidadeG = 0;

  while(tamanho != 'F' ) {
    if(tamanho == 'P' ) {
      quantidadeP++;
    }
    if(tamanho == 'M' ) {
      quantidadeM++;
    }
    if(tamanho == 'G' ) {
      quantidadeG++;
    }

    printf("Digite o tamanho recebido, F para encerrar: ");
    tamanho = getchar();
    getchar();
    
  }
    
    printf("P: %d M: %d G: %d", quantidadeP, quantidadeM, quantidadeG);
    return 0;
}