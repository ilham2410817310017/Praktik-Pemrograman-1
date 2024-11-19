#include <stdio.h>
int main(){
    int a;
    printf("Masukkan angka: ");
    scanf("%d",&a);

    if (a > 0){
        printf("Positif");
    }
    else if (a < 0){
        printf("Negatif");
    }
    else{
        printf("0");
    }
    return 0;

}