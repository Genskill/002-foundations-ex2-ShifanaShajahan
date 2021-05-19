//patterns.c
#include <stdio.h>
#include <cs50.h>


int main(void) {
      int a= get_int("Enter type of pattern(1 or 2)");
      int b= get_int("Number of rows");
    
    if(a=1) { 
      int i,j;
            for(i=5;i>=1;i--)
             {  
               for(j=1;j<=i;j++)
                {
                  printf("#");
                }
                  printf("\n");
              }
          
     else
       int i,j,k;
         for(i=1;i<=5;i++)
              {
                for(j=5-1;j>=i;j--)
                  {
                    printf(" ");
                  }
                     for(k=1;k<=i;k++)
                         {
                           printf("#");
                         }
                           printf("\n");
                 }
             }
      }
    
