#include <iostream>
using namespace std;

template <typename T> class Array 
{
private:
    T *ptr;
    int size;

public:
    Array(T arr[], int s);

    int print();
};

template<typename T> Array<T>::Array(T arr[], int s) // explicit constructor
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
};

template<typename T>int Array<T>::print(){ // explicit method
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
    return 0;
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    a.print();
    
    return 0;
}