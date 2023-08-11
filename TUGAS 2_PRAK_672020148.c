#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int i,j,menu,pilihan;
    menu:
    printf("\n============Menu Utama============");
    printf("\nDaftar Menu: ");
    printf("\n1. Membuat Segitiga 54321");
    printf("\n2. Program Faktor Bilangan");
    printf("\n3. Menampilkan Jalan");
    printf("\n4. Keluar");
    printf("\nApa Pilihan Anda?");
    scanf("%d",&pilihan);

    switch(pilihan)
    {
    case 1:
        {
        for(i=5;i>=1;--i){
            for(j=i;j>=1;--j){
                printf(" %d ",j);
            }
            printf("\n");
            }
        }
        goto menu;

    case 2:
        {
         int x,i;
         printf("Masukan Angka : ",x);
         scanf("%d",&x);

         for( i=x;i>=1;--i){
            if(x%i==0){
            printf("%d\n",i);
            }
        }
        goto menu;
        }

    case 3:
        {
        int x;
        printf("\nPilih Jalan Yang Ingin Dibuat \n");
        printf("\n1. Jalan Lurus");
        printf("\n2. Jalan Ke-Kanan");
        printf("\n3. Jalan Ke-Kiri");
        printf("\n\nApa Pilihan Anda?",x);
        scanf("%d",&x);

        switch(x)
        {
        case 1:
            {
                for(int i=2;i<=10;i+=3){
                    for(int j=1;j<=10;j+=3){
                        printf("   |    ");
                            if(j%2==0){
                            printf(" ");
                            }else {
                            printf("|");
                            }
                            printf("    |     ");
                            printf("\n");
                        }

                    }
                    printf("  Ini Arah Lurus");
                }
                goto menu;

        case 2:
            {
                int i,j,x;
            for(i=1;i<=10;i++){
            for(j=1;j<=(10-i);j++){
            printf(" ");
            }for(x=0;x<=(10-i);x+=10){
             printf(" /  ");
            if(j%2==0){
            printf(" / ");
            }else if(j%2==1){
            printf("   ");
            }printf("  /");
            }
            printf("\n");
            }printf("Ini Arah Ke-Kanan");

            }
            goto menu;

        case 3:
            {
                int i,j,x;
                for(i=1;i<=10;i++){
                for(j=1;j<=i;j++){
                printf(" ");
            }for(x=1;x<=(10-i);x+=9){
                printf("\\ ");
                if(j%2==0){
                printf("  \\");
                }else if(j%2==1){
                printf("   ");
                }printf("   \\");
                }
                printf("\n");
                }printf("         Ini arah Ke-Kiri");

                }
                goto menu;
           }
        }
    case 4:
      {
       printf("\n~Klik Apapun Untuk Keluar Dari Aplikasi~\n");
       exit(4);
       break;
      }
     }
}
