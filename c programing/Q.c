#include<stdio.h>   // CONVERT MARKS OF 3 SUB IN PERCENT 

int calculatePercent(int science, int maths, int english);
int main(){
    int sci=95;
    int maths=90;
    int eng=80;

    printf("percentage is : %d", calculatePercent( sci,  maths,  eng));   

    return 0 ;     
}

int calculatePercent(int science, int maths, int english){
    return  ((science + maths + english) / 3) ;      
}      