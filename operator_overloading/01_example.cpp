#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    
    public:
        Complex(int r=0, int i=0){
            real = r;
            img = i;
        }
        void display(){
            printf("%d+i%d\n",real,img);
        }
        Complex operator +(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
};

int main(){
    Complex c1(5,7), c2(2,9) , c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}