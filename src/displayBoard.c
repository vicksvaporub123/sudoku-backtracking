#include <stdio.h>
#include "header.h"

void print_sudoku(int matrix[][9]){
/*
Function designed to display sudoku board
*/
    for(int i=0;i<9;i++){
        if(i%3==0 && i!=0)
            printf("\t\t--------------------------------\n\t\t");
        else
            printf("\t\t");
        for(int j=0;j<9;j++){
            if(j%3==0 && j!=0)
                printf(" | ");
            if(j!=8)
                printf(" %d ",matrix[i][j]);
            else
                printf(" %d\n",matrix[i][j]);
            
        }
    }
    printf("\n\n");
} 