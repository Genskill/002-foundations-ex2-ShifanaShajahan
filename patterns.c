//patterns.c
#include <stdio.h>
#include <cs50.h> 
int main(void){
      int a=get_int("Enter type of pattern (1 or 2)\n");
      int b=get_int("Number of rows");
      printf("\n");            
 int i,j;
     for(i=4;i>=1;i--){
       for(j=1;j<=i;j++){
         printf("#");}
         if(i<=0)break;
       printf("\n");
       }
  }
