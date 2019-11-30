#include<stdio.h>
#include<conio.h>

int main()
{
    int pilihan;

    printf("aplikasi perhitungan\n");
    printf("masukan pilihan anda\n");
    printf("1.persegi\n2.persegi panjang\n3.segitiga\n");

    printf("masukan pilihan anda  : ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
        int s;
        printf("anda memilih persegi\n");
        printf("silahkan memasukan sisi : ");
        scanf("%d", &s);
        int luas = s*s;
        int keliling = 4*s;
        printf("hasil luas adalah, %d\n", luas);
        printf("hasil keliling adalah, %d\n", keliling);

    }
    else if (pilihan == 2)
    {
        int p;
        int l;
        printf("anda memilih persegi panjang : ");
        printf("silahkan masukan panjang : ");
        scanf("%d", &p);
        printf("sillahkan masukan luas : ");
        scanf("%d", &l);
        int luas = p * l;
        int keliling = 2 * (p+l);
        printf("hasil luas adalah, %d\n", luas);
        printf("hasil keliling adalah, %d\n", keliling);
    }
    else if (pilihan == 3)
    {
        int a;
        int t;
        printf("anda memilih segitiga\n");
        printf("silahkan masukan alas  :  ");
        scanf("%d", &a);
        printf("silahkan masukan tinggi  : ");
        scanf("%d", &t);
        float luas = (float) (0.5 * (a * t));
        printf("hasil luas adalah, %.2f\n", luas);
    }
    else
    {
        printf("pilihan tidak tersedia");

    }

}
