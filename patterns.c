//patterns.c
#include <stdio.h>
#include <cs50.h>

int main(void) {
int a=get_int("Enter type of pattern (1 or 2) Number of rows", "");
  
int i,j,k;
for(i=1;i<=4;i++)
  {
  for(j=3;j>=i;j--)
      {
        printf(" ");
      }
    for(k=1;k<=i;k++)
      {
      printf("#");
      {
      printf("\n");
   }
}
