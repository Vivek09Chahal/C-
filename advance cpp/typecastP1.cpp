#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    int num = 100;
    cout << typeid(num).name() << endl;
    cout << typeid(static_cast<double>(num)).name() << endl; 

    cout << typeid(static_cast<float>(num)).name();

    return 0;
}