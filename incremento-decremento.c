#include <stdio.h>

int main(){
   
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--    
    */

    int numero1 = 1, resultado;


    printf("Antes incremento: %d\n", numero1);
    //numero1 = numero + 1
    //nuemro1 += 1;
    //pos incremento:
    //resultado = numero1;
    //numero1++;
    
    resultado = numero1++;
    printf("Apos pós-incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos pré-incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);


    //numero1++;
    //printf("Após incremento: %d\n", numero1);

    //numero1 = numero1 - 1
    //numero1--;
    //printf("Após o decremento: %d\n", numero1);


    resultado = numero1--;
    printf("Apos pós-decremento - Numero 1: %d - Resultado %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos pré-decremento - Numero 1: %d - Resultado %d\n", numero1, resultado);

}