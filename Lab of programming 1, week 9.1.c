//NDHU CSIE Lab of programming 1, week 9.1

//A sparse matrix is a matrix in which most of the elements are zero. Representing a sparse matrix by a 2D array leads to wastage of lots of memory as zeroes in the matrix are of no use in most of the cases. 
//So, we can compress the sparse matrix by only store non-zero elements. This means storing non-zero elements with triples- (Row, Column, value).
//Input 
//First line consists 3 integers. First and second integers shows the dimensions of original matrix. Third integer k shows number of non-zero elements. Followed k lines are content of the sparse matrix. Each line consists 3 integers, row number, column number, and data.
//output
//Output original matrix. Attach a white space behind each element.

#include "stdio.h"
#include "stdlib.h"

int main(){
    int row, column, element;

    scanf("%d %d %d", &row, &column, &element);
    int matrix[row][column];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            matrix[i][j] = 0;
        }
    }

    int r, c, e;
    for (int i = 0; i < element; ++i) {
        scanf("%d %d %d", &r, &c, &e);

        matrix[r][c] = e;

    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d ", matrix[i][j]);

        }
        printf("\n");
    }
}
