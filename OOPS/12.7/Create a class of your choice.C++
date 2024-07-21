#include <iostream>
using namespace std;

class choice
{
    public:
    void a(){
        cout<<"constructor called"<<endl;
    }
    void b(){
        cout<<"Destructor called:"<<endl;
    }
    void c(){
        cout<<"Function called"<<endl;
    }
};

int main(){
        cout<<"Main mrethod called"<<endl;

        choice obj;
        obj.a();
        obj.b();
        obj.c();
        cout<<"Main method Closed"<<endl;
        return 0;

    }