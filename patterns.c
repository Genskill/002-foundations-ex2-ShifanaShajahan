//patterns.c
#include <stdio.h>
#include <cs50.h> 
int main(void){
      int a=get_int("Enter type of pattern (1 or 2)\n");
      int b=get_int("Number of rows");
      printf("\n");            
 int i,j,k;
     for(i=1;i<=5;i++){
       for(j=4;j>=i;j--){
             printf(" ");
            }
           for(k=1;k<=1;k++) {
         printf("#");}
         if(i==5)break;
       printf("\n");
       }
  }
