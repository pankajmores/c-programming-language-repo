#include<stdio.h>              //PRINTS N TERMS IN FIBONACHI SEQ

int fib(int n);
int main(){
    fib(5);  

    return 0;  
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;  
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN= fibNm1+fibNm2;
    printf("fib of %d is \n :%d\n", n, fibN);    
    return fibN;    
}  