#include <stdio.h>

// Prototipe fungsi konversi
float konversi(float suhu, char asal, char tuj);

// Definisi fungsi konversi
float konversi(float suhu, char asal, char tuj) {
    float hasil;

    // Konversi dari Celsius
    if (asal == 'C') {
        if (tuj == 'F') {
            hasil = (suhu * 9 / 5) + 32; // C ke F
        } else if (tuj == 'R') {
            hasil = suhu * 4 / 5; // C ke R
        } else {
            hasil = suhu; // Jika asal dan tujuan sama
        }
    }
    // Konversi dari Fahrenheit
    else if (asal == 'F') {
        if (tuj == 'C') {
            hasil = (suhu - 32) * 5 / 9; // F ke C
        } else if (tuj == 'R') {
            hasil = (suhu - 32) * 4 / 9; // F ke R
        } else {
            hasil = suhu; // Jika asal dan tujuan sama
        }
    }
    // Konversi dari Reamur
    else if (asal == 'R') {
        if (tuj == 'C') {
            hasil = suhu * 5 / 4; // R ke C
        } else if (tuj == 'F') {
            hasil = (suhu * 9 / 4) + 32; // R ke F
        } else {
            hasil = suhu; // Jika asal dan tujuan sama
        }
    } else {
        printf("Satuan asal tidak dikenali!\n");
        hasil = 0.0;
    }

    return hasil;
}

int main() {
    float suhu, hasilKonversi;
    char asal, tuj;

    // Input suhu, satuan asal, dan satuan tujuan
    printf("Masukkan suhu sumber: ");
    scanf("%f", &suhu);
    printf("Masukkan satuan asal (C/F/R): ");
    scanf(" %c", &asal); // Spasi sebelum %c agar membaca input karakter dengan benar
    printf("Masukkan satuan tujuan (C/F/R): ");
    scanf(" %c", &tuj);

    // Memanggil fungsi konversi
    hasilKonversi = konversi(suhu, asal, tuj);

    // Menampilkan hasil konversi
    printf("Hasil konversi suhu %.2f %c = %.2f %c\n", suhu, asal, hasilKonversi, tuj);

    return 0;
}
