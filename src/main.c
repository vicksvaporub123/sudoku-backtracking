#include <stdio.h>
#include "header.h"

int main(){
    int matrix[9][9],choice;
    char fil[20];
    
    do{
        printf("\t=============\n");
        printf("\tSUDOKU SOLVER\n");
        printf("\t=============\n");
        printf("\t1. Solve A Sudoku\n");
        printf("\t0. EXIT\n\n");
        printf("\tEnter Choice: ");
        scanf("%d",&choice);
        
        if(choice==1){
            printf("\n\n\tEnter Filename: ");
            fflush(stdin);
            scanf("%[^\n]s",fil);
            build_sudoku(matrix,fil);
            printf("\tInput Sudoku: \n");
            print_sudoku(matrix);
            printf("\tSolved Sudoku: \n");
            solve_sudoku(matrix);
            print_sudoku(matrix);
        }        
        else if(choice!=0 && choice!=1){
            printf("Invalid Choice");
        }
    }while(choice!=0);

    printf("\tClosed Program...\n");   
    return 0;
}