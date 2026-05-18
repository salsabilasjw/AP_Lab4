#include <iostream>
// #include "clear.h"
#include <unistd.h>
using namespace std;
int main() {
    system ("cls");

    //goto :pergi ke ...
    // goto A;
    // B:
    // cout <<"adalah ";
    // goto C;
    // D:
    // cout <<"komputer ";
    // goto F;
    // C:
    // cout <<"anak ";
    // goto D;
    // A:
    // cout <<"aku ";
    // goto B;
    // F:
    // cout <<"USU ";
    // goto G;
    // cout <<"ilmu ";
    // G:
    // cout << endl;

    // Menampilkan angka kelipatan 5
    // int i = 40;

    // lipat:
    // if (i % 5== 0) {
    //     cout << i << " ";
    // }
    // i --;
    // if (i >=5){
    //     goto lipat;
    // }
    // cout << endl;

    //while statement
    // int i = 10;

    // cout << "\nini while\n";
    // while( i>=1 ){
    //     cout << i << ". Lorem" << endl;
    //     i--;
    // }

    //Do while statement
    // int i = 10;
    // string ulang;
    // cout << "\nini do while\n";
    // do {
    //     cout << i << ". Lorem" << endl;
    //     cout << "Mau ulang ga?";
    //     cin >> ulang;
    // } while (ulang == "ulang");
    // cout << endl;

    //for loop
    //for (inisialisasi,kondisi,indrement/dicrement)
    // for (int i = 1; i <= 5; i++) {
    //     cout <<"Hidup jowoki!\n";
    // }
    // cout << endl;
    
    //atribut lenght()
    // string kata;
    // cout <<"Masukkan kata: ";
    // cin>> kata;
    // for (int i = 0; i < kata.length(); i++) {
    //     cout << i + 1 << ". " << kata [i] << endl;
    //  }

    //Nested for
   for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << endl;
 }

}