/*

 * BIBLIOTECAS
 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "const.h"
#include "parques.h"
#include "testes.h"


Parque* parquesExistentes;

/*

 * IMPLEMENTAÇÃO
 
*/

void parques() {

    char* leituraParque;
    char* nomeParque;
    int capacidadeMax;
    float custo1;
    float custo2;
    float custo3;

    fgets(leituraParque, sizeof(leituraParque), stdin);

    if (leituraParque[strlen(leituraParque) - 1] == CHAR_NEW_LINE) {

        leituraParque[strlen(leituraParque) - 1] = CHAR_NULL;
    }

    if (strlen(leituraParque) == 0) {

        mostraParquesSistema();
    }

    else {

        int numeroParques = devolveNumeroParquesSistema(parquesExistentes);

        sscanf(leituraParque, "%s %d %f %f %f", nomeParque, &capacidadeMax, &custo1, &custo2, &custo3);

        if (!eParqueNovo(parquesExistentes, nomeParque)) {

            printf("parking already exists.\n");

        } else if (!eCapacidadeValida(capacidadeMax)) {

            printf("invalid capacity.\n");

        } else if (!eCustoValido(custo1, custo2, custo3)) {

            printf("invalid cost.\n");

        } else if (!eParqueValido(numeroParques)) {

            printf("too many parks.\n");

        } else {

            adicionaParquesSistema(nomeParque, capacidadeMax, custo1, custo2, custo3);
        }
    }
}

int devolveNumeroParquesSistema(Parque* primeiroParque) {

    Parque* parqueAtual = primeiroParque;

    int contador = 0;

    while (parqueAtual != NULL) {

        contador++;
        parqueAtual = parqueAtual -> proxParque;
    }

    return contador;
}

void mostraParquesSistema() {

    Parque* parqueAtual = parquesExistentes;

    while (parqueAtual != NULL) {

        printf("%s %d %d\n",
        parqueAtual -> parque.nome,
        parqueAtual -> parque.capacidadeMax, 
        parqueAtual -> parque.lugaresDisponiveis);

        parqueAtual = parqueAtual -> proxParque;
    }
}

void adicionaParquesSistema(char* nome, int capacidadeMax, float custo1, float custo2, float custo3) {

    Parque* novoParque = (Parque*) malloc(sizeof(Parque));

    strcpy(novoParque -> parque.nome, nome);
    novoParque -> parque.capacidadeMax = capacidadeMax;
    novoParque -> parque.lugaresDisponiveis = capacidadeMax; 
    novoParque -> parque.custo1 = custo1;
    novoParque -> parque.custo2 = custo2;
    novoParque -> parque.custo3 = custo3;

    novoParque -> proxParque = NULL;

    if (parquesExistentes == NULL) {

        parquesExistentes = novoParque;

    } else {

        Parque* atual = parquesExistentes;

        while (atual -> proxParque != NULL) {

            atual = atual -> proxParque;
        }
        atual -> proxParque = novoParque;
    }
}