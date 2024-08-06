#include <iostream>
using namespace std;
class Aninmal{
    public:
        void eat(){
            cout << "Eating....." << endl;
        }
};  
class Dog: public Aninmal{
    public:
        void eat(){
            cout << "Eating bread...." << endl;
        }
};
int main(void){
    Dog d = Dog();
    d.eat();
    d.Animal::eat();
    return 0;
}