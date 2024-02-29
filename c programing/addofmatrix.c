#include<stdio.h>

int main(){
    int i,n,m,arr1[50][50],arr2[50][50],sum[50][50];
    printf("Enter the no of rows:", m);
    scanf("%d", &m);
    printf("Enter the no of columns:", n);
    scanf("%d", &n);

    printf("First mat is:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n;  j++){  
            scanf("%d", &arr1[i][j]);
        }
      
    }

    printf("Second mat is:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n;  j++){  
            scanf("%d", &arr2[i][j]);
        }
      
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n;  j++){
            sum[i][j]=arr1[i][j] + arr2[i][j];
             
        }
       
        

      
    }

    printf("Sum is:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n;  j++){
            
            printf("%d\t", sum[i][j]);  
        }
        printf("\n");
        

      
    }
    

    
        
      return 0;
      
    }
    


  