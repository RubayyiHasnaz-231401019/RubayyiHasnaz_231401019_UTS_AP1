#include <iostream>
#include <math.h>

using namespace std;

int main() {
    system("CLS");

    int n;
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " bukanlah bilangan prima." << endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << n << " merupakan bilangan prima." << endl;
        } else {
            cout << n << " bukanlah bilangan prima." << endl;
        }
    }

    return 0;
}

