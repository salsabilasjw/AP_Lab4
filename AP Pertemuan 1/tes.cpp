#include <iostream>  // library input output 
using namespace std ; // agar lebih rapi dan tidak menggunakan std disetiap barisnya 

int main () // fungsi utama sebuah program 
{
    string nama, nip, departemen, jabatan ; // variabel string buat nyimpen data tulisan
    int umur, gaji ; // variabel integer buat nyimpen data angka 

    cout << "masukkan nama : " << endl; // buat masukin inputan nama 
    getline (cin, nama); // buat nerima inputannya

    cout << "masukkan nip : " << endl; // buat masukin inputan nip 
    cin >> nip ; // buat nerima inputannya 

    cout << "masukkan departemen : " << endl; // buat masukin inputan departemen 
    cin >> departemen ; // buat nerima inputannya 

    cout << "masukkan jabatan : " << endl; // buat masukin inputan jabatan 
    cin >> jabatan ; // buat nerima inputannya 

    cout << "masukkan umur :" << endl; // buat masukin inputan umur 
    cin >> umur ; // buat nerima inputannya 

    cout << "masukkan gaji :" << endl; // buat masukin inputan gaji 
    cin >> gaji ; // buat nerima inputannya 

    cout << "\n"; // ngasih jarak 
    cout << "nama : " << nama << endl; // nampilin data nama 
    cout << "nip : " << nip << endl; // nampilin data nip 
    cout << "departemen : " << departemen << endl; // nampilin data departemen 
    cout << "jabatan : " << jabatan << endl; // nampilin data jabatan 
    cout << "umur : " << umur << endl ; // nampilin data umur 
    cout << "gaji : " << gaji << endl ; // nampilin data gaji
    cout << endl; // baris kosong 

}

// gecth dan getche cuma bisa ngerekam satu karakter. gecth fungsinya supaya bisa lanjut tanpa enter. getche 