#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

struct funcao{
    int num;
    float saldo;
};

ContaB *Cria(int num, float saldo) {
    ContaB *conta = (ContaB*) malloc(sizeof(ContaB));
    conta->num;
    conta->saldo;
    return conta;
}

void Deposito (ContaB *conta, float valor) {
    conta->saldo += valor;
}

void Saque (ContaB *conta, float valor) {
    if(conta->saldo >= valor && valor > 0){
        conta->saldo = conta->saldo - valor;
    }
    
    else{
        printf("Saque nao realizado!\n");
    }
}

void Imprime (ContaB *conta) {
    printf("Numero: %d\n", conta->num);
    printf("Saldo: %.2f\n", conta->saldo);
}
