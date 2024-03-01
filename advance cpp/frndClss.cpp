#include <iostream>
using namespace std;

class A {
private:
  void display() { cout << "friend class accessed private"; }
  friend class B;
};

class B {
public:
    void display() {
        A a;
        a.display();
    }
};

// class C{
// public:
//     void display(){
//         A a;
//         a.display();
//     }
// };

int main(){
    B b;
    b.display();
    return 0;   
}