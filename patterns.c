//patterns.c
#include <stdio.h>
#include <cs50.h> 
void draw_line(int num){
 int i;
  for(i=0; i<num; i++) {
   printf("#");}
 printf("\n"); }

int main(void){      
 int i; 
 for(i=4; i>0; i++)
   if(i==1) break; {
     draw_line(i);
       }
}
