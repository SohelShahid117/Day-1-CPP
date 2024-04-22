#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "num1 =";
    cin >> num1;

    int num2;
    cout << "num2 =";
    cin >> num2;

    int sum = num1 + num2;
    cout << "total = " << sum << endl;

    int x;
    cout << "Type a number: "; // Type a number and press enter
    cin >> x;                  // Get user input from the keyboard
    cout << "Your number is: " << x;
    return 0;
}
