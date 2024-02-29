#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("TEST.txt", "r");
    

    int n;
    fscanf(fptr, "%d", &n);
    printf(" %d\n", &n);
    fscanf(fptr, "%d", &n);
    printf( "%d\n", n);
    fscanf(fptr, "%d", &n);
    

    fclose(fptr);

    return 0;
}