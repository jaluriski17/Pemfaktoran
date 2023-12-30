#include <stdio.h>

// Fungsi untuk menghitung faktorial
int hitungFaktorial(int bilangan) {
    if (bilangan == 0 || bilangan == 1) {
        return 1; // Faktorial dari 0 dan 1 adalah 1
    } else {
        return bilangan * hitungFaktorial(bilangan - 1); // Rekursif untuk menghitung faktorial
    }
}

int main() {
    int bilangan;

    // Meminta input dari pengguna
    printf("Masukkan bilangan untuk menghitung faktorial: ");
    scanf("%d", &bilangan);

    // Memastikan input positif
    if (bilangan < 0) {
        printf("Faktorial tidak didefinisikan untuk bilangan negatif.\n");
    } else {
        // Memanggil fungsi hitungFaktorial untuk menghitung faktorial
        int hasil = hitungFaktorial(bilangan);

        // Menampilkan hasil
        printf("Faktorial dari %d adalah %d\n", bilangan, hasil);
    }

    return 0;
}
