#include <stdio.h>

int main() {
    int putaran = 5;
    double jarak_tempuh_km = 14.0;
    double pi = 3.14; 
    double keliling_taman = jarak_tempuh_km / putaran;
    double jari_jari = keliling_taman / (2 * pi); 

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.2f Kilometer\n", jarak_tempuh_km);
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}
