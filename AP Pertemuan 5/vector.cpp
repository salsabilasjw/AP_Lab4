#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    system("cls");
    int n, banyak;

    // vektor
    vector<string> nama = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa", "Frans"};

    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    cout << endl;

    //Add data to vector
    // {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa", "Frans"}
    nama.push_back("Dwaia");
    cout << "Setelah menambah data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    cout << endl;

    // {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa", "Frans", "Dwaia"}
    nama.pop_back();
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    cout << endl;

    // {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa", "Frans"}
    nama.erase(nama.begin() + 2);
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }

    // {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa", "Frans"}
    nama.erase(nama.begin() + 2, nama.begin() + 4);
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    // {"Alya", "Rizky", "Frans"}
}