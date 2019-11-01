#include <stdio.h>
#include <stdbool.h>
#include "my_io.h"

void read_line (char line[], int max_length)
{
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (i < max_length)
            line[i++] = ch;
    }
    line[i] = '\0';
}

bool read_int (int * val)
{
    char line[MAX_LENGTH + 1];
    read_line(line, MAX_LENGTH);
    return (sscanf(line, "%d", val) == 1);
    //sscanf retorna o numero de itens lidos. Como é pra ser só um numero entao se ele retornar só 1,
    //quer dizer que está certo. Aí se sscanf() == 1 for verdadeiro, vai ser true e entao a funcao retorna true.

}

bool read_float (float * val)
{
    char line[MAX_LENGTH + 1];
    read_line(line, MAX_LENGTH);
    return (sscanf(line, "%f", val) == 1);
}


bool read_double (double * val)
{
    char line[MAX_LENGTH + 1];
    read_line(line, MAX_LENGTH);
    return (sscanf(line, "%lf", val) == 1);
}

