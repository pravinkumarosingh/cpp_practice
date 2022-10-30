#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> myStack;

    cout << "isEmpty -> " << myStack.empty() << "\n";
    cout << "size -> " << myStack.size() << "\n";

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    while(!myStack.empty()){
        cout << myStack.top() << " ";
        myStack.pop();
    }

    cout << "\n";

    return 0;
}