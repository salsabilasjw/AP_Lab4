#include <iostream>
using namespace std;

class ContohAkses {
    int n; // private
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar; // dibuka untuk umum

    // Constructor
    // ContohAkses() {
    //     privateVar = 1;
    //     protectedVar = 2;
    //     publicVar = 3;
    // }

    // Constructor berparameter
    // ContohAkses(int x) {
    //     privateVar = x;
    //     protectedVar = 2;
    //     publicVar = 3;
    // }

    void tampilkansemua() {
        cout << "akses dari dalam class" : << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    };

    class turunan : public contohakses 
    public: 
    void aksesprotected () {
        cout << "akses dari dalam class turunan : " << endl;
        cout << obj.publicVar << endl;
        cout << obj.protectedVar << endl;
        cout << obj.privateVar << endl;
    }
};

    int main () {
        system ("cls");
        ContohAkses obj (1);
        obj.tampilkansemua()

        cout << "akses dari luar class : " << endl;
        cout << obj.publicVar << endl;
        // cout << obj.protectedVar << endl; // error
        // cout << obj.privateVar << endl; // error
        
        //turunan tur;
        tur.aksesprotected();
        system("pause");
};