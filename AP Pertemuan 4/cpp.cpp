// #include <iostream>
// using namespace std ;

// double faktorial(int n) {
//     system ("cls") ;
//     if (n == 0 || n == 1) {
//         return 1 ;
//     }
//     return n * faktorial (n - 1) ;
// }

// int main () {
//     int angka ;
//     cout << "masukkan angka: " ;
//     cin >> angka ;
//     cout << angka << "! =" << faktorial (angka) ;

//     return 0 ;
// }

// #include <iostream>
// #include <vector>
// using namespace std ;

// int main () {
//     vector <int> nilai ;
//     int n, data ;

//     cout >> "jumlah data: " ;
//     cin >> n ;

//     for (int i = 0; i < n ; i++) {
//         cout << "nilai ke- " << i + 1 << ": " ;
//         cin >> data ;
//         nilai.push_back (data) ;
//     }

//     int total = 0 ;
    
//     for (int i = 0; i < nilai.size () ; i++) {
//         total += nilai [i] ;
//     }

//     double rataRata = (double) total / nilai.size() ;
//     cout << "rata-rata = " << rataRata ;

//     return 0 ;
// }

#include <iostream>
#include <vector>
using namespace std ;

double rata_rata(vector<int> data, int &total) {
    total = 0 ;

    for (int i = 0 ; i < (int)data.size() ; i++) {
        total = total + data[i] ;
    }

    return (double) total / data.size() ;
}

int main() {
    vector<int> nilai ;
    int jumlah, angka, total ;

    cout << "jumlah data : " ;
    cin >> jumlah ;

    for (int i = 0; i < jumlah ; i++) {
        cout << "input nilai ke-" << i + 1 << " : " ;
        cin >> angka ;

        nilai.push_back(angka) ;
    }

    double hasil = rata_rata(nilai, total) ;

    cout << "\ntotal nilai : " << total << endl ;
    cout << "rata-rata   : " << hasil << endl ;

    return 0 ;
}