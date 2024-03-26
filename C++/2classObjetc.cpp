#include<iostream>

// class Dog{
//     public:
//     void display(){
//         std::cout << "1st Class";
//     }
// };

// class Animal{
//     public:
//     a.display();
//     void display2(){
//         std::cout << "2nd Class" ;
//     }
// };

class animal{
public:
    class cats{
        public:
        void display()
        {
            std::cout << "This is cat class";
        }
    };
    cats c;
    void display2(){
        c.display();
    }
};

int main(){
    // Dog d;
    // Animal a;

    animal a;
    a.display2();
    return 0;
}