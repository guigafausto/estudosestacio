#include <stdio.h>

int main(){
    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado + 20;
    resultado += 20;
    printf("Resultado da soma: %d \n", resultado);

    // resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado da subtração: %d \n", resultado);

    // resultado = resultado * 5;
    resultado *= 5;
    printf("Resultado da multiplicação: %d \n", resultado);

    // resultado = resultado / 2;
    resultado /= 2;
    printf("Resultado da divisão: %d \n", resultado);





}