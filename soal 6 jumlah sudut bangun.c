#include <stdio.h>

int main()
{

}
    int pilihan;
    int p1;
    int p2;
    int p3;

    printf("1.3s\n2.4s\n3.0s\n");
    printf("masukan pilihan anda : ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
        printf("anda memilih 3S\n");
        printf("1.segitiga\n");
        printf("masukan pilihan anda : ");
        scanf("%d", &p1);

        if (p1 == 1)
        {
            int a;
            int t;
            int s1;
            int s2;
            int s3;
            printf("anda memilih segitiga\n");
            printf("silahkan masukan alas : ");
            scanf("%d", &a);
            printf("silahkan masukan t : ");
            scanf("%d", &t);
            printf("silahkan masukan s1 : ");
            scanf("%d", &s1);
            printf("silahkan masukan s2 : ");
            scanf("%d", &s2);
            printf("silahkan masukan s3 : ");
            scanf("%d", &s3);
            int luas = a * t;
            int keliling = s1 + s2 + s3;
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d", keliling);
         }
        else
        {
            printf("pilihan tidak tersedia");
        }

        if (pilihan == 2)
        {
            printf("anda memilih 4S\n");
            printf("1.kubus\n2.balok\n3.jajar genjang\n4. belah ketupat\n5.trapesium\n6. layang-layang\n7.persegi panjang\n8.persegi\n");
            printf("masukan pilihan anda : ");
            scanf("%d", &p2);

        if (pilihan == 1)
        {
            int r;
            printf("anda memilih kubus\n");
            printf("silahkan masukan r : ");
            scanf("%d", &r);
            int luasPermukaan = 6 * r * r;
            int volume = r * r * r;
            int keliling = 12 * r;
            printf("hasil luasPermukaan adalah, %d\n", luasPermukaan);
            printf("hasil volume adalah, %d\n", volume);
            printf("hasil keliling adalah, %d\n", keliling);
        }

        if (pilihan == 2)
        {
            int t;
            int p;
            int l;
            printf("anda memilih balok\n");
            printf("silahkan masukan t : " );
            scanf("%d", &t);
            printf("silahkan masukan p : ");
            scanf("%d", &p);
            printf("silahkan masukan l : ");
            scanf("%d", &l);
            int luasPermukaan = 2 * (p * l) + 2 * (p * t) + 2 * (p * l) ;
            int keliling = (4 * t) + ( 4 * l) + (4 * l);
            int volume = p * l * t;
            printf("hasil luasPermukaan adalah, %d\n",luasPermukaan );
            printf("hasil keliling adalah, %d\n", keliling);
            printf("hasil volume adalah, %d\n", volume);
        }

        if (pilihan == 3)
        {
            int a;
            int t;
            int p;
            int l;
            printf("anda memilih janjar genjang\n");
            printf("silahkan masukan alas : ");
            scanf("%d", &a);
            printf("silahkan masukan tinggi : ");
            scanf("%d", &t);
            int luas = a * t;
            int keliling = (2 * p) + (2 * l) + (2 * (p + l));
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
        }

        if (pilihan == 4)
        {
            int d1;
            int d2;
            int s;
            printf("anda memilih belah ketupat\n");
            printf("silahkan masukan d1 : ");
            scanf("%d", &d1);
            printf("silahkan masukan d2 : ");
            scanf("%d", &d2);
            printf("silahkan masukan sisi : ");
            scanf("%d", &s);
            float luas = (float) (0.5 * (d1 * d2) * s);
            int keliling = 4 * s;
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
        }

        if (pilihan == 5)
        {
            int s1;
            int s2;
            int s3;
            int s4;
            int t;
            printf("anda memilih trapasium\n");
            printf("silahkan masukan s1 : ");
            scanf("%d", &s1);
            printf("silahkan masukan s2 : ");
            scanf("%d", &s2);
            printf("silahan masukan s3 : ");
            scanf("&d", &s3);
            printf("silahkan masukan s4 : ");
            scanf("%d", &s3);
            printf("silahkan masukan tinggi : ");
            scanf("%d", &t);
            float luas = (float) (0.5 * (s1 + s2) * t);
            int keliling = s1 + s2 + s3 + s4;
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
        }

        if (pilihan == 6)
        {
            int d1;
            int d2;
            int p;
            int l;
            printf("anda memilih layang-layang\n");
            printf("silahkan masukan d1 : ");
            scanf("%d", &d1);
            printf("silahkan masukan d2 : ");
            scanf("%d", &d2);
            printf("silahkan masukan p : ");
            scanf("%d", &p);
            printf("silahkan masukan l : ");
            scanf("%d", &l);
            float luas = (float) (0.5 * (d1 * d2));
            int keliling = (2 * p) + (2 * l) +  (2 * ( p + l));
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
        }

        if (pilihan == 7)
        {
            int p;
            int l;
            printf("anda memilih persegi panjang\n");
            printf("silahkan masukan p : ");
            scanf("%d", &p);
            printf("silahkan masukan l : ");
            scanf("%d", &l);
            int luas = p * l;
            int keliling = 2 * (p + l);
            printf("hasil luas adalah %d\n", luas);
            printf("hasil keliling adalah %d\n", keliling);
        }

        if (pilihan == 8)
        {
            int s;
            printf("anda memilih persegi\n");
            printf("silahkan masukan s : ");
            scanf("%d", &s);
            int luas = s * s;
            int keliling = 4 * s;
            printf("hasil luas adalah %d\n", luas);
            printf("hasil keliling adalah %d\n", keliling);
        }
        else
        {
            printf("pilihan tidak tersedia");
        }
        if (pilihan ==3)
        {
            printf("anda memilih 0S\n");
            printf("1.lingkaran\n");
            printf("masukan pilihan anda : ");
            scanf("%d", &p3);
        }
        else if (pilihan == 1)
        {
            int r;
            int v = 3.14;
            printf("anda memilih lingkaran\n");
            printf("silahkan masukan r : ");
            scanf("%d", &r);
            float luas = (float) (0.5 * (v * r * r));
            int keliling = 2 * v * r;
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
        }
        else
        {
            printf("pilihan tidak tersedia");
        }
        }

}
