#include <stdio.h>

// Prototipe fungsi ganjil
int ganjil(int num);

// Definisi fungsi ganjil
int ganjil(int num) {
    if (num % 2 != 0) {
        return 1; // Bilangan ganjil
    } else {
        return 0; // Bilangan genap
    }
}

int main() {
    int bilangan;

    // Input bilangan
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);

    // Memanggil fungsi ganjil() dan menampilkan pesan
    if (ganjil(bilangan)) {
        printf("%d adalah bilangan ganjil.\n", bilangan);
    } else {
        printf("%d adalah bilangan genap.\n", bilangan);
    }

    return 0;
}
