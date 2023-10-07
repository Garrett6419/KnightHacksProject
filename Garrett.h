#include <stdio.h>
#include <stdlib.h>

const int NUMMOVES = 8;
const int DX[] = {-1,-1,-1,0,0,1,1,1};
const int DY[] = {-1,0,1,-1,1,-1,0,1};

typedef struct block{
  char name ;
  int numBlocks ;
  int numFlags ;
}block ;


// void checkBlocks(block** array, int row, int col, int x, int y) ;
// void checkFlags(block** array, int row, int col, int x, int y) ;


/*
void checkBlocks(block** array, int row, int col, int x, int y) {
    int numBlocks = 0 ;
    for(int i = 0 ; i < NUMMOVES ; i++) {
        if(x+DX[i] >= row || x+DX[i] < 0) {
            continue ;
        }
        if(y+DY[i] >= col || y+DY[i] < 0) {
            continue ;
        }
        if(array[x+DX[i]][y+DY[i]].name == 'B') {
            numBlocks++ ;
        }
    }
    array[x][y].numBlocks = numBlocks ;
}

void checkFlags(block** array, int row, int col, int x, int y) {
    int numFlags = 0 ;
    for(int i = 0 ; i < NUMMOVES ; i++) {
        if(x+DX[i] >= row || x+DX[i] < 0) {
            continue ;
        }
        if(y+DY[i] >= col || y+DY[i] < 0) {
            continue ;
        }
        if(array[x+DX[i]][y+DY[i]].name == 'F') {
            numFlags++ ;
        }
    }
    array[x][y].numFlags = numFlags ;
}
*/
