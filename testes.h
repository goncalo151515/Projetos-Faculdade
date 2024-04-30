/*

 * BIBLIOTECAS

*/

#include <stdbool.h>
#include "parques.h"

#ifndef TESTES_H
#define TESTES_H


/*

 * PROTÓTIPOS
 
*/

bool eParqueNovo(Parque* primeiroParque, char* nomeParque);
bool eCapacidadeValida(int capacidade);
bool eCustoValido(float custo1, float custo2, float custo3);
bool eParqueValido(int numParques);

#endif

