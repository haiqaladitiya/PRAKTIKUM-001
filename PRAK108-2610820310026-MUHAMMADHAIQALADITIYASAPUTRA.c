#include <stdio.h>
int main()
{
    float jarak = 14;
    float putaran = 5;
    float keliling = jarak / putaran;
    float jari_jari = keliling / (2 * 3.14);

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);
    return 0;
}
