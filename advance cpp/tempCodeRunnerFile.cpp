#include<iostream>
using namespace std;

enum carsBrand{
    ford,
    tata,
    lamborgini,
    Rolls_Royce
};

int main(){
    carsBrand myCar = tata;
    cout << myCar << endl;
    carsBrand myCar2 = lamborgini;
    cout << myCar2 << endl;
    carsBrand myCar3 = Rolls_Royce;
    cout << myCar3 << endl;
    carsBrand myCar4 = ford;
    cout << myCar4 << endl;
    return 0;
}