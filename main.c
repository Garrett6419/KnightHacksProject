#include <stdio.h>
#include "functions.c"
#include "Garrett.h"
#include "Rodrigo.h"


void hello(int boy) ;

int main(void){
  printf("Hello World") ;
  
  hello(5);
  return 0 ;
}

void hello(int boy)
{
	printf("%d", boy);
	return;
}