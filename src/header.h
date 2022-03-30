// buildBoard.c
int build_sudoku(int matrix[9][9],char fil[20]);

// displayBoard.c
void print_sudoku(int matrix[][9]);

// numUnassigned.c
int number_unassigned(int matrix[][9],int *row, int *col);

// isSafe.c
int is_safe(int matrix[][9],int n, int r, int c);

// solveBoard.c
int solve_sudoku(int matrix[][9]);
