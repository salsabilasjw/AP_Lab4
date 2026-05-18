#include <iostream>
using namespace std ;

int main () {
    system ("cls") ;

    // goto : pergi ke ...
    goto A ;
    B:
    cout << "adalah" ;
    goto C ;
    E:
    cout << "komputer" ;
    goto F ;
    C:
    cout << "anak" ;
    goto D ;
    A:
    cout << "aku" ;
    goto B ;
    F:
    cout << "USU" ;
    goto N ;
    D:
    cout << "ilmu" ;
    goto E ;

    N: 
    return 0; 
     }