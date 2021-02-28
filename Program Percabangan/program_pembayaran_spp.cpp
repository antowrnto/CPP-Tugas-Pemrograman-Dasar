#include <iostream>
using namespace std;
    
int main(){
   int jurusan, jalur_masuk, jumlah_bulan, harga_tagihan, diskon, potongan;
   long int total_bayar;

   cout << "Masukan Jurusan :\n ----------- \n 1. RPL \n 2. MM \n 3. TKJ \n ----------- \n Masukan Nomor Jurusan = ";
   cin >> jurusan;
    
   cout << "Masukan Jalur Masuk :\n ----------- \n 1. Afirmasi \n 2. Prestasi \n 3. Umum \n ----------- \n Masukan Nomor Jalur Masuk = ";
   cin >> jalur_masuk;
   
   cout << "Masukan Jumlah Bulan = ";
   cin >> jumlah_bulan;
    
   if((jurusan == 1) && (jalur_masuk == 1)){
     harga_tagihan = 20000;
   }else if((jurusan == 1) && (jalur_masuk == 2)){
     harga_tagihan = 50000;
   }else if((jurusan == 1) && (jalur_masuk == 3)){
     harga_tagihan = 200000;
   }else if(jurusan == 2){
     if(jalur_masuk == 1){
       harga_tagihan = 50000;
     }else if(jalur_masuk == 2){
       harga_tagihan = 80000;
     }else if(jalur_masuk == 3){
       harga_tagihan = 250000;
     }
   }else if(jurusan == 3){
     switch(jalur_masuk){
        case 1: harga_tagihan = 30000; 
            break;
        case 2: harga_tagihan = 60000;
            break;
        case 3: harga_tagihan = 230000;
            break;
        default: harga_tagihan = 0;
     }
     }
    
    total_bayar = harga_tagihan * jumlah_bulan;
    
    if(jumlah_bulan == 12){
        diskon = 15;
        potongan = 0.15 * total_bayar;
        total_bayar -= potongan;
    }else{
        diskon = 0;
    }
     cout << "\n -------------Perincian------------- \n\n";
     
     cout << "Harga Tagihan = "<< harga_tagihan << endl;
     cout << "Jumlah Bulan Yang Di Bayarkan = " << jumlah_bulan << endl;
     cout << "Diskon yang anda dapatkan = " << diskon << " %" <<endl;
     cout << "Total Bayar = " << total_bayar <<endl;
    
   cin.get();
   return 0;
}