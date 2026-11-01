#include <stdio.h>

int main()
{
    int pasukkan_YZ = 958730;
    int pahlawan = 5;
    int pasukkan_per_pahlawan = pasukkan_YZ / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukkan_YZ);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukkan_per_pahlawan);

    return 0;
}
