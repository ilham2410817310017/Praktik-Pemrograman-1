#include <stdio.h>
int main(){
    float a, b;
    scanf ("%f",&a);
    scanf ("%f",&b);
    
    printf("Volume = %.2f\n",22.0/7.0 * a * a * b);
    printf("Luas = %.2f\n",2 * 22.0/7.0 * a * (a+b));
    printf("Keliling = %.2f\n",2 * 22.0/7.0 * a);
    return 0;
}
