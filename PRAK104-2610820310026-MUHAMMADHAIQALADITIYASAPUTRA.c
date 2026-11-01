#include <stdio.h>

int main()
{
    int hargaA = 400000;
    int hargaB = 350000;
    int diskonA, diskonB;

    printf("Harga sepatu A adalah %d\n", hargaA);
    printf("Harga sepatu B adalah %d\n", hargaB);

    diskonA = hargaA - (hargaA * 13 / 100);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", diskonA);

    diskonB = hargaB - (hargaB * 21 / 100);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", diskonB);

    return 0;
}
