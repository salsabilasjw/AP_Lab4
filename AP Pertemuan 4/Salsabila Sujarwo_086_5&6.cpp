#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <vector>
using namespace std;

// fungsi utk generate angka random 1-20
int generateAngka() {
    return rand() % 20 + 1;
}

// fungsi utk generate operator random
char generateOperator() {
    char ops[] = {'+', '-', '*', '%'}; // array operator
    int idx = rand() % 4;
    return ops[idx];
}

// fungsi utk menghitung jawaban benar
int hitungJawaban(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '%': return a % b;
        default: return 0;
    }
}

// fungsi utk menjalankan kuis
int mulaiKuis(int jumlahSoal) {
    int skor = 0;
    for(int i = 0; i < jumlahSoal; i++) {
        int a = generateAngka();
        int b = generateAngka();
        char op = generateOperator();

        cout << "Soal " << i+1 << ": " << a << " " << op << " " << b << " = ";
        int jawabanUser;
        cin >> jawabanUser;

        int jawabanBenar = hitungJawaban(a, b, op);
        if(jawabanUser == jawabanBenar) {
            cout << "Benar!\n";
            skor++;
        } else {
            cout << "Salah. Jawaban benar: " << jawabanBenar << "\n";
        }
    }
    return skor;
}

// fungsi utk menampilkan history
void tampilkanHistory(const vector<string>& history) {
    if(history.empty()) {
        cout << "Belum ada history kuis.\n";
    } else {
        for(size_t i = 0; i < history.size(); i++) {
            cout << "Sesi " << i+1 << ": " << history[i] << "\n";
        }
    }
}

int main() {
    srand(time(0)); // seed random
    vector<string> history;
    int pilihan;

    do {
        cout << "\n=== Menu Program Kuis Matematika ===\n";
        cout << "1. Mulai Kuis Baru\n";
        cout << "2. Lihat History Kuis\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if(pilihan == 1) {
            int jumlahSoal;
            cout << "masukkan jumlah soal (1-10): ";
            cin >> jumlahSoal;

            if(jumlahSoal < 1 || jumlahSoal > 10) {
                cout << "jumlah soal tidak valid!\n";
                continue;
            }

            int skor = mulaiKuis(jumlahSoal);
            cout << "Skor akhir: " << skor << "/" << jumlahSoal << "\n";

            // simpan ke history
            history.push_back(to_string(skor) + "/" + to_string(jumlahSoal));
        }
        else if(pilihan == 2) {
            tampilkanHistory(history);
        }
        else if(pilihan == 3) {
            cout << "program selesai.\n";
        }
        else {
            cout << "pilihan tidak valid!\n";
        }

    } while(pilihan != 3);

    return 0;
}