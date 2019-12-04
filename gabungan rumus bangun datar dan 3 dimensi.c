#include <stdio.h>

int main()
{

    int pilihan;
    int p1;
    int p2;

    printf("1.2D\n2.3D\n");
    printf("masukan pilihan anda : ");
    scanf("%d",&pilihan);

    if (pilihan == 1 )
    {
        printf("anda memilih 2D\n");
        printf("1.persegi\n2.persegi panjang\n");
        printf("masukan pilihan anda : ");
        scanf("%d", &p1);

        if(p1 == 1)
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
        else if (p1 == 2)
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
        else
        {
             printf("pilihan tidak tersedia");
        }

    }

    else if (pilihan == 2)
    {
        printf("anda memilih 3D\n");
        printf("1.kubus\n2.balok\n");
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
            printf("hasil luasPermukaan adalah %d\n", luasPermukaan);
            printf("hasil volume adalah %d\n", volume);
            printf("hasil keliling adalah %d\n", keliling);
        }
        else if (pilihan == 2)
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
            printf("hasil luasPermukaan adalah %d\n",luasPermukaan );
            printf("hasil keliling adalah %d\n", keliling);
            printf("hasil volume adalah %d\n", volume);
        }
    }
    else
    {
        printf("pilihan tidak tersedia");
    }
}
