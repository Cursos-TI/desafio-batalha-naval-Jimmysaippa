#include <stdio.h>
 int main(){

        int tabulero[10][10] = {0};
        char linhas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
        // navio 1

        tabulero[2][3]=3, tabulero[2][4] = 3, tabulero[2][5] = 3;

         // navio 2
        tabulero[5][3] = 3, tabulero[0][3] = 3,tabulero[8][9] = 3;

        printf("BATALHA NAVAL...\n");

        printf("  A B C D E F G H I J ");
        printf(" ");

        // linha das colunas
        for (int i = 0; i < i; i++)
        {
            printf("%c", linhas[i]);
        }
        
        // exibindo tabuleiro
        for (int i = 0; i < 10; i++)
        {
            printf(" \n");
            printf("%d", i);
            for (int j = 0; j < 10; j++)
            {
                printf(" ");
                printf("%d", tabulero[i][j]);
            }
            

        }
        

    return 0;
 }

