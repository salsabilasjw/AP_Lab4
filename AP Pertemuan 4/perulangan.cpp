#include <iostream>
using namespace std ;

int main () {
    system ("cls") ;

    // goto : pergi ke ...
    // goto A ;
    // B:
    // cout << "adalah" ;
    // goto C ;
    // E:
    // cout << "komputer" ;
    // goto F ;
    // C:
    // cout << "anak" ;
    // goto D ;
    // A:
    // cout << "aku" ;
    // goto B ;
    // F:
    // cout << "USU" ;
    // goto N ;
    // D:
    // cout << "ilmu" ;
    // goto E ;

    // N: 
    // return 0; 
    

    // menampilkan angka kelipatan 5
    // int i = 40 ;

    // lipat:
    // if (i%5 == 0) {
    //     cout << i << " " ;
    // }
    // i--;

    // if ( i >= 5) {
    //     goto lipat ;
    // }
    // cout << endl ;

    // int i = 10 ;
    // // while statement 
    // cout << "\nini while\n" ;
    // while (i >= 1) {
    //     cout << i << ". lorem" << endl ;
    //     i--;
    // }

    //do while statement
    // int i = 10 ;
    // string ulang ;
    // cout << "\nini do while\n" ;
    // do {
    //     cout << i << ". lorem" << endl ;
    //     cout << "mau ngulang ga?" ;
    //     cin >> ulang;
    // } while (ulang == "ulang") ;
    // cout << endl ;

    //for loop
    // for (inisialilsasi, kondisi, increment/decrement)
    // for (int i= 1; i <=5; i++) {
    //     cout << "acha cantik\n" ;
    // }
    // cout << endl ;

    // atribut length ()
    // string kata;
    // cout << "masukkan kata: " ;
    // cin >> kata ;
    // for (int i = 0; i < kata.length (); i++) {
    //     cout << i+1 << ". " << kata[i] << endl ;
    // }

    // nested for
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* " ;
        }
        cout << endl ;
    }


} 