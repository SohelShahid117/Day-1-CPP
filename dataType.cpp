#include <iostream>
using namespace std;
int main()
{
    cout << "hello world" << endl;
    cout << "hello world\n";

    // 2.1 Data Types & Type Modifiers | Data Structures & Algorithms Course in C++ | Lecture 2.1

    int a;
    a = 12;
    cout << "value of int a :" << a << endl;
    cout << "size of int :" << sizeof(a) << " byte" << endl;
    // cout << "size of int :" << a << endl;

    float b;
    b = 7.99;
    cout << "size of float :" << sizeof(b) << " byte" << endl;

    char c;
    cout << "size of char :" << sizeof(c) << " byte" << endl;

    bool d;
    cout << "size of bool :" << sizeof(d) << " byte" << endl;

    double e;
    cout << "size of double :" << sizeof(e) << " byte" << endl;

    long f;
    cout << "size of long :" << sizeof(f) << " byte" << endl;

    short g;
    cout << "size of short :" << sizeof(g) << " byte" << endl;

    short int x;
    cout << "size of short int :" << sizeof(x) << " byte" << endl;

    long int y;
    cout << "size of long int :" << sizeof(y) << " byte" << endl;

    return 0;
}