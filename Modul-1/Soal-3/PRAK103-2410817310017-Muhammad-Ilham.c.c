#include <stdio.h>

int main() {
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);

    double hasil = (a + b) * x / (double)y; 
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);

    return 0;
}
