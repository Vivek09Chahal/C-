#include<iostream>
using namespace std;

class Base{
    public: int a ;
    Base(int a): a(a){cout << "Base Constructor" << endl;}
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

/*
    #include <iostream>
    using namespace std;
    using ll = long long; // Here we alias "ll" to stand for long long and save typing it out

    int main() {

    ll a = 5;
    cout << a;
    return 0;
    }
*/


/*
    #include <iostream>
    using std::cout;
    using std::endl;

    int main() {
    cout << "Hello, world!" << endl;
    return 0;
    }

*/