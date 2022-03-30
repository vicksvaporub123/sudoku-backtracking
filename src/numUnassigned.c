#include "header.h"

int number_unassigned(int matrix[][9],int *row, int *col){
    int num_unassign = 0;
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            //cell is unassigned
            if(matrix[i][j] == 0){
                //changing the values of row and col
                *row = i;
                *col = j;
                //there is one or more unassigned cells
                num_unassign = 1;
                return num_unassign;
            }
        }
    }
    return num_unassign;
}