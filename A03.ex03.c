#include <stdio.h>

int main() {

    float raio, diametro, circunferencia, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    if (raio > 0) {

        diametro = 2 * raio;

        circunferencia = 2 * 3.14 * raio;
        
        area = 3.14 * raio * raio;
        
        printf("Diametro: %.2f\n", diametro);
        printf("Circunferencia: %.2f\n", circunferencia);
        printf("Area: %.2f\n", area);
    } else {
        printf("Valor do raio invalido. O raio deve ser um numero positivo.\n");
    }

    return 0;
}