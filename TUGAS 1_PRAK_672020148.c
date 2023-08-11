#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int pangkat(int x,int y)
{
    if(x%y==1){
       printf("Ya\n", x%y);
    }
    else{
        printf("Tidak\n");
    }
  }

int deret(int x){
if (x==0){
    return 0;
}
else
    return x+deret(x-1);
}


 main()
{
    int menu,pilihan,x,y;
    menu:
    printf("\n============Daftar Menu============\n");
    printf("\nDaftar Menu: ");
    printf("\n1. Deteksi Bilangan Pangkat 2");
    printf("\n2. Deret dan jumlah");
    printf("\n3. Pola V");
    printf("\n4. Keluar");
    printf("\nApa Pilihan Anda?");
    scanf("%d",&pilihan);

    switch(pilihan)
    {
    case 1:
    {
        printf("Masukan angka : ");
        scanf("%d", &y, &x);

        pangkat(x,y);
        goto menu;
        }

    case 2:
        {
            int x,i;
            printf("Deret & Jumlah");
            printf("\nMasukan angka: ",x);
            scanf("%d",&x);

            for(int i=1;i<x;i++){
            printf("%d",i);
            printf(" + ");
            }
            printf("%d = %d\n\n",x,deret(x));

            goto menu;
        }
    case 3:
        {
            int h,i,j,k;
            printf("\n masukan tinggi: ");
            scanf("%d",&h);
                for(i=1;i<=h;i++){
                    for(j=1;j<=i;j++){
                        if(j-i==0){
                            printf("o");
                        }else {
                                printf(" ");
                            }
                        }for(k=h;k>=j;k--){
                        printf(" ");
                        }
                        for(k=h-1;k>=i;k--){
                        printf(" ");
                        }
                        for(j=0;j<=i;j++){
                        if(j%i==1){
                            printf("o");
                        }
                        else {
                            printf(" ");
                        }
                        }
                        printf("\n");

                    }goto menu;
            }
    case 4:
        {
       printf("\n~Klik Apapun Untuk Keluar Dari Aplikasi~\n");
       exit(4);
       break;
        }
        }
}

