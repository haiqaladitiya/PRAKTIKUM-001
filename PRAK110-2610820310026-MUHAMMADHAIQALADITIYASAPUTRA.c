#include <stdio.h>
#include <math.h>

int main()
{
    int alas = 5;
    int tinggi = 12;
    int sisiA = alas;
    int sisiB = tinggi;
    int sisiC = sqrt(alas * alas) + (tinggi * tinggi);
    int keliling = sisiA + sisiB + sisiC;
    int luas = (alas * tinggi) / 2;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);

    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sisiA);
    printf("Sisi B = %d cm\n", sisiB);
    printf("Sisi C = %d cm\n", sisiC);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}
