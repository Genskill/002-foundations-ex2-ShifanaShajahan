//patterns.c
#include <stdio.h>
#include <cs50.h> 
int main(void){      
    int i,j;
     for(i=4;i>=0;i--){
       for(j=1;j<=i;j++){
         printf("#");}
         if(i<=1) break;
       printf("\n");
       }
    printf("\n");
 printf("All good");
  }
