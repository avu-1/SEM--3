#include <iostream>
using namespace std;

int main() {
    int rupeeNote;
    cout << "Enter the Indian Rupee note: ";
    cin >> rupeeNote;

    int coins[] = {10, 5, 2, 1};
    int numCoins[] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++) {
        numCoins[i] = rupeeNote / coins[i];
        rupeeNote %= coins[i];
    }

    cout << "Number of coins that can be generated: " << endl;
    cout << "10 Rupee coins: " << numCoins[0] << endl;
    cout << "5 Rupee coins: " << numCoins[1] << endl;
    cout << "2 Rupee coins: " << numCoins[2] << endl;
    cout << "1 Rupee coins: " << numCoins[3] << endl;

    return 0;
}