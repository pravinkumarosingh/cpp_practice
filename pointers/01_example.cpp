#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr;
    ptr = &a;
    printf("Value inside a is %d\n",a);
    printf("Address of a is %p\n",&a);

    printf("Value inside p is %p\n",ptr);
    printf("Address of p is %p\n",&ptr);

    return 0;
}