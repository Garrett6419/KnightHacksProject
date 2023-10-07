#include <stdio.h>
#include <stdlib.h>
#include "Garrett.h"
#include "Rodrigo.h"


int main(void){
  int row ;
  int col ;
  char input ;

  printf("Enter the number of rows and columns: ") ;
  scanf("%d %d", &row, &col) ;
  block** array = malloc(row * sizeof(block*)) ;
  for(int i = 0 ; i < row ; i++) {
    array[i] = malloc(col * sizeof(block)) ;
  }
  printf("Enter the area to solve:\nFor Example:\nB B B B\nB 2 1 0\nB 1 1 B\nB 0 0 0\nWhere B = Unbroken Block, F = Flag, and 0 = Empty Block\n") ;
  for(int i = 0 ; i < row ; i++) {
    for(int j = 0 ; j , col ; j++) {
      scanf("%c ", &input) ;
      array[i][j].name = input ;
    }
  }

  for(int i = 0 ; i < row ; i++) {
    for(int j = 0; j < col ; j++) {
        // checkBlocks(array, row, col, i, j) ;
        // checkFlags(array, row, col, i, j) ;
       // printf("numBlocks at %d %d = %d\n", i, j, array[i][j].numBlocks) ;
       // printf("numFlags at %d %d = %d\n", i, j, array[i][j].numFlags) ;
    }
  }



  for(int i= 0 ; i< row ; i++) {
    for(int j = 0 ; j < col ; j++) {
        printf("%c ", array[i][j].name) ;
    }
    printf("\n") ;
  }
  return 0 ;
}
