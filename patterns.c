//patterns.c
#include <stdio.h>
#include <cs50.h>
  
void draw_line(int num) {
  int i;
    for(i=0;i<num;i++) {
      printf("#");
      }
        printf("\n");
  }
      
int main(void){
      int a=get_int("Enter type of pattern (1 or 2)");
      int b=get_int("Number of rows");
      
     int i;
     for(i=4;i>=1;i--)
          {
           draw_line(i);    
     }
}
