#include <stdio.h>

int main() {
    int a, b, c;
    int continuar = 1;

    while (continuar) {
        printf("Digite o primeiro valor (-1 para sair): ");
        scanf("%d", &a);

        if (a == -1) {
            continuar = 0;
        } else {
            printf("Digite o segundo valor (-1 para sair): ");
            scanf("%d", &b);

            printf("Digite o terceiro valor (-1 para sair): ");
            scanf("%d", &c);

            if (a > 0) {
             if (b > 0) {
                if(c > 0) {
                  if (a * a == b * b + c * c) {
                      printf("Os valores formam um triângulo retângulo!\n");
                  } else {
                      if (b * b == a * a + c * c) {
                           printf("Os valores formam um triângulo retângulo!\n");
                      } else {
                          if(c * c == a * a + b * b){
                              printf("Os valores formam um triângulo retângulo!\n");
                          } else{
                              printf("Os valores NÃO formam um triângulo retângulo.\n");
                          }
                      }
                  }
                } else {
                  printf("Os valores digitados não formam um triângulo válido.\n");
                }
              } else {
                printf("Os valores digitados não formam um triângulo válido.\n");
              }
            } else {
              printf("Os valores digitados não formam um triângulo válido.\n");
            }
        }
    }
    return 0;
}
