//NDHU CSIE Lab of programming 1, week 12.1

//The Game of Life is not your typical computer game. It is a cellular automaton, and was invented by Cambridge mathematician John Conway.
//This game became widely known when it was mentioned in an article published by Scientific American in 1970. 
//It consists of a grid of cells which, based on a few mathematical rules, can live, die or multiply. 
//Depending on the initial conditions, the cells form various patterns throughout the course of the game.
//Rules:
//Each cell with one or no neighbors dies, as if by solitude.
//Each cell with four or more neighbors dies, as if by overpopulation.
//Each cell with two or three neighbors survives.
//For a space that is empty or unpopulated:
//Each cell with three neighbors becomes populated.

#include <stdio.h>
#include <string.h>

int Counter(char mat[100][100], int i, int j, int row, int col){
    int count = 0;
    if(j + 1 < col && mat[i][j+1] == '1') //right 
        count++;
    if(i + 1 < row && j + 1 < col && mat[i+1][j+1] == '1') //bottom right
        count++;
    if(i + 1 < row && mat[i+1][j] == '1') //below 
        count++;
    if(i + 1 < row && j - 1 >= 0 && mat[i+1][j-1] == '1') //bottom left
        count++;
    if(j - 1 >= 0 && mat[i][j-1] == '1') //left 
        count++;
    if(i - 1 >= 0 && j - 1 >= 0 && mat[i-1][j-1] == '1') //top left 
        count++;
    if(i - 1 >= 0 && mat[i-1][j] == '1') //above
        count++;
    if(i - 1 >= 0 && j + 1 < col && mat[i-1][j+1] == '1') //top right
        count++;
        return count;
}

void copycontent(char mat[100][100], char newmat[100][100], int row, int col){
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            mat[r][c] = newmat[r][c];
        }
    }
}


int main (){
    int n, row = 0, k, r, c, ct;
    
    scanf("%d", &n);
    char mat[100][100], newmat[100][100] = {'\0'};

    while(scanf("%s", mat[row]) != EOF) row++;
    int col = strlen(mat[0]);
    for(k = 1; k <= n; k++){ //n iteration loop
        for(r = 0; r < row; r++){
            for(c = 0; c < col; c++){
                ct = Counter(mat, r, c, row, col);
                if(ct >= 4 || ct <= 1){ //applying rules.
                    newmat[r][c] = '0';
                }
                else if(mat[r][c] == '0' && ct == 3){
                    newmat[r][c] = '1';
                }
                else{
                    newmat[r][c] = mat[r][c];
                }
            }
        }
        copycontent(mat, newmat, row, col);
    }
    for(int i = 0; i < row; i++){
        printf("%s\n", newmat[i]);
    }
    return 0;
}
