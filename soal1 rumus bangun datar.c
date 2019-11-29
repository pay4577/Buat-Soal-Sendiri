#include <stdio.h>
#include <conio.h>

int main()
{
    int pilihan;

    printf("aplikasi perhitungan\n");
    printf("masukan pilihan anda\n");
    printf("1.janjar genjang\n2.Trapesium\n3.Belah ketupat\n4.Layang-layang\n4.Lingkaran");

    printf("masukan pilihan anda  :");
    scanf("%d", pilihan);

    if (pilihan == 1)
    {
        int a;
        int t;
        int p;
        int l;
        printf("anda memilih Jajar Genjang\n");
        printf("silahkan masukan alas  : ");
        scanf("%d",&a);
        printf("silahkan masukan tinggi : ");
        scanf("%d",&t);
        int luas = a * t;
        int keliling = (2 * p) + (2 * l) + (2 * (p + l));
        printf("hasil  adalah luas,%d\n", luas);
        printf("hasil keliling adalah, %d\n", keliling);
    }
    else  if (pilihan == 2)
    {
        int s1;
        int s2;
        int s3;
        int s4;
        int t;
        printf("anda memilih Trapesium\n");
        printf("silahkan masukan s1 : ");
        scanf("%d",&s1);
        printf("silahkan masukan s2 : ");
        scanf("%d", &s2);
        printf("silahkan masukan s3 : ");
        scanf("%d", &s3);
        printf("silahkan masukan s4 : ");
        scanf("%d", &s4);
        printf("sialhkan masukan tinggi : ");
        scanf("%d",&t);
        float luas = (float) (0.5 * (s1 + s2)* t );
        int keliling = s1 + s2 + s3 + s4;
        printf("hasil luas adalah, %.2f\n", luas);
        printf("hasil keliling adalah, %d\n", keliling);
    }
    else if (pilihan == 3)
    {
        int d1;
        int d2;
        int p;
        int l;
        printf("pilihan anda layang-layang\n");
        printf("silahan masukan d1\n");
        scanf("%d", &d1);
        printf("silahkan masukan d2\n");
        scanf("%d",d2);
        printf("silahkan masukan p\n");
        scanf("%d", &p);
        printf("silahkan masukan l\n");
        scanf("%d", &l);
        float luas = (float) (0.5 * (d1 * d2) );
        int keliling = (2 * p) + (2 * l) + (2 * (p + l));
        printf("hasil luas adalah, %.2f\n", luas);
        printf("hasil keliling adalah, %d\n", keliling);
    }
    else if (pilihan == 4)
    {
        int r;
        int v = 3.14;
        printf("pilihan anda lingkaran\n");
        printf("silahakn masukan r\n");
        scanf("%d", &r);
        float luas = (float) (0.5 * (v * r * r));
        int keliling = 2 * v * r;
        printf("hasil luas adalah, %.2f\n",luas);
        printf("hasil keliling adalah, %d\n", keliling);
    }
    else
    {
        printf("pilihan tidak tersedia");
    }
}

