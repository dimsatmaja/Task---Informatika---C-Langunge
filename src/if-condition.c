#include <stdio.h>

int main()
{
    int informatika_dimas = 100;
    int matematika_dimas = 90;
    int fisika_dimas = 84;
    int pkn_dimas = 90;
    int bahasa_inggris_dimas = 92;
    int kkm = 80;

    printf("Hasil Nilai Dimas:\n");

    // Informatika
    if (informatika_dimas >= kkm)
        printf("Informatika     : %d -> Lulus KKM\n", informatika_dimas);
    else
        printf("Informatika     : %d -> Tidak Lulus KKM\n", informatika_dimas);

    // Matematika
    if (matematika_dimas >= kkm)
        printf("Matematika      : %d -> Lulus KKM\n", matematika_dimas);
    else
        printf("Matematika      : %d -> Tidak Lulus KKM\n", matematika_dimas);

    // Fisika
    if (fisika_dimas >= kkm)
        printf("Fisika          : %d -> Lulus KKM\n", fisika_dimas);
    else
        printf("Fisika          : %d -> Tidak Lulus KKM\n", fisika_dimas);

    // PKN
    if (pkn_dimas >= kkm)
        printf("PKN             : %d -> Lulus KKM\n", pkn_dimas);
    else
        printf("PKN             : %d -> Tidak Lulus KKM\n", pkn_dimas);

    // Bahasa Inggris
    if (bahasa_inggris_dimas >= kkm)
        printf("Bahasa Inggris  : %d -> Lulus KKM\n", bahasa_inggris_dimas);
    else
        printf("Bahasa Inggris  : %d -> Tidak Lulus KKM\n", bahasa_inggris_dimas);

    return 0;
}
