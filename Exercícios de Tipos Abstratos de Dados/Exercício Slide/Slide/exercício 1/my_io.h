/* my_io.h
* Fun��es oferecidas pelo m�dulo my_io.c */

#ifndef _MY_IO_H
#define _MY_IO_H
#define MAX_LENGTH 120 // comprimento m�ximo da entrada

#include <stdbool.h>

/* Fun��o read_line: l� uma linha do teclado cujo tamanho m�ximo �
* dado pelo 2� argumento e a armazena no 1� argumento */
void read_line (char *, int);

/* Fun��o read_int: l� uma linha do teclado e armazena em seu
* par�metro se a linha contiver um inteiro e devolve verdadeiro,
* caso contr�rio, devolve falso */
bool read_int (int *);

/* Fun��o read_float: l� uma linha do teclado e armazena em seu
* par�metro se a linha contiver um float e devolve verdadeiro,
* caso contr�rio, devolve falso */
bool read_float (float *);

/* Fun��o read_double: l� uma linha do teclado e armazena em seu
* par�metro se a linha contiver um double e devolve verdadeiro,
* caso contr�rio, devolve falso */
bool read_double (double *);


#endif
