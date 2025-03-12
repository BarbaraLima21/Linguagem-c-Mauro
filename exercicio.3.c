#include <stdio.h>

int main(){

    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5){
        printf("IMC: %.2f\n Diagnostico: Baixo peso\n", imc);
    } else if (imc >= 18.5 && imc < 25){
        printf("IMC: %.2f\nDiagnostico: Intervalo normal\n", imc);
    } else if (imc >= 25 && imc < 30){
        printf("IMC: %.2f\nDiagnostico: Sobrepeso\n", imc);
    } else if (imc >= 30 && imc < 35){
        printf("IMC: %.2f\nDiagnostico: Obesidade classe I\n", imc);
    } else if (imc >= 35 && imc < 40){
        printf("IMC: %.2f\nDiagnostico: Obesidade classe II\n", imc);
    } else{
        printf("IMC: %.2f\nDiagnostico: Obesidade classe III\n", imc);
    }

    return 0;
}