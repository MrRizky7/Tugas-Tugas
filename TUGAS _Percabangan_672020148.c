#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {


    int a, b, c, d;

    printf("masukan tanggal hari ini :");
    scanf("%d", & a);
    printf("masukan bulan hari ini :");
    scanf("%d", & b);

    printf("masukan tanggal lahir :");
    scanf("%d", & c);
    printf("masukan bulan lahir :");
    scanf("%d", & d);

    if(a == c && b == d ){
        printf("ulang tahun anda hari ini ");
    }
     if(a > c  && b < d ){
        printf("ulang tahun belum terlewati ");
    }
    else if(a > c && b < d ){
        printf("ulang tahun sudah terlewati ");
    }
    else if(a == c && b < d ){
        printf("ulang tahun belum terlewati");
    }
    else if(a == c && b > d ){
        printf("ulang tahun sudah terlewati");
    }
    else if(a < c && b < d ){
        printf("ulang tahun belum terlewati");
    }
    else if(a < c && b > d){
        printf("ulang tahun sudah terlewati");
    }


}

