#include <iostream>
using namespace std;
int main() {
    system("CLS");
    int detik;
    cout << "Masukkan waktu dalam detik: ";
    cin >> detik;

    if (detik < 0) {
        cout << "Input tidak dapat berupa angka negatif" << endl;
        return 1; // Mengembalikan kode kesalahan
    }

    int jam = detik / 3600;
    detik %= 3600;
    int menit = detik / 60;
    detik %= 60;

    // Format waktu dengan menggunakan operasi aritmatika dan panjang lebar
    cout << "Waktu dalam format HH:MM:SS adalah: ";
    if (jam < 10) cout << "0";
    cout << jam << ":";
    if (menit < 10) cout << "0";
    cout << menit << ":";
    if (detik < 10) cout << "0";
    cout << detik << endl;

    return 0;
}
