#include<iostream>
using namespace std;

enum carsBrand{
    ford,
    tata,
    lamborgini,
    Rolls_Royce
};

const char* carsBrandNames[] = {
    "ford",
    "tata",
    "lamborgini",
    "Rolls_Royce"
};

int main(){
    carsBrand myCar = tata;
    cout << carsBrandNames[myCar] << endl;
    carsBrand myCar2 = lamborgini;
    cout << carsBrandNames[myCar2] << endl;
    carsBrand myCar3 = Rolls_Royce;
    cout << carsBrandNames[myCar3] << endl;
    carsBrand myCar4 = ford;
    cout << carsBrandNames[myCar4] << endl;
    return 0;
}

/*
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
        carsBrand myCar2 = tata;
        cout << myCar2 << endl;
        carsBrand myCar3 = Rolls_Royce;
        cout << myCar3 << endl;
        carsBrand myCar4 = ford;
        cout << myCar4 << endl;
        return 0;
    }
*/