#include<iostream>
using namespace std;
class rectangle

{
public:
//attributes of rectangle
int length;
int width;
//Functions of rectangle
int area()

{
return length*width;
}
int perimeter(){
return 2*(length+width);
}
};
int main()
{//creating object of class rectangle
rectangle r1,r2,r3;
r1.length=10;
r1.width=15;
r2.length=20;
r2.width=15;
r3.length=30;
r3.width=15;
cout<<"Area of r1 is "<<r1.area()<<endl;
cout<<"Perimeter of Rectangle r1 is "<<r1.perimeter()<<endl;
cout<<"Area of r2 is "<<r2.area()<<endl;
cout<<"Perimeter of Rectangle r2 is "<<r2.perimeter()<<endl;
cout<<"Area of r3 is "<<r3.area()<<endl;                                                                         
cout<<"Perimeter of Rectangle r3 is "<<r3.perimeter()<<endl;

return 0;
}
