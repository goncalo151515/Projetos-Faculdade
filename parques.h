/*

 * BIBLIOTECAS

*/

#include "const.h"


/*

 * ESTRUTURAS DE DADOS

*/

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

 * PROTÓTIPOS

*/