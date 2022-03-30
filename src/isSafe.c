#include "header.h"

int is_safe(int matrix[][9],int n, int r, int c){
    int i,j;
    //checking in row
    for(i=0;i<9;i++){
        //there is a cell with same value
        if(matrix[r][i] == n)
            return 0;
    }
    //checking column
    for(i=0;i<9;i++){
        //there is a cell with the value equal to i
        if(matrix[i][c] == n)
            return 0;
    }
    //checking sub matrix
    int row_start = (r/3)*3;
    int col_start = (c/3)*3;
    for(i=row_start;i<row_start+3;i++){
        for(j=col_start;j<col_start+3;j++){
            if(matrix[i][j]==n)
                return 0;
        }
    }
    return 1;
}