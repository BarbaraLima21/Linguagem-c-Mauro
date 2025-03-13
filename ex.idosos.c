#include <stdio.h>

int main(){
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf((idade >= 60) ? "Pode ser atendido" : "Não pode ser atendido");

    return 0;
}