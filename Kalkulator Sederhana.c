#include<stdio.h>

int main(){
    int pilihan;
    float angka1, angka2, hasil;
    float riwayat[100]; // Array untuk menyimpan hasil
    int count = 0; // Counter untuk riwayat hasil
    char lanjut;

    printf("=== Program Kalkulator Sederhana ===\n");

    do {
        printf("\nPilih operasi:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("Pilihan (1-4): ");
        scanf("%d", &pilihan);

        if (pilihan < 1 || pilihan > 4){
            printf("Error, Tolong Masukkan Input yang Valid.\n");
            continue;
        }
        
        // Input angka
        printf("Masukkan angka pertama: ");
        scanf("%f", &angka1);
        printf("Masukkan angka kedua: ");
        scanf("%f", &angka2);

        // Conditional statement
        if (pilihan == 1)
        {
            hasil = angka1 + angka2;
            printf("Hasil = %.2f\n", hasil);
        } else if (pilihan == 2)
        {
            hasil = angka1 - angka2;
            printf("Hasil = %.2f\n", hasil);
        } else if (pilihan == 3)
        {
            hasil = angka1 * angka2;
            printf("Hasil = %.2f\n", hasil);
        } else if (pilihan == 4)
        {
            hasil = angka1 / angka2;
            printf("Hasil = %.2f\n", hasil);
        }

        // Simpan ke array
        if (count < 100) {
            riwayat[count] = hasil;
            count++;
        }

     printf("\nApakah ingin melakukan operasi lagi? (y/n): ");
     scanf(" %c", &lanjut); // Spasi sebelum %c untuk mengabaikan newline
    
    } while (lanjut == 'y' || lanjut == 'Y');

   
    
    // Looping untuk menampilkan hasil sebelumnya
    printf("\nRiwayat hasil perhitungan:\n");
    for (int i = 0; i < count; i++) {
    printf("Hasil ke-%d = %.2f\n", i + 1, riwayat[i]);
    }
    
    printf("\nTerima kasih telah menggunakan kalkulator ini!\n");

    return 0;
}
