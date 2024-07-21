#include <iostream>
using namespace std;
class Demo{
    int x;
    public:
    void set_data(const int a){x=a;}
    int get_data(){
        ++x;
        return x;
        }
};

#include <iostream>
using namespace std;
int main()
{
    Demo d;
    d.set_data(10);
    cout<<d.get_data();
    return 0;
}
