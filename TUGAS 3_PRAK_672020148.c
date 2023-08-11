#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int menu;
    printf("==== Tugas 1 ==== \n\n");
    printf("menu : \n");
    printf("1,cek satuan \n");
    printf("2,cek angka terbesar \n");
    printf("3,hitung harga motor \n");
    printf("mau pilih yang mana? ");
    scanf("%d", &menu);
    if( menu > 3 )
    {
        printf("pilih yang ada aja ya");
    }

switch (menu)
    {
    case 1:
        {
            int angka;
            printf("\n\n=== cek satuan/puluhan/ratusan ===\n");
            printf("masukan angka :");
            scanf("%d", &angka);
                if(angka>=1 && angka<=10){
                    printf("%d bilangan satuan",angka);
                }
                else if(angka >=10 && angka <=100){
                    printf("%d bilangan puluhan", angka);
                }
                else if(angka >=100 && angka <=1000){
                    printf("%d bilangan ratusan", angka);
                }else if(angka >=1000){
                    printf("angka terlalu besar");
                }
                break;
        }

    case 2:
        {
            int a,b,c;
            printf("\n=== Cek Angka Terbesar ===\n");
            printf("masukan angka ke-1 :");
            scanf("%d",&a);
            printf("masukan angka ke-2 :");
            scanf("%d",&b);
            printf("masukan angka ke-3 :");
            scanf("%d",&c);
            if(a>=b && a>=c){
                printf("angka ke 1 adalah yang terbesar");
            }
            else if( b>=a && b>=c){
                printf("angka ke 2 adalah yang terbesar");
            }
            else if(c>=a && c>=b){
                printf("angka ke 3 adalah yang terbesar");
            }
            break;
        }

    case 3 :
    {
        int pilihan;

            printf("=== selamat datang di nusantara motor salatiga ===\n");
            printf("daftar motor dan harga:\n");
            printf("1,honda Vario 150cc = Rp25,000.000 \n");
            printf("2,yamaha Nmax = Rp32,000.000\n");
            printf("3,honda CBR 150RR = Rp40,000.000\n");
            printf("pilih motor :");
            scanf("%d",&pilihan);
            int pembayaran;
            printf("\n === pilih metode pembayaran ===\n");
            printf("\n 1.Tunai (Cash)");
            printf("\n 2.Cicil (24 kali)");
            printf("\npilih metode pembayaran :");
            scanf("%d",&pembayaran);

            switch(pembayaran)
            {
                case 1:
                {
                    int a,b,c;
                    float x,y,z;
                    a=25000000;
                    b=32000000;
                    c=40000000;
                    x=a-(a*0.1);
                    y=b-(b*0.1);
                    z=c-(c*0.1);
                    if(pilihan==1){
                        printf("\nharga retail : %d",a);
                        printf("\nharga bayar : %.2f",x);
                    }
                    else if(pilihan==2){
                        printf("\nharga retail :%d",b);
                        printf("\nharga bayar : %.2f",y);
                    }
                    else if(pilihan==3){
                        printf("\nharga retail :%d",c);
                        printf("\nharga bayar : %.2f",z);
                    }
                    break;
                }

                case 2:
                {
                    int a,b,c;
                    float x,y,z;
                    a=25000000;
                    b=32000000;
                    c=40000000;
                    x=(a*0.1+a)/24;
                    y=(b*0.1+b)/24;
                    z=(c*0.1+c)/24;
                    if(pilihan==1){
                        printf("\nharga retail : %d",a);
                        printf("\nharga cicil : %.2f",x);
                    }
                    else if(pilihan==2){
                        printf("\nharga retail :%d",b);
                        printf("\nharga cicil : %.2f",y);
                    }
                    else if(pilihan==3){
                        printf("\nharga retail :%d",c);
                        printf("\nharga cicil : %.2f",z);
                    }
                }
            }
        }
    }                                                                                                                                                                                                               }
