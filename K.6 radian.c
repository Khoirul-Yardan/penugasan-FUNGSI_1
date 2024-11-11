#include <stdio.h>

#define PI 3.14159f // Definisi konstanta PI

// Prototipe fungsi radian
float radian(float derajat);

// Definisi fungsi radian
float radian(float derajat) {
    return derajat / 180.0f * PI;
}

int main() {
    float derajat, hasilRadian;

    // Input nilai derajat
    printf("Masukkan nilai derajat: ");
    scanf("%f", &derajat);

    // Memanggil fungsi radian untuk mengonversi derajat ke radian
    hasilRadian = radian(derajat);

    // Menampilkan hasil konversi
    printf("%.2f derajat = %.4f radian\n", derajat, hasilRadian);

    return 0;
}
