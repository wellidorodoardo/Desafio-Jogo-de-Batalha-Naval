#include <stdio.h>



int main() {



    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};



    int tabuleiro [10][10];

   

    printf ("Tabuleiro Batalha Naval\n");

    printf ("-----------------------\n");

    printf ("|   ");

    printf ("|");



    for (int coluna = 0; coluna < 10; coluna++) {

            for (int linha = 0; linha < 10; linha++){

                    tabuleiro [coluna][linha] = 0;

            }

    }



    for (int coluna = 0; coluna < 10; coluna++) {

        if (coluna == 1 || coluna == 2 || coluna == 3) {

            for (int linha = 0; linha < 10; linha++) {

                if (linha == 1){

                    tabuleiro [coluna][linha] = 3;

                }

            }

        }

    }



     for (int coluna = 0; coluna < 10; coluna++) {

        if (coluna == 7) {

            for (int linha = 0; linha < 10; linha++) {

                if (linha == 6 || linha == 7 || linha == 8){

                    tabuleiro [coluna][linha] = 3;

                }

            }

        }

    }

   

    for (int i = 0; i < 10; i++) {

        printf (" %c |", linha [i]);

    }



    printf ("\n");



    for (int coluna = 0; coluna < 10; coluna++) {

        printf ("| %d |", coluna+1);

        for (int linha = 0; linha < 10; linha++) {

            printf (" %d", tabuleiro [coluna][linha]);

            printf (" |");

        }

       

        printf ("\n");

    }

    return 0;



}