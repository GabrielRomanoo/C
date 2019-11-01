/*
12. Criar um programa em C para gerenciar um sistema de reservas de mesas em uma casa de
espetáculo. A casa possui 30 mesas de 4 lugares cada. O programa deverá permitir que o
usuário escolha uma mesa (1 a 30) e forneça a quantidade de lugares desejados (um valor
entre 1 e 4). O algoritmo deverá informar se foi possível realizar a reserva e atualizar o
número de lugares disponíveis. Se não for possível, o programa deverá emitir uma
mensagem. O programa pode aceitar mais de uma reserva para a mesma mesa, desde que
haja cadeiras disponíveis na mesa. O programa deve terminar quando o usuário digitar 0
(zero) para o número da mesa ou quando todos os 120 lugares estiverem ocupados. No
final o programa deverá exibir o número da mesa e a quantidade de lugares ocupados das
mesas com reserva e o percentual de ocupação das mesas do restaurante.
*/

#include <stdio.h>

int main() {

    int i, j, mesa[30], perc, cond, contador = 0, cond2;

    for(i=0;i<30;i++){
        mesa[i] = 0;
    }

    i = 0;

    do{
        i = 0;
        j = 0;

        printf("Informe a mesa de 1 ate 30: \n");
        scanf("%d", &i);

        if(i=0){
            cond = 5;
            break;
        }

        i = i - 1;


        printf("Forneca a quantidade de lugares desejados de 1 ate 4: \n");
        scanf("%d", &j);

        if(j = 0){
            cond = 5;
            break;
        }

        if(mesa[i] + j > 4){
            printf("Nao ha lugares suficientes \n");
        } else {
            mesa[i] = j;
        }

        if( mesa[0] == 4 && mesa[1] == 4 && mesa[2] == 4 && mesa[3] == 4 &&  mesa[4] == 4 && mesa[5] == 4 && mesa[6] == 4 && mesa[7] == 4 && mesa[8] == 4 && mesa[9] == 4 && mesa[10] == 4 && mesa[11] == 4 && mesa[12] == 4 && mesa[13] == 4 && mesa[14] == 4 && mesa[15] == 4 && mesa[16] == 4 && mesa[17] == 4 && mesa[18] == 4 && mesa[19] == 4 && mesa[20] == 4 && mesa[21] == 4 && mesa[22] == 4 && mesa[23] == 4 && mesa[24] == 4 && mesa[25] == 4 && mesa[26] == 4 && mesa[27] == 4 && mesa[28] == 4 && mesa[29] == 4){
            cond = 5;
            break;
        }


        contador += 1;

    }while(cond = 5);

    return 0;
}
