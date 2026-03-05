#include <stdio.h>

#define MAX_N 1000 // Batasan maksimum untuk jumlah nilai, bisa disesuaikan jika diperlukan

int main() {
    int n, i;
    int scores[MAX_N]; // Array untuk menyimpan nilai-nilai
    int sum = 0;
    int min_score = 101; // Inisialisasi dengan nilai lebih tinggi dari rentang skor (0-100)
    int max_score = -1;  // Inisialisasi dengan nilai lebih rendah dari rentang skor (0-100)
    
    // Membaca jumlah nilai (n)
    scanf("%d", &n);
    
    // Membaca n nilai dan menghitung jumlahnya, serta menyimpannya ke dalam array
    // Sekaligus mencari nilai minimum dan maksimum
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
        
        if (scores[i] < min_score) {
            min_score = scores[i];
        }
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }
    
    // Menghitung rata-rata
    double average = (double)sum / n;
    
    // Menghitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    int count_above_average = 0;
    for (i = 0; i < n; i++) {
        if (scores[i] >= average) {
            count_above_average++;
        }
    }

    // Menghitung rentang nilai (maksimum - minimum)
    int range = max_score - min_score;
    
    // Menampilkan jumlah, rata-rata, banyaknya mahasiswa di atas rata-rata, dan rentang nilai sesuai format
    printf("%d\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_average);
    printf("%d\n", range);
    
    return 0;
}