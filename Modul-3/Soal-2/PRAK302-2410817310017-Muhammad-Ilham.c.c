#include <stdio.h>
int main(){
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d",&nilai);

if (nilai >= 80){
    printf("Nilai Anda: A");
}
else if (nilai >= 70){
    printf("Nilai Anda: B");
} 
else if (nilai >= 60){
    printf("Nilai Anda: C");
}
else if (nilai >= 50){
    printf("Nilai Anda: D");
}
else {
    printf("Nilai Anda: E");
}
}

