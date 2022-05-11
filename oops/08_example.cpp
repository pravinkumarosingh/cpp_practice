#include<iostream>
using namespace std;


class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle(int length, int breadth){
            this -> length = length;
            this -> breadth = breadth;
        }

        int area(){
            return length*breadth;
        }
};

int main(){
    Rectangle r(10,5);
    printf("Area of rectangle is %d\n",r.area());
    return 0;
}