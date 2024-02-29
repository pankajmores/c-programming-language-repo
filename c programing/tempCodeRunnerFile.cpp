 #include<stdio.h>      //CONVERT TEMP FROM DEGREE TO FARHNITE

 float convertTemp(float  celsius);

 int main(){
    float far= convertTemp(1);
    printf(" far :%f", far);

    return 0;
 }

 float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;  
    return far;  
 }