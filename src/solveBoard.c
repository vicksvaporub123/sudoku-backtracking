#include "header.h"

int solve_sudoku(int matrix[][9]){
/*
Function solves the sudoku by implementing BACKTRACKING
*/
    int row;
    int col;
    //if all cells are assigned then the sudoku is already solved
    //pass by reference because number_unassigned will change the values of row and col
    if(number_unassigned(matrix,&row, &col) == 0)
        return 1;
    int n,i;
    //number between 1 to 9
    for(i=1;i<=9;i++){
        //if we can assign i to the cell or not
        //the cell is matrix[row][col]
        if(is_safe(matrix,i, row, col)){
            matrix[row][col] = i;
            //backtracking
            if(solve_sudoku(matrix))
                return 1;
            //if we can't proceed with this solution
            //reassign the cell
            matrix[row][col]=0;
        }
    }
    return 0;
}