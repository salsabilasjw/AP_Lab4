#include <iostream>
using namespace std ;

int main () {
    system ("cls") ;
    float bmi, berat, tinggi ;

    cout << "masukkan berat badan (kg): " ;
    cin >> berat ;
    cout << "masukkan tinggi badan (meter): " ;
    cin >> tinggi ;

    bmi = berat / (tinggi * tinggi) ;
    cout << "nilai bmi: " << bmi << endl ;

    if (bmi < 18.5) {
        cout << "berat badan kurang" << endl ;
    } else if (bmi < 25) {
        cout << "berat badan normal" << endl ;
    } else if (bmi < 30) {
        cout << "berat badan berlebih" << endl ;
    } else {
        cout << "obesitas" << endl ;
    }
    
    return 0 ;
}