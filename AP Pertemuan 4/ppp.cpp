#include <iostream>
using namespace std ;

int main () {
    system ("cls") ;
    int angka ;

    cout << "masukkan angka" ;
    cin >> angka ;

    if ( angka % 2 == 0) {
        cout << "angka genap" ;
    } else {
        cout << "angka ganjil" ;
    }

    return 0; 
} 