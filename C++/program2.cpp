#include <random>
#include <iostream>
using namespace std;

class Random
{
    int random;

    int randomchoice();
    int randomNumber();
};

int Random::randomchoice(){
    int number;
    cout << "enter a number of your choice between 1 to 100";
    cin >> number;
}

int Random::randomNumber(){
    random_device rd;  // Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    uniform_int_distribution<> distrib(1, 100);
}


int main()
{    
    return 0;
}