#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long number) {
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main() {
    cout << "Enter a number to factorize" << endl;
    long number;
    cin >> number;

    long factor = 2;
    while (number != 1) {
        if (!isPrime(factor)) {
            factor++;
            continue;
        }

        if (number % factor == 0) {
            cout << factor << endl;
            number /= factor;
        } else {
            factor++;
        }
    }
}