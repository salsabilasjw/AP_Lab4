#include <iostream>
#include <string>
using namespace std;

int main() {
    system ("cls") ;
    string kalimat;

    cout << "masukkan kalimat: ";
    getline(cin, kalimat);

    for(int i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "hasil: " << kalimat;

    return 0;
}