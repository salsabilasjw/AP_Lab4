#include <iostream>
#include <conio.h> //getch(), getche(), get
using namespace std;


int main() {
    system("cls");
    string nama,nim,waktiu;
    char kom,jenis_kelamin;
    float ipk;
    cout << "Hello world\n";

    // cin >> nama;
    // cout << nama;

    cout <<"Masukkan Nama : ";
    getline(cin, nama);
    cout <<"Masukkan kom: "; cin >> kom;
    cout <<"Masukkan NIM : "; cin >> nim; //123456
    cout <<"Masukkan IPK : "; cin >> ipk; //3.15
    cout << "Masukkan jenis kelamin (L/P) : ";
    jenis_kelamin = getche ();
    cout << "\n";

    cout << "nama:" <<nama << endl;
    cout << "kom:" << kom << endl;
    cout << "nim:" << nim << endl;
    cout << "ipk:"  << ipk << endl;
    cout << "jenis kelamin: ";
    putchar(jenis_kelamin);
    cout << endl;
    
    cout << "Masukan waktu: "; cin >> waktiu;
   
    cout << "\nSelamat " << waktiu << "," << nama;

    getch();

}