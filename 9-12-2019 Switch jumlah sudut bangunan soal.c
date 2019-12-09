#include<stdio.h>

int main()
{
    int pilihan;
    int p1;
    int p2;
    int p3;

    printf("1.3s\n2.4s\n3.0s\n");
    printf("masukan pilihan anda : ");
    scanf("%d", &pilihan);
    int volume;
    int luas;
    int keliling;
    int luasPermukaan;
    float luasBerkoma;
    int a;
    int t;
    int s1;
    int s2;
    int s3;
    int s4;
    int r;
    int p;
    int l;
    int d1;
    int d2;
    int s;
    int v = 3.14;

    switch(pilihan){
        case 1 :
            printf("anda memilih 3S\n");
            printf("1.segitiga\n");
            printf("masukan pilihan anda : ");
            scanf("%d", &p1);
            switch(p1){
                case 1 :
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
                luas = a * t;
                keliling = s1 + s2 + s3;
                printf("hasil luas adalah %d\n", luas);
                printf("hasil keliling adalah %d", keliling);
                break;
            default:
                printf("pilihan tidak tersedia");
                break;
        }
        break;

        case 2 :
            printf("anda memilih 4S\n");
            printf("1.kubus\n2.balok\n3.jajar genjang\n4.belah ketupat\n5.trapesium\n6.layang-layang\n7.persegi panjang\n8.persegi\n");
            printf("masukan pilihan anda : ");
            scanf("%d", &p2);
            switch(p2){
                case 1 :
                    printf("anda memilih kubus\n");
                    printf("silahkan masukan r : ");
                    scanf("%d", &r);
                    luasPermukaan = 6 * r * r;
                    volume = r * r * r;
                    keliling = 12 * r;
                    printf("hasil luasPermukaan adalah %d\n", luasPermukaan);
                    printf("hasil volume adalah %d\n", volume);
                    printf("hasil keliling adalah %d\n", keliling);
                    break;
                case 2:
                    printf("anda memilih balok\n");
                    printf("silahkan masukan t : " );
                    scanf("%d", &t);
                    printf("silahkan masukan p : ");
                    scanf("%d", &p);
                    printf("silahkan masukan l : ");
                    scanf("%d", &l);
                    luasPermukaan = 2 * (p * l) + 2 * (p * t) + 2 * (p * l) ;
                    keliling = (4 * t) + ( 4 * l) + (4 * l);
                    volume = p * l * t;
                    printf("hasil luasPermukaan adalah %d\n",luasPermukaan );
                    printf("hasil keliling adalah %d\n", keliling);
                    printf("hasil volume adalah %d\n", volume);
                    break;
                case 3:
                    printf("anda memilih janjar genjang\n");
                    printf("silahkan masukan alas : ");
                    scanf("%d", &a);
                    printf("silahkan masukan tinggi : ");
                    scanf("%d", &t);
                    luas = a * t;
                    keliling = (2 * p) + (2 * l) + (2 * (p + l));
                    printf("hasil luas adalah %d\n", luas);
                    printf("hasil keliling adalah %d\n", keliling);
                    break;
                case 4:
                    printf("anda memilih belah ketupat\n");
                    printf("silahkan masukan d1 : ");
                    scanf("%d", &d1);
                    printf("silahkan masukan d2 : ");
                    scanf("%d", &d2);
                    printf("silahkan masukan sisi : ");
                    scanf("%d", &s);
                    luas = (float) (0.5 * (d1 * d2) * s);
                    keliling = 4 * s;
                    printf("hasil luas adalah %d\n", luas);
                    printf("hasil keliling adalah %d\n", keliling);
                    break;
                case 5:
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
                    luas = (float) (0.5 * (s1 + s2) * t);
                    keliling = s1 + s2 + s3 + s4;
                    printf("hasil luas adalah %d\n", luas);
                    printf("hasil keliling adalah %d\n", keliling);
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
                    luas = (float) (0.5 * (d1 * d2));
                    keliling = (2 * p) + (2 * l) +  (2 * ( p + l));
                    printf("hasil luas adalah %d\n", luas);
                    printf("hasil keliling adalah %d\n", keliling);
                    break;
                case 7:
                    printf("anda memilih persegi panjang\n");
                    printf("silahkan masukan p : ");
                    scanf("%d", &p);
                    printf("silahkan masukan l : ");
                    scanf("%d", &l);
                    luas = p * l;
                    keliling = 2 * (p + l);
                    printf("hasil luas adalah %d\n", luas);
                    printf("hasil keliling adalah %d\n", keliling);
                    break;
                case 8:
                    printf("anda memilih persegi\n");
                    printf("silahkan masukan s : ");
                    scanf("%d", &s);
                    luas = s * s;
                    keliling = 4 * s;
                    printf("hasil luas adalah %d\n", luas);
                    printf("hasil keliling adalah %d\n", keliling);
                    break;
                default:
                    printf("pilihan tidak tersedia");
                    break;
            }
            break;

                case 3:
                    printf("anda memilih 0S\n");
                    printf("1.lingkaran\n");
                    printf("masukan pilihan anda : ");
                    scanf("%d", &p3);
                    switch(p3){
                    case 1:
                        printf("anda memilih lingkaran\n");
                        printf("silahkan masukan r : ");
                        scanf("%d", &r);
                        luas = (float) (0.5 * (v * r * r));
                        keliling = 2 * v * r;
                        printf("hasil luas adalah %d\n", luas);
                        printf("hasil keliling adalah %d\n", keliling);
                        break;
                    default:
                        printf("pilihan tidak tersedia");
                        break;
                }
                break;
                    default:
                        printf("pilihan tidak ada");
                        break;


    }


}
