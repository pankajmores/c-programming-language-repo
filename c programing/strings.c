#include<stdio.h>

//void printString(char arr[]);

int main(){
  //  char firstname[]="PANKAJ";
    //char lastname[]="MORE";

   // printString(firstname);
  //  printString(lastname);

    
    char fullname[100];
   
    fgets(fullname, 100, stdin);  //printf string after space
    puts(fullname);     // gives space or wrks as \n
    printf("your fullname is: %s",  fullname);

    

    return 0;
}

/*void printString(char arr[]){
    for(int  i=0; arr[i] != '\0' ;i++){
        printf("%c", arr[i]); 
    }
    printf("\n");
}*/