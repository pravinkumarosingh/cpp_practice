#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle(int l ,int b);
        int getLength(){ return length; }
        int getBreadth(){ return breadth; }
        int area();
        int perimeter();
        bool isSquare();

};

Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

bool Rectangle::isSquare(){
    return length==breadth;
}

int main(){
    Rectangle r(10,10);
    printf("Area of rectangle is %d\n",r.area());
    if (r.isSquare()){
        printf("Given rectangle is square\n");
    }
    return 0;
}