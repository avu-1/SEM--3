#include <bits/stdc++.h>
using namespace std;
int total; // global variable
int Square(int x) // x is a local variable
{
    return x * x;
}
int SquareOfSum(int x,int y) //x,y are local to square of sum
{
    int z = Square(x + y); // z is local to square of sum
    return z;
}
int main(){
    int a = 4 , b = 8; // a,b are local to main()
    total = SquareOfSum(a,b); // total is global
    printf("Total = %d\n",total);
}


//stack overflow
