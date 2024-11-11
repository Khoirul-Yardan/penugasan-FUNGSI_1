#include <stdio.h>

// Prototipe fungsi faktorial
long int faktorial(int n);

// Definisi fungsi faktorial
long int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Faktorial dari 0 dan 1 adalah 1
    } else {
        return n * faktorial(n - 1); // Rekursif untuk menghitung faktorial
    }
}

int main() {
    int bilangan;
    long int hasil;

    // Input bilangan
    printf("Masukkan bilangan untuk menghitung faktorial: ");
    scanf("%d", &bilangan);

    // Memanggil fungsi faktorial dan menyimpan hasilnya
    hasil = faktorial(bilangan);

    // Menampilkan hasil faktorial
    printf("Faktorial dari %d adalah %ld\n", bilangan, hasil);

    return 0;
}
