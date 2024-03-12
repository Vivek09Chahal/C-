// C++ Program to implement
// template Array class
#include <iostream>
using namespace std;

template <typename T> class Array 
{
private:
	T *ptr;
	int size;

public:
	Array(T arr[], int s);
	void print();
};

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	Array<int> a(arr, 5);
	a.print();
	
	return 0;
}
