#include <iostream>
using namespace std;

int swapbyreference(int &a, int &b)
{
    a = a+b;
    b = a-b;
    a= a-b;
    return 0;
}

int main(){
    int a;
    int b;
    cout << "Enter value of A";
    cin >> a;
    cout << "Enter value of B";
    cin >> b;

    swapbyreference(a,b);
    cout << "Value of A is: " << a << "Value of B is: " << b;
    return 0;
}