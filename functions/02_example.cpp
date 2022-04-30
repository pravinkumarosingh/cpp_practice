#include<iostream>
using namespace std;

int maximum(int a, int b, int c){
    if(a>b && a>c)
        return a;
    
    else if(b>c)
        return b;
    
    else   
        return c;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Wait let me see....");
    printf("Maximum is %d\n",maximum(a,b,c));
    return 0;
}