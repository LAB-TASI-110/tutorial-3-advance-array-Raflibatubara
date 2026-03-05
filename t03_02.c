// 12S25008-Rafli Batubara
#include <stdio.h>
#include <stdlib.h> // Diperlukan untuk malloc dan free

int main() {
    int n, i;
    long long total_nilai = 0;
    double rata_rata;
    int count_above_or_equal_average = 0;
    int *nilai_mahasiswa;

    scanf("%d", &n);

    if (n <= 0) {
        printf("0\n0.00\n0\n");
        return 0;
    }

    nilai_mahasiswa = (int *)malloc(n * sizeof(int));
    if (nilai_mahasiswa == NULL) {
        // Penanganan kesalahan jika alokasi memori gagal
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &nilai_mahasiswa[i]);
        total_nilai += nilai_mahasiswa[i];
    }

    rata_rata = (double)total_nilai / n;

    for (i = 0; i < n; i++) {
        if (nilai_mahasiswa[i] >= rata_rata) {
            count_above_or_equal_average++;
        }
    }

    printf("%lld\n", total_nilai);
    printf("%.2f\n", rata_rata);
    printf("%d\n", count_above_or_equal_average);

    free(nilai_mahasiswa);

    return 0;
}
