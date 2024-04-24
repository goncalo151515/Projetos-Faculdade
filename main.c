/*

 * BIBLIOTECAS

*/

#include <stdlib.h>
#include <stdbool.h>
#include "const.h"



char comando;

/*

 * CORPO PRINCIPAL DO PROGRAMA

*/

int main() {

    while(true) {

        comando = getchar();

        switch (comando) {

            case COMANDO_P:
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
        }
    }
    return EXIT_FAILURE;
}