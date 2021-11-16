#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    string d;
    cout << "taking input a";
    cin >> a;
    cout << "taking input b";
    cin >> b;
    cout << "taking input as operator";
    cin >> d;
    if (d == "+")
    {
        c = a + b;
        cout << c << endl;
    }
    else if (d == "-")
    {
        c = a - b;
        cout << c << endl;
    }
    else if (d == "*")
    {
        c = a * b;
        cout << c << endl;
    }
    else if (d == "/")
    {
        c = a / b;
        cout << c << endl;
    }
    else{
        cout<<"error!";
    }
}
