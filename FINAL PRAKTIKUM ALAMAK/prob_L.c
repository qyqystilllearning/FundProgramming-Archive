#include <stdio.h>

// Fungsi untuk menghitung posisi terakhir yang beristirahat
int findLastPosition(int totalPeople, int skipCount) {
    int position = 0;
    // Loop untuk menghitung posisi terakhir yang beristirahat
    for (int i = 1; i <= totalPeople; ++i) {
        position = (position + skipCount) % i;
    }
    return position + 1; // Kembalikan posisi terakhir + 1 (indeks dimulai dari 0)
}

int main() {
    int numTests;
    scanf("%d", &numTests); // Masukkan jumlah test case

    for (int i = 0; i < numTests; ++i) {
        int totalPeople, skipCount;
        scanf("%d %d", &totalPeople, &skipCount); // Masukkan jumlah orang dan urutan untuk beristirahat
        int lastPosition = findLastPosition(totalPeople, skipCount); // Hitung posisi terakhir yang beristirahat
        printf("%d\n", lastPosition); // Tampilkan hasil
    }

    return 0;
}
