#include <iostream>
using namespace std;

int main() {
	double nilai;
	cout << "Program Penentuan Nilai Mutu" << endl;
	cout << "Masukan nilai akhir: ";
	cin >> nilai;

	cout << "\nHasil: " << endl;

	if (nilai >= 89) {
		cout << "Nilai mutu: A" << endl;
		cout << "Keterangan: Naik kelas" << endl;
	}
	else if (nilai >= 80 && nilai <= 89) {
		cout << "Nilai mutu: B" << endl;
		cout << "Keterangan: Naik kelas" << endl;
	}
	else if (nilai >= 70 && nilai <= 80) {
		cout << "Nilai mutu: C" << endl;
		cout << "Keterangan: Naik kelas" << endl;
	}
	else if (nilai >= 60 && nilai <= 70) {
		cout << "Nilai mutu: D" << endl;
		cout << "Keterangan: Tinggal kelas" << endl;
	}
	else if (nilai <= 60) {
		cout << "Nilai mutu: E" << endl;
		cout << "Keterangan: Tinggal kelas" << endl;
	}
	return 0;

}
