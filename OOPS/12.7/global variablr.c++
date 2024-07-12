#include <iostream>
using namespace std;
int c = 12;
void test();
int main (){
    ++c;
    cout << c << endl;
    test();
    system("pause");
    return 0;
}
void test(){
    ++c;
    cout << c << endl;
}