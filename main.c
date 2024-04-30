/*

 * BIBLIOTECAS

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "const.h"
#include "parques.h"



char comando;

/*

 * CORPO PRINCIPAL DO PROGRAMA

*/

int main() {

    Parque* parquesExistentes = (Parque*) malloc(sizeof(Parque));

    while(true) {

        comando = getchar();

        if (comando == CHAR_NEW_LINE) continue;

        switch (comando) {

            case COMANDO_P:

                parques();
            break;
            case COMANDO_E:
            break;
            case COMANDO_S:
            break;
            case COMANDO_V:
            break;
            case COMANDO_F:
            break;
            case COMANDO_R:
            break;
            case COMANDO_Q:

                return EXIT_SUCCESS;

            default:
        
                printf("command not found: %c\n", comando);
            break;
        }
    }
    return EXIT_FAILURE;
}