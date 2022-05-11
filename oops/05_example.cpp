//constructor


#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
        //parameterized constructor
        Rectangle(int l, int b){
            setLength(l);
            setBreadth(b);
        }
        
        //copy constructor
        // Rectangle(Rectangle &rect){
        //     length = rect.length;
        //     breadth = rect.breadth;
        // }

        // mutators
        void setLength(int l){
            if(l<0)
                l = 1;
            else
                length = l;
            
        }

        void setBreadth(int b){
             if (b<0)
                b = 1;
            else
                breadth = b;
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
    // Rectangle r;
    Rectangle r1(10,5);
    //Rectangle r2(r1);
    printf("Area of rectangle is %d\n",r1.area());
    printf("Perimeter of rectangle is %d\n",r1.perimeter());
    
    return 0;
}