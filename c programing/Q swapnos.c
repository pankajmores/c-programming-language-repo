#include<stdio.h>          \\swap=interchange of no.s

void swap(int a, int b);
void _swap(int *a, int *b);
int main(){
    int x=3;
    int y=5;
    _swap(&x,&y);
    printf("x=%d & y=%d\n", x,y);  

    return 0;  
}

void _swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d & b=%d\n", a,b);

}