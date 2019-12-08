#include <stdio.h>

int main()
{

    int pilihan;
    int p1;
    int p2;

    printf("1.2D\n2.3D\n");
    printf("masukan pilihan anda : ");
    scanf("%d",&pilihan);
    int volume;
    int luas;
    int keliling;
    int luasPermukaan;
    int s;
    int l;
    int r;
    int t;
    int p;

    switch(pilihan){
        case 1 :
            printf("anda memilih 2D\n");
            printf("1.persegi\n2.persegi panjang\n");
            printf("masukan pilihan");
            scanf("%d", &p1);
            switch(p1){
                case 1 :
                    printf("anda memilih persegi\n");
                    printf("silahkan masukan s : ");
                    scanf("%d", &s);
                    luas = s * s;
                    keliling = 4 * s;
                    printf("hasil luas adalah %d\n", luas);
                    printf("hasil keliling adalah %d\n", keliling);
                    break;
                case 2:
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
                default:
                    printf("pilihan tidak tersedia");
                    break;
            }
            break;

        case 2:
            printf("anda memilih 3D\n");
            printf("1.kubus\n2.balok\n");
            printf("masukan pilihan anda : ");
            scanf("%d", &p2);
            switch(p2){
                case 1:
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

