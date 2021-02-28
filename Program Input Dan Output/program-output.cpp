#include <stdio.h>
#include <conio.h>

int main()
{
 int a = 25000;
 unsigned int b = 50000;
 float c = 12345.678;
 char nama[50] = "SMKN 1 CIAMIS";
 char alamat[10] = "Ciamis";
 clrscr();
    
 printf("Penampilan data tanpa di format\n");
 printf("Nilai a : %d\n",a);
 printf("Nilai b : %u\n",b);
 printf("Nilai c : %f\n",c);
 printf("String  : %s %s\n",nama,alamat);//rata kanan
 printf("Penampilan data setelah di format\n");
 printf("Nilai a : %8d\n",a);
 printf("Nilai b : %8u\n",b);
 printf("Nilai c : %11.2f\n",c);
 printf("String 1: %40s %10s\n",nama,alamat);//rata kanan
 printf("String 2: %-40s %-10s\n",nama,alamat);//rata kanan
 getch();
 return 0;
}
