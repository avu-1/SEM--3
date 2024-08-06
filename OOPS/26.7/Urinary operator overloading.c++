#include <iostream>
using namespace std;

class NUM{
    private:
        int num;
    public:
        void setnum(int x){
            num = x;
        }
        void operator-(){
            num = -num;
            cout << "The number after negation is: " << num << endl;
        }       
}


int main(){
    NUM num;
    num.setnum(10);
    -num;
}   