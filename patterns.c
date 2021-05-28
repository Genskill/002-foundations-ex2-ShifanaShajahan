//patterns.c
#include <stdio.h>
#include <cs50.h> 
int main(void){  
    int a= get_int("Enter type of pattern(1 or 2)\n");
    int b= get_int("Number of rows\n");
    int i,j;
    int rows=4;
    for(i=rows;i>0;i--) {
     for(j=i;j>0;j--)
    
      {
  printf("#");}
    if(i==1) break;
     printf("\n");
   }
  
}
