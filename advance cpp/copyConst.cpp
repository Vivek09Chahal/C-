#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(){
        a = 10;
    }

    A(const A& other){
        a = other.a;
    }

    void display(){
        cout << "The value of A.a is: " << a << endl;
    }
};

int main(){
    A a;
    a.display();
    A b = a;
    b.display();
    return 0;
}