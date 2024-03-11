#include<iostream>
using namespace std;

void func(){
    cout << "Hello World" << endl;
}

class A{
    public :

    void test(){
        cout << "it is working till here" << endl;
    }

    int (*greet)() = [] ()->int{
        cout << "Hello World" << endl;
        return 0;
    };

    void greet1(){
        cout << "Hello World" << endl;
    }
};

int main(){
    func();
    A obj;
    obj.test();
    obj.greet1();
    cout << obj.greet() << endl; // Call the function pointed by greet
    return 0;
}