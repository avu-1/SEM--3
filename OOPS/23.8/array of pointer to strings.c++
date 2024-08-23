#include <iostream>
using namespace std;
int main(){
    const char *days[] = {"Sun ", "Mon ", "Tue ", "Wed ", "Thu ", "Fri ","Sat "};
    int i;
    for(i=0;i<7;++i)
    cout<<days[i];
    return 0;
}