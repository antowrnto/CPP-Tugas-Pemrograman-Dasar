#include <stdio.h>
#include <conio.h>
int main()
{
 int tugas,uts,uas;
 float nilaiakhir;
 char index;
 printf("Nilai Tugas : ");scanf("%i",&tugas);
 printf("Nilai UTS : ");scanf("%i",&uts);
 printf("Nilai UAS : ");scanf("%i",&uas);
 nilaiakhir=0.2*tugas+0.3*uts+0.5*uas;
 printf("Nilai Akhir : %f\n",nilaiakhir);
 if(nilaiakhir>=80)
 index='A';
 else
 if(nilaiakhir>=68)
 index='B';
 else
 if(nilaiakhir>=56)
 index='C';
 else
 if(nilaiakhir>=45)
 index='D';
 else
 if(nilaiakhir>=0)
 index='E';
 else
 index='X';
    
switch (index)
 {
 case 'A':printf("Keterangan : Bagus Sekali\n");break;
 case 'B':printf("Keterangan : Bagus\n");break;
 case 'C':printf("Keterangan : Cukup\n");break;
 case 'D':printf("Keterangan : Kurang\n");break;
 case 'E':printf("Keterangan : Kurang Sekali\n");break;
 default :printf("Keterangan : Index Tak Diketahui\n");
 }
 getch();
 return 0;
}