#include<iostream>

using namespace std;

struct Car{
    string Car1;
    int yearReleased;
}S1;

int main(){
    S1.Car1 = "Aston Martin DB12";
    S1.yearReleased = 2023;
    cout << S1.Car1;
    cout << "\n" << S1.yearReleased;
    return 0;
}

// Struct using typedef == It is used to asssign a new name to aready existing DataType

// struct Car{
//     string car1;
//     int yearReleased;
// };

// int main(){
//     Car car;
//     car.car1 = "ASTON MARTIN DB12";
//     cout << car.car1;
//     return 0;
// }