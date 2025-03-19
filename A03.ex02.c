#include <stdio.h>

int main() {
    int a, b, c;

    while (1) {
        printf("Digite três valores inteiros (-1 para sair): ");
        scanf("%d", &a);
        
        if (a == -1) {
            printf("verificação encerrada\n");
            
        }

        scanf("%d %d", &b, &c);

        if ((a * a == b * b + c * c) || 
            (b * b == a * a + c * c) || 
            (c * c == a * a + b * b)) {
            printf("Os valores formam um triângulo retângulo!\n");
        } else {
            printf("Os valores NÃO formam um triângulo retângulo.\n");
        }
    }
    return 0;
}