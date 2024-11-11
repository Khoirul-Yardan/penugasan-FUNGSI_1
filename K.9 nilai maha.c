#include <stdio.h>

// Prototipe fungsi hitungNilaiAkhir
float hitungNilaiAkhir(float absensi, float tugas, float uts, float uas);

// Definisi fungsi hitungNilaiAkhir
float hitungNilaiAkhir(float absensi, float tugas, float uts, float uas) {
    // Menghitung nilai akhir berdasarkan persentase yang diberikan
    float nilaiAkhir = (absensi * 0.10) + (tugas * 0.20) + (uts * 0.30) + (uas * 0.40);
    return nilaiAkhir;
}

int main() {
    float absensi, tugas, uts, uas, nilaiAkhir;

    // Input nilai Absensi, Tugas, UTS, dan UAS
    printf("Program Hitung Nilai Akhir Mata Kuliah\n");
    printf("Masukkan Nilai Absensi: ");
    scanf("%f", &absensi);
    printf("Masukkan Nilai Tugas: ");
    scanf("%f", &tugas);
    printf("Masukkan Nilai U.T.S: ");
    scanf("%f", &uts);
    printf("Masukkan Nilai U.A.S: ");
    scanf("%f", &uas);

    // Memanggil fungsi hitungNilaiAkhir untuk menghitung nilai akhir
    nilaiAkhir = hitungNilaiAkhir(absensi, tugas, uts, uas);

    // Menampilkan hasil nilai akhir
    printf("Nilai akhir yang diperoleh sebesar = %.2f\n", nilaiAkhir);

    return 0;
}
