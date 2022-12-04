#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"
#include "funcao.c"



int main (void){
    ContaB *conta1;
    int alea = rand();

    conta1 = Cria(alea, 0.0);
    
    printf("Bem vindo, sua conta foi criada!!\nConfira abaixo os seus dados.\n");
    printf("\nNumero da conta: %d\n", conta1->num);
    printf("Seu saldo incial: %.2f\n", conta1->saldo);

    
    printf("\nApos o deposito\n");
    Deposito(conta1, 0);
    Imprime(conta1);

    printf("\nApos o saque\n");
    Imprime (conta1);
    Saque(conta1, 200);
    
    return 0;
}
