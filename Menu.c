#include <stdio.h>
#include <stdlib.h>

void pilihan1() {
    int n;
    printf("Anda memilih Pilihan 1.\n");
    printf("Masukkan Nim Anda : ");
    scanf("%d", &n);
    
    int binaryNum[32]; //ukuran array yang cukup besar untuk menyimpan representasi biner
    int i = 0; //Indeks yang menunjukkan posisi saat ini dalam array binerNum
    while(n>0){
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
    }
    //menampilkan representasi biner dari bilangan desimal
    printf("Representasi biner : ");
    for(int j = i - 1; j >= 0; j--){
      printf("%d", binaryNum[j]);
  }
  printf("\n");
}

void pilihan2() {
    printf("Apa itu CRC ? \n");
    printf("Program CRC (Cyclic Redundancy Check) adalah program yang mengimplementasikan algoritma CRC untuk melakukan deteksi kesalahan pada data yang dikirim atau disimpan. CRC adalah salah satu metode deteksi kesalahan yang umum digunakan dalam komunikasi data dan penyimpanan data.");
      
}

void pilihan3() {
    printf("Anda memilih Pilihan 3.\n");
    // Tambahkan aksi yang sesuai untuk Pilihan 3
}

int main() {
    int choice;
    int decimalNumber;
    while (1) {
        system("cls"); // Jika Anda menggunakan Windows, gunakan "cls"; untuk Linux, gunakan "clear"
        
        printf("==========================\n");
        printf("   Program CRC \n");
        printf("==========================\n");
         printf("1. Masuk Ke Program\n");
        printf("2. Mengenai Program ( Apa itu CRC ? ) \n");
        printf("3. Melihat Hasil \n");
        printf("4. Keluar \n");
        printf("==========================\n");

        printf("Silakan pilih (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                pilihan1();
                break;
            case 2:
                pilihan2();
                break;
            case 3:
                pilihan3();
                break;
            case 4:
                printf("Sampai jumpa!\n");
                return 0;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

        printf("Tekan Enter untuk melanjutkan...");
        getchar();
        getchar(); // Gunakan dua getchar() untuk menunggu Enter
    }

    return 0;
}
