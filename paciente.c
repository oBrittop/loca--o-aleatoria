#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "paciente.h"

#define andar 5
#define leitos 10
void alocacao_paciente(paciente_t *paciente, char *nome, short idade) {
    int a = 0, l = 0;
    
    strncpy(paciente->nome, nome, sizeof(paciente->nome) - 1);
    paciente->nome[ sizeof(paciente->nome) - 1] = '\0'; // acresenta o caractere nulo 
    paciente->idade = idade;

    a = 1+ rand() % andar; // cria um numero aletorio para o andar 1 a 5
    l = 1+ rand() % leitos; // cria o numero do leito  1 a 10

    paciente->leito = (a * 100) + l; // 100 a 500 + 1 a 10 = leito

    
    
}