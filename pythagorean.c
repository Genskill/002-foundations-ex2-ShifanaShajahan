//pythagorean.c
#include<stdio.h>
#include<cs50.h>

int main(void) {
     int a= get_int("side");
     int b= get_int("side");
     int c= get_int("side");

     
    if(a+b>=c,b+c>=a,a+c>=b)
      { 
       printf("Yes");
      }
   else  
      {
       printf("No");
      }
    }
