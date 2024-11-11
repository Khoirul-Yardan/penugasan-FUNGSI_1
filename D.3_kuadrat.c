#include <stdio.h>

// Prototipe fungsi
float kuadrat(float x);

int main() {
    float x, hasil;
    
    // Input dari pengguna
    printf("Masukkan bilangan yang ingin dikuadratkan: ");
    scanf("%f", &x);
    
    // Memanggil fungsi kuadrat() dan menyimpan hasilnya
    hasil = kuadrat(x);
    
    // Menampilkan hasil kuadrat
    printf("Hasil kuadrat dari %.2f adalah %.2f\n", x, hasil);
    
    return 0;
}

// Fungsi untuk menghitung nilai kuadrat dari sebuah bilangan
float kuadrat(float x) {
    return x * x;
}
