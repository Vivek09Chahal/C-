// #include<iostream>
// using namespace std;

// struct point{
//     int x;
// };

// int main(){
//     point g;
//     point* ptr = &g;
//     ptr->x = 5;
//     cout << g.x << endl;
//     cout << ptr->x << endl;
//     cout << &ptr<< endl;
//     cout << ptr << endl;
//     return 0;
// }

// C++ program to Demonstrate Pointer to Structure
#include <iostream>
#include <stdio.h>

using namespace std;
struct GFG
{
    int x;
    int y;
};
struct square
{
    GFG left;
    GFG right;
};
void area_Square(square s)
{
    int area = (s.right.x) * (s.left.x);
    cout << area << endl;
    int area2 =  (s.right.y) * (s.left.y);
    cout << area2 << endl;
}
int main()
{
    square s = {{4, 5}, {4, 5}};

    area_Square(s);

    return 0;
}
