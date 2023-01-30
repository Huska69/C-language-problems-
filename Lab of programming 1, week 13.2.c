//NDHU CSIE Lab of programming 1, week 13.2

//Give you a matrix. Please output the elements in clockwise spiral order suing Recursion.
//Input
//First line is two integers n and m, shows number of rows and number of columns.
//Followed m lines are content of the matrix.
//Output
//Elements of the matrix in clockwise spiral order.

#include <stdio.h>

void way (int row, int col, int arr[row][col], int i, int j, int p){

    if(arr[i][j]!=p){
    printf("%d ", arr[i][j]);
    arr[i][j]=p;
    }

    if (j<col-1 && arr[i][j+1]!=p){ //right
    way(row, col, arr, i, j+1, p);
    }

    else if (i<row-1 && arr[i+1][j]!=p){ //down
    way(row, col, arr, i+1, j, p);
    }

    else if (j>0 && arr[i][j-1]!=p){ //left
    way(row, col, arr, i, j-1, p);
    }

    else if (i>0 && arr[i-1][j]!=p){ //up
    up(row, col, arr, i-1, j, p);
    }
}

void up (int row, int col, int arr[row][col], int i, int j, int p){

    if(arr[i-1][j]!=p){
            printf("%d ", arr[i][j]);
            arr[i][j]=p;
                if (i>0 && arr[i-1][j]!=p){ //up
                up(row, col, arr, i-1, j, p);
            }
        }
        else{
        way(row, col, arr, i-1, j, p);
        }
}

int main() {

int row, col, p=100;
scanf("%d %d", &row, &col);
int arr[row][col];
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
way(row, col, arr, 0, 0, p);
return 0;
}
