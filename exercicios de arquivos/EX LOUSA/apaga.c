#include <stdio.h>

int main(int argc, char * argv[]) {
 char sn;
 if (argc != 2) {
 fprintf(stderr, "Uso: %s <nomearq>\n", argv[0]);
 return 1;
 }
 printf("Apagar %s? (S/N): ", argv[1]);
 scanf(" %c", &sn);
 if (sn == 'S' || sn == 's') {
 if (remove(argv[1])) {
 fprintf(stderr, "O arquivo %s não pode ser
apagado.\n", argv[1]);
 return 2;
 }
 }
 return 0;
}
