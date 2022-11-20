#include <stdio.h>

int main() {
    int count, passed;
    float indeks, sum, mean;

    sum = 0;
    count = 0;
    passed = 0;
    while (indeks != -999) {
        scanf("%f", &indeks);  
        if ((indeks >= 0) && (indeks <= 4)) {
            sum += indeks;
            count += 1;
            if (indeks >= 3) {
                passed += 1;
            }
        }
    }
    if (count == 0) {
        printf("Tidak ada data\n");
    }
    else {
        printf("Jumlah mahasiswa yang lulus = %d\n", passed);
        mean = sum/count;
        printf("Nilai rata-rata = %.2f\n", mean);
        if ((mean >= 0) && (mean < 1)) {
            printf("Indeks akhir kelas = E\n");
        }
        else if ((mean >= 1) && (mean < 2)) {
            printf("Indeks akhir kelas = D\n");
        }
        else if ((mean >= 2) && (mean < 3)) {
            printf("Indeks akhir kelas = C\n");
        }
        else if ((mean >= 3) && (mean < 4)) {
            printf("Indeks akhir kelas = B\n");
        }
        else {
            printf("Indeks akhir kelas = A\n");
        }
    }
    return 0;
}