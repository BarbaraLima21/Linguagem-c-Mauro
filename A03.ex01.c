#include <stdio.h>

int main() {
    
  
  float notas, media, soma = 0;
  int contador = 0;

  printf("Digite um número (-5 para encerrar): ");
  scanf("%f", &notas);

  while(notas != -5) {
    soma = soma + notas;
    contador = contador + 1;

    printf("Digite um número (-5 para encerrar): ");
    scanf("%f", &notas);
  }
  
 media = soma / contador;
  printf("Resultado da media: %.2f", media);

  return 0;
}