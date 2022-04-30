#include<iostream>
using namespace std;

float addNumbers(float x, float y){
    x += y;
    return x;
}

int main(){
    float a = 10.5f, b = 15.5f;
    printf("Addition is %f\n", addNumbers(a,b));
    return 0;
}