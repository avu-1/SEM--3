#include <iostream>
using namespace std;

class Sample1{
    private:

    public:
        int num1;
        int num2;
    void getinput(){
        cin>>num1;
        cin>>num2;
    }
    int display(){
        cout<<endl<<num1<<endl<<num2;
        return 0;
    }
    friend void friendofsample1(Sample1);
};
void friendofsample1(Sample1 S){
    int num3=S.num1+S.num2;
    cout<<"sum is:"<<num3;
}
int main(){
    Sample1 S;
    S.getinput();
    S.display();
    friendofsample1(S);
    return 0;
}   