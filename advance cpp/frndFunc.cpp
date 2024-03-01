#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(){
            a = 0;
        }
        friend void display(A &a);
};


void display(A &a){
    cout << "The value of A.a is: " << a.a;
}


int main(){
    A a;
    display(a);
    return 0;
}