//NDHU CSIE Lab of programming 1, week 9.2

//Give you a 2-D array represent a maze, in this maze, 1 is wall and 0 is a space you can walk on. You can move 4 direction, up, down, left and right.
//Write a program to see if a maze has a way from start to the end.
//input 
//First lint pf input will be a integer number represent size of the maze.Follow by n rows and n columns every row. In the maze, left top is the start and right button is end.
//output
//if there is a way from start to the end then print "Yes", print "No" if not .

#include <stdio.h>
#define MAX 100

//function returns 1 if there is a way, other wise returns 0
int check_way(int maze[][MAX], int n, int x, int y){ //(x,y) is the current position
if(x >= n || x < 0) //if current position is out of bounds return 0
    return 0;
if(y >= n || y < 0)
    return 0;

if(x == n-1 && y == n-1 && maze[x][y] == 0){ //if current position is the END position then return 1
    return 1;
}
else if(maze[x][y] == 1 || maze[x][y] == 2){ //if current position is a wall or already visited return 0
    return 0;
}
else if(maze[x][y] == 0){ //if current position is 0, MOVE in all 4 directions
    //printf("(%d, %d)->", x, y);
    maze[x][y] = 2; //mark the current position as visited
    return check_way(maze, n, x+1, y) || check_way(maze, n, x-1, y) || check_way(maze, n, x, y+1) || check_way(maze, n, x, y-1);
    }
}


int main(){
int n, i, j;
int maze[MAX][MAX]; //declare 2D maze of 100x100

scanf("%d", &n); //read the value of n
for(i = 0; i < n; i++){ //read the values of maze
    for(j = 0; j < n; j++){
        scanf("%d", &maze[i][j]);
    }
}

if(check_way(maze, n, 0, 0)) //check if there is a way
    printf("Yes");
else
    printf("No");
return 0;
}
