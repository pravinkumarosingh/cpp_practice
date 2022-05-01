#include<iostream>
using namespace std;

class Rectangle{
    public:
        int length;
        int breadth;

        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle r1;
    r1.length=10;
    r1.breadth=5;
    printf("Area of rectangle is %d\n",r1.area());
    printf("Perimeter of rectangle is %d\n", r1.perimeter());
    return 0;
}