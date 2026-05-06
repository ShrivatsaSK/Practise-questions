#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number";
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "The given number " << n << " is a prime number";
    else
        cout << "The given number " << n << " is not a prime number";

    return 0;
}