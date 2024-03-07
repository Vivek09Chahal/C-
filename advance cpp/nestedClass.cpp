#include <iostream>
using namespace std;

class Car
{
    string carName;
    public:
    Car(){
        carName = "BMW";
    }
    // Nested class Engine
    class Engine
    {
    public:
        void start()
        {
            cout << "Engine started!" << endl;
        }
    };

    void display()
    {
        cout << carName << endl;
    }
    // Member function using the nested class
    //
        Engine engine; // Create an instance of the nested class
        engine.start();
    //}
};

int main()
{
    Car myCar;
    myCar.display();
    //myCar.startEngine(); // Call the startEngine function of the Car class
    return 0;
}
