#include <iostream>
using namespace std;

void sapa (string nama) {
    cout << "halo, apa kabar " << nama << "! Selamat Belajar C++" << endl ;
}
int main() {
    system("cls");
    string namapengguna = "oryza";
    sapa(namapengguna);
    return 0;
}