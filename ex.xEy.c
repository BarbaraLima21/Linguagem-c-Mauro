#include <stdio.h>

int main(){
    int x, y;
    printf("digite o primeiro numero: ");
    scanf("%d", &x);
    printf("diite o segundo numero: ");
    scanf("%d", &y);

    printf("%d",(x > y) ? x : y);

    return 0;

}