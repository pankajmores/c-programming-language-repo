#include<stdio.h>

int main(){
    int n;
    printf("Enter number :");
    scanf("%d", &n);

   /* int i=0;
    while(i <= n){
        printf("%d\n", i);        WHILE
        i++;    
    }*/

    for(int i=0; i<=n; i++){
        printf("%d\n", i);          //FOR
    }   
  
    return 0;
}