/* my_io.h
* Funções oferecidas pelo módulo my_io.c */

#ifndef _MY_IO_H
#define _MY_IO_H
#define MAX_LENGTH 120 // comprimento máximo da entrada

#include <stdbool.h>

/* Função read_line: lê uma linha do teclado cujo tamanho máximo é
* dado pelo 2º argumento e a armazena no 1º argumento */
void read_line (char *, int);

/* Função read_int: lê uma linha do teclado e armazena em seu
* parâmetro se a linha contiver um inteiro e devolve verdadeiro,
* caso contrário, devolve falso */
bool read_int (int *);

/* Função read_float: lê uma linha do teclado e armazena em seu
* parâmetro se a linha contiver um float e devolve verdadeiro,
* caso contrário, devolve falso */
bool read_float (float *);

/* Função read_double: lê uma linha do teclado e armazena em seu
* parâmetro se a linha contiver um double e devolve verdadeiro,
* caso contrário, devolve falso */
bool read_double (double *);


#endif
