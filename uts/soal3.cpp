#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    system ("CLS");
    string input;
    cout << "Masukkan beberapa angka (pisahkan dengan spasi): ";
    getline(cin, input);

    int sum = 0;
    int nomor = 0;
    bool isNumber = false;

    for (char c : input) {
        if (c >= '0' && c <= '9') {
            nomor = nomor * 10 + (c - '0');
            isNumber = true;
        } else if (isNumber) {
            if (isPrime(nomor)) {
                sum += nomor;
            }
            nomor = 0;
            isNumber = false;
        }
    }

    if (isNumber && isPrime(nomor)) {
        sum += nomor;
    }

    cout << "Jumlah angka prima adalah: " << sum << endl;
    return 0;
}