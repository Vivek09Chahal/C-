#include<iostream>
#include<fstream>

using namespace std;

float temprature(int cripNumber){
    float temprature = cripNumber + 40;
    temprature = temprature / 4;
    return temprature;
}

main(){
    int cripNumber;
    cout << "Enter no of crips in a minute: " << endl;
    cin >> cripNumber;

    float temp = temprature(cripNumber);

    cout << "Temperature is : " << temp;

    return 0;
}