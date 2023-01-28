//NDHU CSIE Lab of programming 1, week 9.3

//Give you a matrix. Please output the elements in clockwise spiral order.
//Input
//First line is two integers n and m, shows number of rows and number of columns.
//Followed m lines are content of the matrix.
//Output
//Elements of the matrix in clockwise spiral order.

#include <stdio.h>

// this function get number of rows, number of columns and matrix_m it self to print spiral matrix
void get_spiral_matrix(int m, int n, int matrix_m[10][10]){
// variable for starting index ending index for rows and columns
int i, s_row = 0, s_col = 0;
// loop until all rows and columns get explored
while (s_row < m && s_col < n){
    //Printing first row from the after every loop
    for (i = s_col; i < n; ++i){
        printf("%d ", matrix_m[s_row][i]);
}
// increament value of row number
s_row++;
// Print the last column or vertical values from right side of the matrix_m
// or Print value of last column from top to down
for (i = s_row; i < m; ++i){
    printf("%d ", matrix_m[i][n - 1]);
}
// decrease value of n by 1 to for next loop
n--;

// Print last rows from left to right
if (s_row < m){
    for (i = n - 1; i >= s_col; --i){
        printf("%d ", matrix_m[m - 1][i]);
    }
    m--;
}

// printing first column or left side column from bottom to top
if (s_col < n){
    for (i = m - 1; i >= s_row; --i){
        printf("%d ", matrix_m[i][s_col]);
}
// after that increament value of s_col
        s_col++;
        }
    }
}

// main function for starting execution of code
int main(){
// variable for storing the value of number of rows in m and number of columns in n
int i, j, m, n;
// you can change this size according to ypur requirment here it take max 10x 10 matrix
int matrix_m[10][10];
// getting the Number of rows and Number of columns from user
scanf("%d %d", &m, &n);
// loop m times for getting data or elements for m rows
for (i = 0; i < m; i++){
    // getting value of all columns of ith rows
        for (j = 0; j < n; j++){
        scanf("%d", &matrix_m[i][j]);
    }
}
// calling the function for printing matrix in spiral way
get_spiral_matrix(m,n,matrix_m);

return 0;
}
