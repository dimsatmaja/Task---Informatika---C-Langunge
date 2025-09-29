#include <stdio.h>

// versi 1
// int main()
// {
//        int informatika_dimas = 100;
//        int matematika_dimas = 90;
//        int fisika_dimas = 84;
//        int pkn_dimas = 90;
//        int bahasa_inggris_dimas = 92;

//        int kkm = 80;

//        printf("Hasil Nilai Dimas:\n");

//        printf("Informatika     : %d -> %s\n", informatika_dimas,
//               (informatika_dimas >= kkm) ? "Lulus KKM" : "Tidak Lulus KKM");

//        printf("Matematika      : %d -> %s\n", matematika_dimas,
//               (matematika_dimas >= kkm) ? "Lulus KKM" : "Tidak Lulus KKM");

//        printf("Fisika          : %d -> %s\n", fisika_dimas,
//               (fisika_dimas >= kkm) ? "Lulus KKM" : "Tidak Lulus KKM");

//        printf("PKN             : %d -> %s\n", pkn_dimas,
//               (pkn_dimas >= kkm) ? "Lulus KKM" : "Tidak Lulus KKM");

//        printf("Bahasa Inggris  : %d -> %s\n", bahasa_inggris_dimas,
//               (bahasa_inggris_dimas >= kkm) ? "Lulus KKM" : "Tidak Lulus KKM");

//        return 0;
// }

// versi 2
int main()
{
       int informatika_dimas = 100;
       int matematika_dimas = 90;
       int fisika_dimas = 84;
       int pkn_dimas = 90;
       int bahasa_inggris_dimas = 92;

       printf("Hasil Nilai Dimas:\n");

       // Informatika
       switch (informatika_dimas >= 80)
       {
       case 1:
              printf("Informatika     : %d -> Lulus KKM\n", informatika_dimas);
              break;
       default:
              printf("Informatika     : %d -> Tidak Lulus KKM\n", informatika_dimas);
       }

       // Matematika
       switch (matematika_dimas >= 80)
       {
       case 1:
              printf("Matematika      : %d -> Lulus KKM\n", matematika_dimas);
              break;
       default:
              printf("Matematika      : %d -> Tidak Lulus KKM\n", matematika_dimas);
       }

       // Fisika
       switch (fisika_dimas >= 80)
       {
       case 1:
              printf("Fisika          : %d -> Lulus KKM\n", fisika_dimas);
              break;
       default:
              printf("Fisika          : %d -> Tidak Lulus KKM\n", fisika_dimas);
       }

       // PKN
       switch (pkn_dimas >= 80)
       {
       case 1:
              printf("PKN             : %d -> Lulus KKM\n", pkn_dimas);
              break;
       default:
              printf("PKN             : %d -> Tidak Lulus KKM\n", pkn_dimas);
       }

       // Bahasa Inggris
       switch (bahasa_inggris_dimas >= 80)
       {
       case 1:
              printf("Bahasa Inggris  : %d -> Lulus KKM\n", bahasa_inggris_dimas);
              break;
       default:
              printf("Bahasa Inggris  : %d -> Tidak Lulus KKM\n", bahasa_inggris_dimas);
       }

       return 0;
}
