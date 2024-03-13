#include<iostream>
using namespace std;

class Base{
    public: int a ;
    Base(int a): a(a){cout << "Base Constructor" << endl;};
};

class Derived : public Base{
    public: int b;
    using Base::Base;
};

int main(){
    Derived d(10);
    d.b = 20;
    cout << d.a << " " << d.b << endl;
    return 0;
}