#include<iostream>
using namespace std;

class A{
    public :

    int (*greet)() = [] ()->int{
        cout << "Hello World" << endl;
        return 0;
    };


    void greet1(){
        cout << "Hello World" << endl;
    }
};

int main(){
    A obj;
    obj.greet1();
    cout << obj.greet << endl;
    return 0;
}