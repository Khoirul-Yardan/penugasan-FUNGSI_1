#include <stdio.h>

// Prototipe fungsi
void triangular(int n);

int main() {
    int n;
    
    // Input dari pengguna
    printf("Masukkan nilai n untuk mencari triangular number: ");
    scanf("%d", &n);
    
    // Memanggil fungsi triangular()
    triangular(n);
    
    return 0;
}

// Fungsi untuk menghitung triangular number
void triangular(int n) {
    int hasil = (n * (n + 1)) / 2;
    printf("Triangular number ke-%d adalah: %d\n", n, hasil);
}

