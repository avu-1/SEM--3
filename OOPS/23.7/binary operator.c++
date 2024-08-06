#include <iostream>
using namespace std;
class A{
    int x;
    public:
    A(){}
    A(int a){
        x = a;
    }

void operator+(A);
void display();
};
void A :: operator+(A a){
    int m = x+a.x;
    cout<<"the result of addition of two objects is: "<<m;

}
int main(){
    A a1(5);
    A a2(4);
    a1+a2;     //a1.operator+(a2);
    return 0;
}