#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x,y;
    double output;

    cin >> x >> y;

    //addition
    output = x + y;
    cout <<x << " + " << y << " = " << output;

    //subtraction
    output = x - y;
    cout <<x << " - " << y << " = " << output;

    
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
