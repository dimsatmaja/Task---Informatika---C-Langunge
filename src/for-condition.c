#include <stdio.h>

int main()
{
    char *mapel[] = {
        "Informatika",
        "Matematika",
        "Fisika",
        "PKN",
        "Bahasa Inggris"};

    int nilai[] = {100, 90, 84, 90, 92};
    int kkm = 80;
    int jumlah_mapel = sizeof(nilai) / sizeof(nilai[0]);

    printf("Hasil Nilai Dimas:\n");

    for (int i = 0; i < jumlah_mapel; i++)
    {
        printf("%-15s : %d -> %s\n",
               mapel[i],
               nilai[i],
               (nilai[i] >= kkm) ? "Lulus KKM" : "Tidak Lulus KKM");
    }

    return 0;
}
