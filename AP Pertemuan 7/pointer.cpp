#include <iostream>
using namespace std ;

int tambah_biasa (int par1, int par2) {
    par1 += par2 ;
    return par1 ;
}

int tambah_pointer (int *par1, int *par2) {
    *par1 += *par2 ;
    return *par1 ;
}

int main () {
    system ("cls") ;

    // int var = 10 ;
    // int *ptr;

    // ptr = &var ;

    // cout << "ALAMAT dari VARIABEL var                    --> " << &var << endl ;
    // cout << "ALAMAT YANG DITUNJUK oleh pointer           --> " << ptr << endl ;
    // cout << "ISI dari ALAMAT YANG DITUNJUK oleh pointer  --> " << *ptr << endl ;

    // case dimana pointer not exactly "menunjuk" sebua variabel. melainkan menunjuk sebuah nilai (array)
    // char *ptr ;
    // ptr = "jakarta" ;

    // cout << ptr << endl ;
    // cout << ptr << endl ;

    // pointer langsung ke char
    // char *ptr ;
    // *ptr = 'b' ;

    // cout << ptr ;

    // // ini adalah contoh penggunaan pointer yang salahh
    // // pointer to undefined behaviour
    // int *ptr ;
    // *ptr = 10 ;

    // cout << ptr ;
    // cout << *ptr ;
    // // cout << "hai" ;

    // operasi logika pada var pointer
    // int a = 100, b = 200 ;
    // int *pa, *pb ;

    // pa = &a ;
    // pb = &b ;

    // cout << pa << endl ;
    // cout << pb << endl ;

    // if (pa > pb) {
    //     cout << "alamat pa > pb" << endl ;
    // } else if (pb > pa) {
    //     cout << "alamat pa < pb" << endl ;
    // } else if (pb == pb) {
    //     cout << "alamat pa = pb" << endl ;
    // }

    // if (*pa > *pb) {
    //     cout << "isi pa > pb" << endl ;
    // } else if (*pb > *pa) {
    //     cout << "isi pa < pb" << endl ;
    // } else if (*pb == *pb) {
    //     cout << "isi pa = pb" << endl ;
    // }

    // pointer to array
    // int arr[] = {10,20,30,40,50,60} ;
    // int *ptr1 ;

    // ptr1 = arr ;
    // // it will automatical point to the first element in array
    // cout << " alamat yang ditunjuk pointer             : " << ptr1 << endl ;
    // cout << " alamat yang ditunjuk array index 0       : " << &arr[0] << endl ;
    // cout << " alamat yang ditunjuk array index 1       : " << &arr[1] << endl ;
    // cout << " isi dari alamat yang ditunjuk pointer    : " << *ptr1 << endl ;
    // cout << " isi dari alamat yang ditunjuk pointer +1 : " << *(ptr1+1) << endl ;

    // pointer in array of char
    // char arr1[] = "indonesia" ;
    // char *ptr2 ;

    // ptr2 = arr1 ;
    // it will automatical point to the first element in array
    // cout << " alamat yang ditunjuk pointer             : " << ptr2 << endl ;
    // cout << " alamat yang ditunjuk array index 0       : " << &arr1[0] << endl ;
    // cout << " alamat yang ditunjuk array index 1       : " << &arr[1] << endl ;
    // cout << " isi dari alamat yang ditunjuk pointer    : " << *ptr1 << endl ;
    // cout << " isi dari alamat yang ditunjuk pointer +1 : " << *(ptr2+1) << endl ;

    // pointer to pointer
    // string var = "joko" ;
    // string *ptr, **ptr_2 ;

    // ptr = &var ;
    // ptr_2 = &ptr ;

    // cout << "nilai var                          :" << var << endl ;
    // cout << "nilai pointer 1 (no bintang)       :" << ptr << endl ;
    // cout << "nilai pointer 1 (1 bintang)        :" << *ptr << endl ;
    // cout << "nilai pointer 2 (0  bintang)        :" << ptr_2 << endl ;
    // cout << "nilai pointer 2 (1 bintang)        :" << *ptr_2 << endl ;
    // cout << "nilai pointer 2 (2 bintang)        :" << **ptr_2 << endl ;

    // pointer as parameter
    // int a = 10, b = 5 ;
    // cout << "hasil dari fungsi biasa : " << tambah_biasa (a,b) << endl ;
    // cout << "nilai A setelah penjumlahan --> " << a << endl << endl ;

    // cout << "hasil dari fungsi pointer : " << tambah_pointer (&a,&b) << endl ;
    // cout << " nilai A setelah penjumlahan --> " << a << endl << endl ;

    // dynamic pointer
    int *ptr = new int ;
    *ptr = 30 ;

    cout << "isi variabel ptrL: " << *ptr << " dan alamat variabel ptr: " << &ptr << endl ;

    delete ptr ; // deallocation
    cout << "isi variabel ptr: " << *ptr << " dan alamat variabel ptr: " << &ptr << endl ;
} 