//patterns.c
#include <stdio.h>
#include <cs50.h> 
void draw_line(int num){
 int i;
  for(i=0; i<num; i++) {
   printf("#");}
 if(i==1)break;
 printf("\n"); }

int main(void){      
 int i; 
 for(i=4; i>0; i++){
     draw_line(i)
       }
}
