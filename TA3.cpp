#include <iostream>
using namespace std;

int main() {
    int nilai[] = {55, 58, 60, 70, 73, 75, 80, 85, 90, 92};
    int n = sizeof(nilai) / sizeof(nilai[0]);
    int target, KKM, i, m;
    int l = 0, r = n - 1, pos = -1;

    cout << "Daftar nilai mahasiswa: ";
    for (i = 0; i < n; i++){
        cout << nilai[i];
        if (i != n - 1) cout << ", ";
    }
    cout << endl;


    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;

    cout << "Masukkan KKM: ";
    cin >> KKM;

    while (l <= r) {
        m = l + (r - l) / 2;
        cout << "Median indeks: " << m << ", nilai: " << nilai[m] << endl;

        if (nilai[m] == target) {
            pos = m;
            break;
        } 
        else if (nilai[m] < target) {
            cout << "Mencari di kanan" << endl;
            l = m + 1;
        } 
        else {
            cout << "Mencari di kiri" << endl;
            r = m - 1;
        }
    }

    if (pos != -1) {
        cout << "Siswa ditemukan pada indeks ke-" << pos << endl;
        if (nilai[pos] >= KKM)
            cout << "Nilai siswa memenuhi KKM!" << endl;
        else
            cout << "Nilai siswa belum memenuhi KKM." << endl;
    } 
    else {
        cout << "Siswa dengan nilai tersebut tidak ditemukan." << endl;
    }

    return 0;
}