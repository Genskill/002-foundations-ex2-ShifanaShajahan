//patterns.c
#include <stdio.h>
#include <cs50.h>

int main(void) {
        int a= get_int("Enter type of pattern(1 or 2)");
        int b= get_int("Number of rows");

   int i,j;
     for(int i=4;i >=1;i--)
       {
         for(int j=1;j <=i;j++)
          {
            printf("#");
          }
            printf("\n");
        }
    

       
    } 

    
