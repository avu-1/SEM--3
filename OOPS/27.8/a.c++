#include <iostream>
using namespace std;
void Double (int arr[], int sz)
{
    int SZ = sizeof(arr)/sizeof(arr[0]);
    printf("Size of arr %d and size of arr[0] %d\n",sizeof(arr),sizeof(arr[0]));
    for(int i=0;i<sz;i++)
    {
        *(arr + i) = *(arr + i)*2;
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    Double(arr,sz);
    for(int i=0;i<sz;i++)
    {
        printf("%d\n",*(arr+1));
    }
}

int main()
{
    void *null_ptr;
    int a=20;
    null_ptr = &a;
    cout<<"Value of integer data Type: "<<null_ptr<<endl;
    float b = 2.2f;
    null_ptr = &b;
    cout<<"value of float data type: "<<null_ptr<<endl;
    char c = 'A';
    null_ptr = &c;
    cout<<"value of character data type: "<<null_ptr<<endl;
    
}