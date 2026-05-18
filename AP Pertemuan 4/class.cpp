#include <iostream>
using namespace std ;

class ContohAkses {
    private:
    int privateVar;

    protected:
    int protectedVar;

    public:
    int publicVar;

    //Constructor
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    // // Constructor berparameter
    // ContohAkses(int x) {
    //     privateVar = x;
    //     protectedVar = 2;
    //     publicVar = 3;
    // }

    void tampilkanSemua () {
        cout << "akses dari dalam class : " << endl ;
        cout << privateVar << endl ;
        cout << protectedVar << endl ;
        cout << publicVar << endl ;

    }
};
