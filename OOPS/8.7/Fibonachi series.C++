#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main() {
    int n;
for (int i = 1; i <= 10; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
