#include <iostream>
using namespace std;

class base{
    class anotherClass {
        public:
        void memberFunction(base& obj);
    };
    
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
    friend void anotherClass::memberFunction(base& obj);
};

//friend function definition
void base::anotherClass::memberFunction(base& obj){
    cout<<"Private variable: "<<obj.private_variable<<endl;
    cout<<"Protected variable: "<<obj.protected_variable;
}

//driver code
int main(){
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);
    return 0;
}