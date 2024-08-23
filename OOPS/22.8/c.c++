#include<iostream>
using namespace std;
#define SIZE 5
int main(){
    int a[]={1,2,3,4,5};
    int *p,*q;
    cout<<"Array Forward:\n";
    for(p=a,q=a+SIZE;p<q;p++);{
        cout<<*p<<"\t";
    }
    cout<<"\nArray Backward:\n";
    for(p=q-1;p>=a;p--){
        cout<<*p<<"\t";
    }
    return 0;
}
