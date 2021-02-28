#include <stdio.h>
#include <conio.h>

main()
{
 int jamlembur;
 long int gajipokok=500000,gajikotor,totalgajilembur;
 float pajak,gajibersih;
 char nama[50];
 clrscr();
 printf("Nama Pegawai : ");gets(nama);
 printf("Lama Lembur : ");scanf("%i",&jamlembur);
 totalgajilembur=(long int)5000*jamlembur;
 gajikotor=gajipokok+totalgajilembur;
 pajak=0.1*gajikotor;
 gajibersih=gajikotor-pajak;
 clrscr();
 printf("Hasil Perhitungan\n");
 printf("Nama Pegawai      : %s\n",nama);
 printf("Gaji Pokok        : Rp. %10li\n",gajipokok);
 printf("Lama Lembur       : %i jam\n",jamlembur);
 printf("Total Gaji Lembur : Rp. %10li\n",totalgajilembur);
 printf("Gaji Kotor        : Rp. %10li\n",gajikotor);
 printf("Pajak (10%%)       : Rp. %10.0f\n",pajak);
 printf("Gaji Bersih       : Rp. %10.0f\n",gajibersih);
 getch();
 return 0;
}