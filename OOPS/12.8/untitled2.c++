#include <bits/stdc++.h>
using namespace std;
class complex1
{
    private:
    int a,b;
    public:
    complex1 ()
    {

    }
    complex1(int c)
    {
        a=c;
        b=0;
    }
    void getval(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
};
int main()
{
    complex1 c1;
    int x=10;
    c1=x;
    c1.display();
}