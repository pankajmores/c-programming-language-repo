#include<stdio.h>                //function that prints NAMASTE if user is indian 
                                            //BONJOUR if user if french
void namaste();
void bonjour();

int main(){
    char ch;
    printf("enter f for french & enter i for indian:");
    scanf("%c", &ch);

    if(ch == 'i'){  
        namaste();
    } else {
        bonjour();          
    }  

    return 0;
}

void namaste(){
    printf("NAMASTE\n");
}
void bonjour(){   
    printf("BONJOUR\n");
}