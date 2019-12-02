#include <stdio.h>

int main ()
{
    int pilihan;

    printf("aplikasi perhitungan\n");
    printf("aplikasi pilihan anda\n");
    printf("1.kubus\n2.balok\n3.limas segi empat");

    printf("masukan pilihan anda : ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
        int r;
        printf("anda memilih kubus\n");
        printf("silahkan masukan r : ");
        scanf("%d", &r);
        int luas = 6 * r * r;
        int volume = r * r *r;
        printf("hasil luas adalah, %d\n", luas);
        printf("hasil volume adalah, %d\n", volume);

    }
    else if (pilihan == 2)
    {
        int a;
        int t;
        int p;
        int l;
        printf("anda memilih balok\n");
        printf("silahkan masukan a : ");
        scanf("%d", &a);
        printf("silahkan masukan t : ");
        scanf("%d", &t);
        printf("silahkan masukan p : ");
        scanf("%d", &p);
        printf("silahkan masukan l : ");
        scanf("%d", &l);
        int luas = a * t;
        int volume = (2 * p * l) + (2 * p * l) + (2 * p * l);
        printf("hasil luas adalah, %d\n", luas);
        printf("hasil volume adalah, %d\n", volume);
    }
    else
    {
        printf("pilihan tidak tersedia");
    }
}
