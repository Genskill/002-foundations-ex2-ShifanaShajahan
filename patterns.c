//patterns.c
#include <stdio.h>
#include <cs50.h> 
int main(void){  
    
    int rows=4;
     int i,j;
    for(i=rows;i>0;i--) {
     for(j=i;j>0;j--)
    
      {
  printf("#");}
    if(i==1) break;
     printf("\n");
   }
  
}
