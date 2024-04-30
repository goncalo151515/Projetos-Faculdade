/*

 * BIBLIOTECAS
 
*/

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parques.h"
#include "const.h"


/*

 * IMPLEMENTAÇÃO
 
*/

bool eParqueNovo(Parque* primeiroParque, char* nomeParque) {

    Parque* parqueAtual = primeiroParque;

    while (parqueAtual != NULL) {

        if (strcmp(parqueAtual -> parque.nome, nomeParque) == 0) {

            return false;
        }

        parqueAtual = parqueAtual -> proxParque;
    }

    return true;
} 

bool eCapacidadeValida(int capacidade) {

    return capacidade > CAP_INVALIDA;
}

bool eCustoValido(float custo1, float custo2, float custo3) {

    return (custo1 > CUSTO_INVALIDO && custo1 < custo2 && custo2 < custo3);
}

bool eParqueValido(int numParques) {

    return numParques < MAX_NUM_PARQUES;
}

