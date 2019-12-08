#include<stdio.h>

int main()
{
    int pilihan = 4;
    switch(pilihan){
        case 1:
            printf ("aksi1->switch\n");
            //aksi satu
            break;
        case 2:
            //aksi dua
            printf("aksi2->switch\n");
            break;
        default:
            //aksi selain 1 dan 2
            printf("aksi selain 1 dan 2->switch\n");
            break;
    }
    if(pilihan == 2){
        //aksi satu
        printf("aksi1->if\n");
    } else if(pilihan == 2){
        //aksi dua
        printf("akasi2->if\n");
    } else{
        //aksi selain 1 dan 2
        printf("aksi3->if\n");
    }

}
