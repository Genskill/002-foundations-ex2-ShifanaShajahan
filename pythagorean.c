//pythagorean.c
#include <stdio.h>
#include <cs50.h>

int main(void) {
  int a,b;
  float c;
  
 for(a=1;a<=5;a++) 
  {
    for(b=1;b<=5;b++) 
      {
         c= sqrt((a*a)+(b*b));
           if(c==(int)c) 
          {
            printf("Yes");
            else:
            printf("No");
          }
      }
   }
 }
