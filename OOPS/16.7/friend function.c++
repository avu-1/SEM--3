#include <iostream>
using namespace std;
class base{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
    base(){
        private_variable = 10;
        protected_variable = 99;
    }   
//friend function declaration
friend void friend_function(base obj);
};
//friend function definition
void friend_function(base obj){
    cout<<"Private variable: "<<obj.private_variable<<endl;
    cout<<"Protected variable: "<<obj.protected_variable;
}
int main(){
    base object1;
    friend_function(object1);
    return 0;
}