#include <stdio.h>
#include <conio.h>

int main()
{
    int pilihan;

    printf("aplikasi perhitungan\n");
    printf("aplikasi pilihan anda\n");
    printf("1.persegi\n2.persegi panjang\n3.jajar genjang\n4.trapesium\n5.belah ketupat\n6.layang-layang\n7.segitiga\n8.lingkaran\n");

    printf("masukan pilihan anda  :");
    scanf("%d", &pilihan);
    int s;
    int luas;
    float luasBerkoma;
    int keliling;
    int p;
    int l;
    int a;
    int t;
    int s1;
    int s2;
    int s3;
    int s4;
    int d1;
    int d2;
    int r;
    int v = 3.14;
    switch(pilihan){
        case 1:

            printf("anda memilih persegi\n");
            printf("silahkan masukan s : ");
            scanf("%d", &s);
            luas = s * s;
            keliling = 4 * s;
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
            break;


        case 2 :

            printf("anda memilih persegi panjang : ");
            printf("anda memasukan panjang : ");
            scanf("%d", &p);
            printf("silahkan masukan luas");
            scanf("%d", &l);
            luas = p * l;
            keliling = 2 * (p + l);
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
            break;

        case 3:

            printf("anda memilih janjar genjang\n");
            printf("silahkan masukan alas : ");
            scanf("%d", &a);
            printf("silahkan masukan tinggi : ");
            scanf("%d", &t);
            luas = a * t;
            keliling = (2 * p) + (2 * l) + (2 * (p + l));
            printf("hasil lua adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
            break;

        case 4:

            printf("anda memilih trapasium\n");
            printf("silahkan masukan s1 : ");
            scanf("%d", &s1);
            printf("silahkan masukan s2 : ");
            scanf("%d", &s2);
            printf("silahan masukan s3 : ");
            scanf("%d", &s3);
            printf("silahkan masukan s4 : ");
            scanf("%d", &s4);
            printf("silahkan masukan tinggi : ");
            scanf("%d", &t);
            luasBerkoma = (float) (0.5 * (s1 + s2) * t);
            keliling = s1 + s2 + s3 + s4;
            printf("hasil luas adalah, %d\n", luasBerkoma);
            printf("hasil keliling adalah, %d\n", keliling);
            break;

        case 5:

            printf("anda memilih belah ketupat\n");
            printf("silahkan masukan d1 : ");
            scanf("%d", &d1);
            printf("silahkan masukan d2 : ");
            scanf("%d", &d2);
            printf("silahkan masukan sisi : ");
            scanf("%d", &s);
            luasBerkoma = (float) (0.5 * (d1 * d2) * s);
            keliling = 4 * s;
            printf("hasil luas adalah, %d\n", luasBerkoma);
            printf("hasil keliling adalah, %d\n", keliling);
            break;

        case 6:

            printf("anda memilih layang-layang\n");
            printf("silahkan masukan d1 : ");
            scanf("%d", &d1);
            printf("silahkan masukan d2 : ");
            scanf("%d", &d2);
            printf("silahkan masukan p : ");
            scanf("%d", &p);
            printf("silahkan masukan l : ");
            scanf("%d", &l);
            luasBerkoma = (float) (0.5 * (d1 * d2));
            keliling = (2 * p) + (2 * l) +  (2 * ( p + l));
            printf("hasil luas adalah, %d\n", luasBerkoma);
            printf("hasil keliling adalah, %d\n", keliling);
            break;

        case 7:

            printf("anda memilih segitiga\n");
            printf("silahkan masukan alas : ");
            scanf("%d", &a);
            printf("silahkan masukan tinggi : ");
            scanf("%d", &t);
            printf("silahkan masukan s1 : ");
            scanf("%d", &s1);
            printf("silahkan masukan s2 : ");
            scanf("%d", &s2);
            printf("sialhkan masukan s3 : ");
            scanf("%d", &s3);
            luas = a * t;
            keliling = s1 + s2 + s3;
            printf("hasil luas adalah, %d\n", luas);
            printf("hasil keliling adalah, %d\n", keliling);
            break;

        case 8:
            printf("anda memilih lingkaran\n");
            printf("silahkan masukan r : ");
            scanf("%d", &r);
            luasBerkoma = (float) (0.5 * (v * r * r));
            keliling = 2 * v * r;
            printf("hasil luas adalah, %d\n", luasBerkoma);
            printf("hasil keliling adalah, %d\n", keliling);
            break;

        default:
            printf("aksi selan 1 dan 8\n");
            break;
    }



}
