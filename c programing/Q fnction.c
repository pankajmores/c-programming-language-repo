#include<stdio.h>   //function calculte Sum, Product and AVG of 2 no.s using ptrs

void doWork(int a, int b, int *sum, int *product, int *avg);

int main(){
    int a=5, b=3;
    int sum, product, avg;
    doWork(a , b, &sum , &product ,&avg);

    printf("sum=%d , product=%d , avg=%d\n", sum , product , avg);



    return 0;  
}

void doWork(int a, int b, int *sum, int *product, int *avg){
     *sum = a+b;
     *product = a*b;
     *avg = (a+b)/2;

}