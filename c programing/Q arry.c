#include<stdio.h>    //WRITE A FNCTION TO COUNT THE ''NO.'' OF ODD NO'S IN ARRAY

int countOdd(int arr[], int n);
int main(){
    int arr[]={1,7,3,9,5,0};
    printf("%d", countOdd(arr, 6));   

    return 0;  
}

int countOdd(int arr[], int n){
    int count =0;  
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
        count++;  }
    }
    return count;  
}