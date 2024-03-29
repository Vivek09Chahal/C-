//NOTE
/*
Class Template Arguments Deduction (C++17 Onwards)
The class template argument deduction was added in C++17 and has since been part of the language.
It allows us to create the class template instances without explicitly definition the types just like function templates.
*/

// C++ Program to implement
// Class Template Arguments 
// Deduction
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

// defining class template
template <typename t>
class student {
private:
	string student_name;
	t total_marks;

public:
	student();
	// parameterized constructor
	student(string n, t m)
	{
		student_name = n;
		total_marks = m;
	}

	void getinfo()
	{
		cout << "STUDENT NAME: " << student_name << endl;
		cout << "TOTAL MARKS: " << total_marks << endl;
		cout << "Type ID: " << typeid(total_marks).name()
			<< endl;
	}
};

int main()
{
	// student <int> is used to fulfill
	// template requirements
	student<int> s1("vipul", 100);
	student<int> s2("yash", 100.0);

	s1.getinfo();
	s2.getinfo();

	return 0;
}
