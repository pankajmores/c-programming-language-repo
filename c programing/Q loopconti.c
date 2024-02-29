#include<stdio.h>        //PRINT NO,S FROM 1-10  EXCEPT 6   

int main(){
    for(int i=1; i<=10; i++){
        if(i == 6){
            continue;      //it skips the no. 6
        }
        printf("%d\n", i);  
    }

   

    return 0;  
}