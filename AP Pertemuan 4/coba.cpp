#include <iostream>
using namespace std;

void tampilProfilMahasiswa (string nama, string nim, string kelas, string prodi) {
    cout << " Identitas Mahasiswa " << endl;
    cout << "nama   : " << nama << endl;
    cout << "nim    : " << nim << endl;
    cout << "kelas  : " << kelas << endl;
    cout << "prodi  : " << prodi << endl;
}

int main() {
    system ("cls") ;
    string nama, nim, kelas, prodi;

    cout << "masukkan nama : ";
    getline(cin, nama);
    cout << "masukkan nim : ";
    getline(cin, nim);
    cout << "masukkan kelas : ";
    getline(cin, kelas);
    cout << "masukkan prodi : ";
    getline(cin, prodi);

    tampilProfilMahasiswa(nama, nim, kelas, prodi);

    return 0;
}