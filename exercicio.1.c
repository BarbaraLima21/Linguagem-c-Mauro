#include <stdio.h>

int main()
{
    float imc;
    printf("digite seu imc: ");
    scanf("%f", &imc);
    
if (imc >= 18.5) {
    if (imc <= 24.9) {
        puts("Intervalo Normal");
    } else {
        puts("Fora do Intervalo normal");
    }
}   else {
        puts("Fora do Intervalo normal");
}

    return 0;

}