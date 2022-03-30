#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

int build_sudoku(int matrix[9][9],char fil[20]){
/*
Function reads the sudoku from the text file and loads it onto the 9x9 array for solving
    --checks filename if it does not have a .txt in the file name it will add one and proceed to open the file and if it does have .txt it'll proceed to open file
    --checks validity of the filename entered
    --reads each line as a string and extracts a number from the string converts it to integer and stores it to the 9x9 array    
*/
    
    if(strstr(fil,".txt")==NULL){ //checks if user already added .txt extension to the file.......strstr() verifies substring's existence in a string and returns NULL if not found
        strcat(fil,".txt");
    }
        
    printf("\n\n\tBuilding Sudoku from file %s...\n",fil);
    FILE *fp = fopen(fil,"r");
    int i=0;
    char buffer[19];
    if(fp!=NULL){
        while(!feof(fp)){
            fgets(buffer,19,fp); //reads a line from the file and stores it into the buffer
            matrix[i][0] = atoi((strtok(buffer,","))); //in order to get the current line into strtok

            for(int j=1;j<9;j++){
                matrix[i][j] = atoi(strtok(NULL,",")); //for the next 8 elements in the row
            }
            i++; //to proceed to next row
        }
        printf("\tSudoku Built...\n");
        fclose(fp);
        printf("\n\n");
        return 0;
    }
    else{
        printf("\tISSUE WITH FILE:\n");
        printf("\tPlease Re-check filename\n");
        printf("\n\n");
        return 0;
    }     
}