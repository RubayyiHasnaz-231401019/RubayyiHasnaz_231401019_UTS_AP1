#include <iostream>
using namespace std;

int main() {
    system("CLS");
    string kalimat;

    cout << "Masukkan sebuah kalimat: ";
    getline (cin, kalimat);

    // Mengonversi setiap huruf dalam kalimat menjadi huruf kapital
    for (char &c : kalimat) {
        if (c >= 'a' && c <= 'z') {
            // Mengonversi huruf kecil menjadi huruf kapital dengan mengubah nilai ASCII
            c -= 32; // 32 adalah selisih antara huruf kecil dan huruf kapital dalam ASCII
        }
    }

    // Menampilkan kalimat dalam huruf kapital
    cout << "Kalimat dalam huruf kapital: " << kalimat << endl;

    return 0;
}
