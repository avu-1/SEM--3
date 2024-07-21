#include <iostream>
using namespace std;
int test (const int num)
{
    cout << "Value of num is: " << num << endl;
    return 0;
}
int main()
{
    test(5);
}