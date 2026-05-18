#include <stdio.h> // library input output 

int main() { // fungsi utama sebuah program 
    char nama [30] ; // variabel buat nyimpen data nama 
    char departemen [30] ; // variabel buat nyimpen data departemen 
    char jabatan [30] ; // variabel buat nyimpen data jabatan 
    char nip [30] ; // variabel buat nyimpen data nip (bukan angka untuk ngitung) 
    int umur ; // variabel buat nyimpen data umur (bilangan bulat) 
    float gaji ; // variabel buat nyimpen data gaji (bilangan desimal) 

    printf ("masukkan nama"); //nampilin permintaan input nama 
    scanf ("%s", nama); // ngambil input nama dari user 

    printf ("masukkan departemen"); //nampilin permintaan input departemen 
    scanf ("%s", departemen);  // ngambil input departemen dari user 

    printf ("masukkan jabatan"); //nampilin permintaan input jabatan
    scanf ("%s", jabatan);  // ngambil input jabatan dari user 

    printf ("masukkan nip"); //nampilin permintaan input nip 
    scanf ("%s", nip);  // ngambil input nip dari user 

    printf ("masukkan umur"); //nampilin permintaan input umur 
    scanf ("%d", &umur);  // ngambil input umur dari user 
    
    printf ("masukkan gaji"); //nampilin permintaan input gaji 
    scanf ("%f", &gaji);  // ngambil input gaji dari user 

    printf("\n"); // buat baris baru
    printf ("nama saya %s\n" , nama); // nampilin data nama
    printf ("dari departemen %s\n" , departemen); // nampilin data departemen
    printf ("jabatan %s\n" , jabatan); // nampilin data jabatan
    printf ("dengan nip %s\n" , nip); // nampilin data nip
    printf ("umur saya %d\n" , umur); // nampilin data umur
    printf ("gaji %f" , gaji); // nampilin data gaji
    
    return 0; // tanda program selesai
}