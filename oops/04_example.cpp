// encapsulation - data hiding
// mutators(setters) - functions which sets the value of data members are  called mutators
// accessors(getters) - functions which provide the value of data members are called accessors

#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
        // mutators
        void setLength(int l){
            if (l>=0)
                length = l;
            else
                printf("length cannot be less than zero\n");
                length = 1;
            
        }

        void setBreadth(int b){
             if (b>=0)
                breadth = b;
            else
                printf("breadth cannot be less than zero\n");
                breadth = 1;
        }

        // accessors
        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }
};


int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(-5);
    printf("Area of rectangle is %d\n",r.area());
    printf("Perimeter of rectangle is %d\n",r.perimeter());
    
    return 0;
}