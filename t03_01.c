// 12S25008-Rafli Batubara
#include <stdio.h>

int main() {
    int n, i;
    int nilai;
    long long total_nilai = 0;
    double rata_rata;

    // Meminta jumlah nilai yang akan dimasukkan
    scanf("%d", &n);

    // Membaca n buah nilai dan menghitung total
    for (i = 0; i < n; i++) {
        scanf("%d", &nilai);
        total_nilai += nilai;
    }

    // Menghitung rata-rata
    if (n > 0) {
        rata_rata = (double)total_nilai / n;
    } else {
        rata_rata = 0.0; // Menghindari pembagian dengan nol jika n=0
    }

    // Menampilkan hasil
    printf("%lld\n", total_nilai);
    printf("%.2f\n", rata_rata);

    return 0;
}
