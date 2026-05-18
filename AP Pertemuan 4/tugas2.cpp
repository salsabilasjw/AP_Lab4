#include <iostream>
#include <string>
using namespace std;

int main() {
    system ("cls") ;
    string kata, hasil = "";

    cout << "masukkan kata: ";
    cin >> kata;

    for(int i = 0; i < kata.length(); i++){
        for(int j = 0; j <= i; j++){
            hasil += kata[j];
        }
    }

    cout << "pesan rahasia: " << hasil;

    return 0;
}