#include <iostream>
using namespace std;

int main() {
    void *null_ptr;
    int a = 20;
    null_ptr = &a;
    cout << "Value of integer data type: " << *(static_cast <int*> (null_ptr)) << endl;

    float b = 2.2f;
    null_ptr = &b;
    cout << "Value of float data type: " << *(static_cast<float*>(null_ptr)) << endl;

    char c = 'A';
    null_ptr = &c;
    cout << "Value of character data type: " << *(static_cast<char*>(null_ptr)) << endl;

    return 0;
}