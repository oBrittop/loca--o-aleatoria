#include<stdio.h>
#include<stdlib.h>
#include "paciente.h"
#include"paciente.c"
#include<time.h>

int main(void) {
    
    srand(time(NULL));// Gera a semente  aleatoria baseada nas horas atuais 
    // gera a semente para a funcao paciente.c
    // srand tem q ser feita antes da funcao rand

    paciente_t paciente;

    alocacao_paciente(&paciente, "João Silva", 30);

    

    printf("Digite no nome do paciente :\n");
    fgets(paciente.nome, sizeof(paciente.nome), stdin);

    printf("Digite a idade do paciente : \n");
    scanf("%hd", &paciente.idade);


    printf("Exbindodo pacientes: \n Nome: %s  \n Idade :%hd anos \n.", paciente.nome, paciente.idade );

    printf(" leito:  %d\n",paciente.leito);
    printf("Presione enter para finalizar");

    return 0;
}   

