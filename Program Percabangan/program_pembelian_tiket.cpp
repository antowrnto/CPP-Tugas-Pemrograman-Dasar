#include <stdio.h>
#include <conio.h>
int main()
{
 int kodejurusan,kodekelas,banyaktiket;
 long int hargatiket,total;
 float diskon,bayar;
 printf("Pilih Jurusan :\n");
 printf("---------------\n");
 printf("1. Jakarta\n2. Yogya\n3. Surabaya\n");
 printf("---------------\n");
 printf("Jurusan yang dipilih : ");scanf("%i",&kodejurusan);
 printf("Pilih Kelas :\n");
 printf("---------------\n");
 printf("1. Eksekutif\n2. Bisnis\n3. Ekonomi\n");
 printf("---------------\n");
 printf("Kelas yang dipilih : ");scanf("%i",&kodekelas);
 printf("Banyak Tiket : ");scanf("%i",&banyaktiket);
 if((kodejurusan==1)&&(kodekelas==1)) 
 hargatiket=70000;
 else
 if((kodejurusan==1)&&(kodekelas==2))
 hargatiket=40000;
 else
 if((kodejurusan==1)&&(kodekelas==3))
 hargatiket=10000;
 else
 if(kodejurusan==2)
 {
 if(kodekelas==1) hargatiket=80000; else
 if(kodekelas==2) hargatiket=50000; else
 if(kodekelas==3) hargatiket=20000;
 }
 else
 if(kodejurusan==3)
 {
 switch (kodekelas)
 {
 case 1:hargatiket=90000;break;
 case 2:hargatiket=60000;break;
 case 3:hargatiket=30000;
 }
 }
 printf("Harga Tiket : Rp. %li\n",hargatiket);
 total=banyaktiket*hargatiket;
 printf("Total Tiket : Rp. %li\n",total);
 if( ((kodejurusan==3)&&(kodekelas==1)) ||
 ((kodejurusan==2)&&(kodekelas==2))
 )
 diskon=0.1*total;
 else
 diskon=0;
 printf("Diskon 10%% : Rp. %f\n",diskon);
 bayar=total-diskon;
 printf("Bayar : Rp. %f\n",bayar);
 getch();
 return 0;
}