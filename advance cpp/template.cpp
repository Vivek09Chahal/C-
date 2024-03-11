#include<iostream>
using namespace std;

// template<typename T> T myMax(T x, T y){
//     return (x>y)?x:y;
// }

// int main(){
//     cout << myMax<int>(3,7) << endl;
//     cout << myMax<double>(3.0,7.0) << endl;
//     cout << myMax<char>('g','e') << endl;
//     return 0;
// }

// C++ Program to implement
// Bubble sort
// using template function



// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T> void bubbleSort(T a[], double n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; i < j; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
}

// Driver Code
int main()
{
	int a[5] = { 10, 50, 30, 40, 20 };
	int n = sizeof(a) / sizeof(a[0]);

	// calls template function
	bubbleSort<int>(a, n);

	cout << " Sorted array : ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}