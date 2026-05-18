#include <iostream> 
using namespace std;

int main() {
    system ("cls") ;
    cout <<"================================="<< endl;
    cout <<"        Billi Jaya Cell " << endl; 
    cout <<"================================="<< endl;

    int harga, dp; 

    // input harga
    cout << "Masukkan harga HP: ";
    cin >> harga;

    if (harga < 1000000) { // cek harga minimal ; kalau ga memenuhi lgsg berenti
        cout << "Error: harga terlalu murah, tidak bisa kredit" << endl;
    return 0;
    }

    // input DP
    cout << "Masukkan DP: ";
    cin >> dp; 

    int min_dp = harga * 25 / 100; // hitung DP minimal 25%

    if (dp < min_dp) { // jika DP kurang
        cout << "Maaf, DP minimal adalah Rp " << min_dp << endl;
        cout << "Pengajuan kredit ditolak." << endl;
    return 0;
    }

    int persen = (dp * 100) / harga; // hitung persen DP

    float bunga; 
    int admin;   

    int kategori; 

    // menentukan kategori dari persen DP
    if (persen >= 25 && persen <= 40) kategori = 1; // kelompokkan user kategori 1-4
    else if (persen <= 60) kategori = 2; 
    else if (persen <= 99) kategori = 3;
    else kategori = 4;

    // switch untuk bunga & admin ; nentuin bunga & biaya admin, lbih rapi untuk pilihan tetap
    switch(kategori) {
        case 1:
            bunga = 2.5; 
            admin = 50000; 
            break;
        case 2:
            bunga = 1.5;
            admin = 0; 
            break;
        case 3:
            bunga = 0.5; 
            admin = 0;
            break;
        case 4:
            bunga = 0; 
            admin = 0;
            break;
    }

    int tenor; 

    // input tenor (looping) ; tenor hrs kelipatan 3 jadi kalau bkn kelipatan 3 program hrs input lg
    do {
        cout << "Masukkan tenor (bulan): ";
        cin >> tenor;

        if (tenor % 3 != 0 || tenor > 12) {
            cout << "Input tidak valid! Tenor harus kelipatan 3 dan maksimal 12 bulan" << endl;
        }

    } while (tenor % 3 != 0 || tenor > 12); // looping sampai benar ; fungsinya agar user input ulang sampai benar

    // perhitungan
    int pokok = (harga - dp) + admin; 
    int total_bunga = pokok * (bunga / 100) * tenor;  
    int total = pokok + total_bunga; 
    int perbulan = total / tenor; 

    // output struk 
cout << "\n=== Struk Simulasi ===" << endl;
cout << "Harga Barang    : Rp " << harga << endl;
cout << "Uang Muka (DP)  : Rp " << dp << " (" << persen << "%)" << endl;

cout << "Kategori DP     : ";
if (kategori == 1) cout << "25% - 40%" << endl;
else if (kategori == 2) cout << "41% - 60%" << endl;
else if (kategori == 3) cout << "61% - 99%" << endl;
else cout << "100% (Lunas)" << endl;

cout << "Suku Bunga      : " << bunga << "% per bulan" << endl;
cout << "Biaya Admin     : Rp " << admin << endl;

cout << "\nMasukkan Tenor (bulan, kelipatan 3): " << tenor << endl;

cout << "\n--- RINCIAN ANGSURAN ---" << endl;
cout << "Pokok Pinjaman  : Rp " << pokok << endl;
cout << "Total Bunga     : Rp " << total_bunga << endl;
cout << "Total Pinjaman  : Rp " << total << endl;
cout << "Angsuran/Bulan  : Rp " << perbulan << " (selama " << tenor << " bulan)" << endl;

cout << "\nTerima kasih telah berbelanja!" << endl;

    return 0;
}