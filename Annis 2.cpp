#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;

    // Deklarasi variabel
    string nama_siswa;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;

    // Meminta input dari pengguna
    cout << "Nama Siswa: ";
    getline(cin, nama_siswa);
    cout << "Nilai Keaktifan: ";
    cin >> nilai_keaktifan;
    cout << "Nilai Tugas: ";
    cin >> nilai_tugas;
    cout << "Nilai Ujian: ";
    cin >> nilai_ujian;

    // Menghitung nilai murni dari masing-masing nilai
    float nilai_murni_keaktifan = nilai_keaktifan * 0.20;
    float nilai_murni_tugas = nilai_tugas * 0.50;
    float nilai_murni_ujian = nilai_ujian * 0.30;

    // Menghitung nilai akhir
    float nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;

    // Menampilkan hasil
    cout << "\nHASIL PERHITUNGAN" << endl;
    cout << "Nama Siswa: " << nama_siswa << endl;
    cout << "Nilai Akhir: " << nilai_akhir << endl;

    return 0;
}
