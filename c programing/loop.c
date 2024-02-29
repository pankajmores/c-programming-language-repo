#include<stdio.h>

int main(){
    /*for(int i=1; i<=5; i = i + 1){
    printf("Hello World \n");           PRINTS HLW WRLD 5 TIMES
    }*/   

  /*  for(int i=1; i<=100; i = i + 1){
        printf("%d\n", i);               PRINTS NUMBERS BTWN 1-100  
    }  */  

   /* for(int i=0; i<=10; i = i + 1){                 FOR LOOP
        printf("%d\n", i);           PRINTS NUM FROM 0-10  
    }*/

   /* for(char ch='a'; ch<='z'; ch++){
        printf("%c", ch);           prints a-z 
    }*/

    
   /* int i=1;  
    while(i<=5){
        printf("Hello World\n");        WHILE LOOP PRINTS 5* HLW WRLD
        i++;   
    }*/

    int i=1;
    do{
        printf("%d\n",i);
        i++;                     //DO WHILE LOOP
    }while(i<=5);   
    return 0;
}      