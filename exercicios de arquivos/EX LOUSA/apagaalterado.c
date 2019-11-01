#include <stdio.h>

/*
Altere o programa apaga.c de tal forma que seja possivel apagar mais de um arquivo a cada execução do programa;
*/

int main(int argc, char * argv[]) {

    char sn;

    /*
    if (argc != 2) {

        fprintf(stderr, "Uso: %s <nomearq>\n", argv[0]);
        return 1;
    }
    */
    int i;

    for (i = 1; i < argc; i++){


        printf("Apagar %s? (S/N): ", argv[i]);
        scanf(" %c", &sn);

        if (sn == 'S' || sn == 's') {

        if (remove(argv[i])) {

            fprintf(stderr, "O arquivo %s não pode ser apagado.\n", argv[i]);

        }
    }

    }


    return 0;
}
