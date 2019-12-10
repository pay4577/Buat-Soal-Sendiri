#include<stdio.h>

int main()
{
        int pilihan;

        printf("aplikasi perhitungan\n");
        printf("aplikasi pilihan anda\n");
        printf("1.kubus\n2.balok\n3.limas segi empat\n4.prisma segitiga\n5.tabung\n6.kerucut\n7.bola\n");


        printf("masukan pilihan anda   : ");
        scanf("%d", &pilihan);
        int r;
        int a;
        int t;
        int p;
        int l;
        int ls1;
        int ls2;
        int ls3;
        int ls4;
        int ls5;
        int T;
        int s1;
        int s2;
        int s3;
        int v;
        int s;
        int luas;
        int volume;
        int keliling;
        float LuasBerkoma;
        switch(pilihan){
            case 1:

                printf("anda memilih kubus\n");
                printf("silahkan masukan r   : ");
                scanf("%d", &r);
                luas = 6 * r * r;
                volume = r * r * r;
                printf("hasil luas adalah %d\n", luas);
                printf("hasil volume adalah %d\n", volume);
                break;


            case 2:

                printf("anda memilih balok\n");
                printf("silahkan masukan a   : ");
                scanf("%d", &a);
                printf("solahkan masukan t   : ");
                scanf("%d", &t);
                luas = a * t;
                volume = (2 * p * l)+(2 * p * l)+(2 * p * l);
                printf("hasil luas adalah %d\n", luas);
                printf("hasil volume adalah %d\n", volume);
                break;

            case 3:

                printf("anda memilih limas segi empat\n");
                printf("silahkan masukan a   : ");
                scanf("%d", &a);
                printf("silahkan masukan t   : ");
                scanf("%d", &t);
                printf("silahkan masukan ls1   : ");
                scanf("%d", &ls1);
                printf("silahkan masukan ls2   :  ");
                scanf("%d", &ls2);
                printf("silahkan masukan ls3   : ");
                scanf("%d", &ls3);
                printf("silahkan masukan ls4   : ");
                scanf("%d", &ls4);
                printf("silahkan masukan ls5   : ");
                scanf("%d", &ls5);
                luas = t * a;
                keliling = ls1 + ls2 + ls4 + ls5;
                printf("hasil luas adalah %d\n", luas);
                printf("hasil keliling adalah %d\n", keliling);
                break;

            case 4:

                printf("anda memilih prisma segitiga\n");
                printf("silahkan masukan a   : ");
                scanf("%d", &a);
                printf("silahkan masukan t   : ");
                scanf("%d", &t);
                printf("silahkan masukan T   : ");
                scanf("%d", &T);
                printf("silahkan masukan s1   : ");
                scanf("%d", &s1);
                printf("silahkan masukan s2   : ");
                scanf("%d", &s2);
                printf("silahkan masukan s3   : ");
                scanf("%d", &s3);
                luas = (float) (0.5 * (a * t * T));
                keliling = (s1 + s2 + s3) * T;
                printf("hasil luas adalah %.2f\n", luas);
                printf("hasil keliling adalah %d\n", keliling);
                break;

            case 5:

                printf("anda memilih tabung\n");
                printf("silahkan masukan r   : ");
                scanf("%d", &r);
                printf("silahkan masukan v   : ");
                scanf("%d", &v);
                printf("silahkan masukan T   : ");
                scanf("%d", &v);
                printf("silahkan masukann T   : ");
                scanf("%d", &T);
                printf("silahkan masukan s   : ");
                scanf("%d", &s);
                luas = v * r * r * T;
                keliling = v * r * s;
                printf("hasil luas adalah %d\n", luas);
                printf("hasil keliling adalah %d\n", keliling);
                break;

            case 6:
                printf("anda memilih kerucut\n");
                printf("silahkan masukan v   : ");
                scanf("%d", &v);
                printf("dilahkan masukan a   :");
                scanf("%d", &a);
                printf("silahkan masukan r  : ");
                scanf("%d", &r);
                printf("silahkan masukan s  : ");
                scanf("%d", &s);
                printf("silahkan masukan T  : ");
                scanf("%d", &T);
                luas = (v * r * r * T) / 3;
                keliling = v * r * s;
                printf("hasil luas adalah %d\n", luas);
                printf("hasil keliling adalah %d\n", keliling);
                break;

            case 7:
                printf("anda memilih bola\n");
                printf("silahkan masukan r  : ");
                scanf("%d", &r);
                printf("silahkan masukan v  : ");
                scanf("%d", &v);
                luas = (v * r * r * r) ;
                keliling = 4 * v * r * r;
                printf("hasil luas adalah %d\n", luas);
                printf("hasil keliling adalah %d\n", keliling);
                break;
            default:
                printf("pilihan tidak tersedia");
                break;

        }


}

















































