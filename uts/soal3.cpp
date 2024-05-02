#include <iostream>
#include <math.h>

using namespace std;

bool prima(int angka) {
    if (angka <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(angka); ++i) {
        if (angka % i == 0) {
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
    bool bilangan = false;

    for (char c : input) {
        if (c >= '0' && c <= '9') {
            nomor = nomor * 10 + (c - '0');
            bilangan = true;
        } else if (bilangan) {
            if (prima(nomor)) {
                sum += nomor;
            }
            nomor = 0;
            bilangan = false;
        }
    }

    if (bilangan && prima(nomor)) {
        sum += nomor;
    }

    cout << "Jumlah angka prima adalah: " << sum << endl;
    return 0;
}
