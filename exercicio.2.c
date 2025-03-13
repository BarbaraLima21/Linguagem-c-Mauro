#include <stdio.h>

int main(){

    float nota;
    printf("digite sua nota: ");
    scanf("%f", &nota);

    if(nota >= 9.0 && nota <= 10.0){
        puts("A");
    }
    else if(nota >= 8.0 && nota <= 9.0){
        puts("B");
    }
    else if(nota >= 7.0 && nota <= 8.0){
        puts("C");
    }
    else if(nota >= 6.0 && nota <= 7.0){
        puts("D");
    }
    else if(nota >= 0.0 && nota <= 6.0){
        puts("F");
    }
    else{
        printf("numero invalido\n");
    }


    return 0;

}