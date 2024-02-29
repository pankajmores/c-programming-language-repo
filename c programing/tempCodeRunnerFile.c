#include<stdio.h>

int main(){
    /*int age=22;
    int *ptr= &age;
    int _age= *ptr;  

    printf("%d", _age);  */  

    int x=5595955;
    int *ptr;//pointer
    // int ptr;
    ptr= &x;
    // *ptr= 0;    //x=0

    printf("x = %d\n", x);  //0
    printf("*ptr = %d\n", &*ptr);    //0

    // *ptr += 5;   //x=5
    // printf("x = %d\n", x);  //5
    // printf("*ptr = %d\n", *ptr);    //5

    // *ptr ++;
    // printf("x = %d\n", x);  
    // printf("*ptr = %d\n", *ptr);  

 
    return 0;  
}