#include<stdio.h>

float squareArea(float side);        //PRINT AREA OF :SQ  CRCL  RECT   
float rectangleArea(float a, float b);
float circleArea(float rad);

int main(){
    float a=5;
    float b=10;
    float side=5;
    float rad=2;

    printf("%f\n", rectangleArea(a ,b));
    printf("%f\n", squareArea(side));
    printf("%f", circleArea(rad));   
    return 0;  
}

float squareArea(float side){
    return side * side;  
}
float rectangleArea(float a, float b){
    return a*b;
}
float circleArea(float rad){
    return 3.14*rad*rad;
}