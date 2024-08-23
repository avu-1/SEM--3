#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5},*p;
    p=a;
    cout<<++(*p);
    cout<<(*p)--;
    return 0;
}