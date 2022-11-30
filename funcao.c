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
    conta->saldo -= valor;
}

void Imprime (ContaB *conta) {
    printf("Numero: %d\n", conta->num);
    printf("Saldo: %f\n", conta->saldo);
}



int main (void){
    ContaB *conta1;

    int alt = rand() % 100;
    conta1 = Cria(alt, 0.00);
    
    printf("Bem vindo, sua conta foi criada!!\n");
    
    printf("\nNumero da conta: %d\n", conta1->num);
    
    printf("Seu saldo incial: %f\n", conta1->saldo);

    printf("\nAntes da movimentacao:\n ");
    Imprime(conta1);
    
    Deposito(conta1, 500);
    printf("\nApos o deposito:\n ");
    Imprime(conta1);

    Saque(conta1, 70);
    printf("\nApos o saque: \n");
    Imprime (conta1);
    
    return 0;
}

