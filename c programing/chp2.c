#include<stdio.h>

int main(){
    int a = 22;
    int b = a;
    int c = b * 6;
    //printf("%d\n", c);   
    //printf("%d", 3 % 2);   
   // printf("%f", 2.0 * 2); 
  // printf("%d", 5 * 2 / 2 * 3);
 // printf("%d\n", 4 == 5);
  //printf("%d", 3 != 4 );
 // printf("%d\n", 4>3 && 5>4);
  //printf("%d", 5<6 && 4<3);
   //printf("%d\n", 4>3 || 5>4);
  //printf("%d", 5<6 || 4<3);    

  int x;
  printf("Enter a number");
  scanf("%d", &x);
  printf("%d", x % 2 == 0);       //Q:: to check the divisibiliyt  of 2 and even n odd no.
                                 //even = 1 and odd=0 

    return 0;
}