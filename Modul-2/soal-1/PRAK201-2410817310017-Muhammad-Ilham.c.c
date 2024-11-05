#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas_paralel[20], tempat_tanggal_lahir[50], alamat[100], hobby[50], no_hp[20];

    printf("Masukkan Nama: ");
    scanf(" %s", nama); 
    
    printf("Masukkan NIM: ");
    scanf("%s", nim);
    
    printf("Masukkan Kelas Paralel: ");
    scanf("%s", kelas_paralel);
    
    printf("Masukkan Tempat/Tanggal Lahir (Kota/dd-mm-yyyy): ");
    scanf(" %s", tempat_tanggal_lahir);
    
    printf("Masukkan Alamat: ");
    scanf(" %s", alamat);
    
    printf("Masukkan Hobby: ");
    scanf(" %s", hobby);
    
    printf("Masukkan No. HP: ");
    scanf("%s", no_hp);

    printf("\nBIODATA\n");
    printf("Nama                : %s\n", nama);
    printf("NIM                 : %s\n", nim);
    printf("Kelas Paralel       : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir: %s\n", tempat_tanggal_lahir);
    printf("Alamat              : %s\n", alamat);
    printf("Hobby               : %s\n", hobby);
    printf("No. HP              : %s\n", no_hp);

    return 0;
}
