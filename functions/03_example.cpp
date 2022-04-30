//function overloading

#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    printf("%d\n",sum(10,5));
    printf("%f\n",sum(15.5f, 12.3f));
    printf("%d\n",sum(10,3,20));
    return 0;
}