/*

 * BIBLIOTECAS

*/

#include "const.h"


/*

 * ESTRUTURAS DE DADOS

*/

#ifndef PARQUES_H
#define PARQUES_H

typedef struct {

    char nome[STRING_PADRAO];
    int capacidadeMax;
    int lugaresDisponiveis;
    float custo1;
    float custo2;
    float custo3;

} InfoParque;

typedef struct Parque {

    InfoParque parque;
    struct Parque* proxParque;

} Parque;



/*

 * VARIAVEIS GLOBAIS

*/

extern Parque* parquesExistentes;

/*

 * PROTÓTIPOS

*/

void parques();
void mostraParquesSistema();
void adicionaParquesSistema(char* nome, int capacidadeMax, float custo1, float custo2, float custo3);

int devolveNumeroParquesSistema(Parque* primeiroParque);

#endif