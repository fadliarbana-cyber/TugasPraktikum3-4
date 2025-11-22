#include <iostream>
using namespace std;

int main()
{
    double harga, diskonPersen, jumlahDiskon, hargaAkhir;

    cout << "Program Menghitung Diskon Barang\n";

    cout << "Masukkan Harga Barang (Rp)      : ";
    cin >> harga;

    cout << "Masukkan Diskon (%)  : ";
    cin >> diskonPersen;

    jumlahDiskon = harga * (diskonPersen / 100);

    hargaAkhir = harga - jumlahDiskon;

    cout << "\nHasil Perhitungan\n";
    cout << "Harga Awal       : " << harga << endl;
    cout << "Diskon (" << diskonPersen << "%) : " << jumlahDiskon << endl;
    cout << "Harga Akhir      : " << hargaAkhir << endl;

    return 0;
}