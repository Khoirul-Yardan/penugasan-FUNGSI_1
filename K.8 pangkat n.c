#include <stdio.h>

// Prototipe fungsi pangkat
long int pangkat(int m, int n);

// Definisi fungsi pangkat
long int pangkat(int m, int n) {
    long int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= m; // Mengalikan hasil dengan bilangan m
    }
    return hasil;
}

int main() {
    int m, n;
    long int hasilPangkat;

    // Input bilangan dan pangkat
    printf("Masukkan bilangan: ");
    scanf("%d", &m);
    printf("Masukkan pangkat: ");
    scanf("%d", &n);

    // Memanggil fungsi pangkat untuk menghitung m^n
    hasilPangkat = pangkat(m, n);

    // Menampilkan hasil pangkat
    printf("%d pangkat %d = %ld\n", m, n, hasilPangkat);

    return 0;
}
