#include <iostream>
using namespace std;
int main() {

string nim,nama;
int tugas1,tugas2,tugas3;
cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
cout << "Nim siswa:";
cin>>nama;
cout <<"Nilai Tugas I:";
cin >> tugas1;
cout <<"Nilai Tugas II: ";
cin >> tugas2;
cout <<"Nilai Tugas III:";
cin >> tugas3;
float rata_rata =(tugas1 +tugas2 +tugas3 )/3;
cout <<"\nHASIL PERHITUNGAN"
<< endl;
cout <<"Nim Siswa:"<<nim<< endl;
cout <<"Nama Siswa:"<<nama<< endl;
cout <<"Nilai Rata-rata:"<<rata_rata<<endl;
return 0;
}
