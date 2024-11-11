#include <stdio.h>

// Deklarasi fungsi menu
void menu();

int main() {
    int n, i;
    
    // Meminta input dari pengguna
    printf("Masukkan jumlah pengulangan: ");
    scanf("%d", &n);
    
    // Perulangan untuk memanggil fungsi menu() sebanyak n kali
    for (i = 0; i < n; i++) {
        menu();
    }
    
    return 0;
}

// Definisi fungsi menu
void menu() {
    printf("Pilihan \n");
}
