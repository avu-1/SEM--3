#include <iostream>
using namespace std;

class Complex1 {
    private:
        int a,b;
        public:
        void getval (int x,int y){
        a=x;
        b=y;
        }

        void display()
        {
            cout<<"a="<<a<<"b= "<<b<<endl;
        }
    operator int()
    {
        return(a);
    }
};

int main()
{
    Complex1 c1;
    int x;
    c1.getval(10,20);
    x=c1;
    cout<<"x="<<x<<endl;

}