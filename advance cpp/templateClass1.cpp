#include<iostream>
using namespace std;

template<class X, class Y> class A{
    public:
    X a;
    Y b;

    A(){
        cout << "Calling Constructor" << endl;
    }

};

int main(){
    A<int, float> a;
    return 0;
}