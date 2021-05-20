//patterns.c
#include <stdio.h>
#include <cs50.h>

int main(void) {
int a=get_int("Enter type of pattern\n");
int b=get_int("Number of rows\n");
int i,j;  
for(i=1; i<=4; i++)
     for(j=4; j>=i; j--)
     {
      printf("#");          
     }
     printf("\n");
   } 
     }
  
