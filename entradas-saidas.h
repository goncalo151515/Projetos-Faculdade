/*

 * BIBLIOTECAS

*/

#include "const.h"


/*

 * ESTRUTURAS DE DADOS

*/

#ifndef ENTRADASAIDAS_H
#define ENTRADASAIDAS_H

typedef struct {

    int dia;
    int mes;
    int ano;

} InfoData;

typedef struct {

    int hora;
    int minutos;

} InfoHoras;

typedef struct {

    char nomeParque[STRING_PADRAO];
    char matricula[STRING_PADRAO];
    InfoData data;
    InfoHoras horas;
    
} InfoEntrada;

typedef struct Entrada {

    InfoEntrada entrada;
    struct Entrada* proxEntrada;

} Entrada;

typedef struct {

    char nomeParque[STRING_PADRAO];
    char matricula[STRING_PADRAO];
    InfoData data;
    InfoHoras horas;

} InfoSaida;

typedef struct Saida {

    InfoSaida saida;
    struct Saida* proxSaida;

} Saida;


/*

 * PROTÓTIPOS

*/

#endif