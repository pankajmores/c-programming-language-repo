#include<stdio.h>

int main(){
    int i,n,m,arr[50][50];
    printf("Enter the no of rows:", m);
    scanf("%d", &m);
    printf("Enter the no of columns:", n);
    scanf("%d", &n);

    for(int i=0; i<m; i++){
        for(int j=0; j<n;  j++){  
            scanf("%d\n", &arr[i][j]);
        }
      
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n;  j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
        

      
    }
    


    return 0;
}