#include <iostream>
using namespace std;

int main(){
  printf("Perulangan menggunakan For");
   for(int i = 0; i < 10; i++){
       for(int j = 0; j < 10; j++){
       printf("Perulangan ke (%d, %d)\n", i, j);
       }
   }
   
  cin.get();
  return 0;
}