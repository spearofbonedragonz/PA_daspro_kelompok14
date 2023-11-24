#include <stdio.h>

void decToBinary(int n){
  int binaryNum[32]; //ukuran array yang cukup besar untuk menyimpan representasi biner

  int i = 0; //Indeks yang menunjukkan posisi saat ini dalam array binerNum

  while(n>0){
  binaryNum[i] = n % 2;
  n = n / 2;
  i++;
  }

  //menampilkan representasi biner dari bilangan desimal
  printf("Representasi biner : ");
  for(int j = i - 1; j >= 0; j--){
      printf("%d", binaryNum[j]);
  }
  printf("\n");

  //mengonversi biner ke bentuk polinomial
  for(int j = i - 1 ; j>= 0; j--){
    if(binaryNum[j] == 1){
      if(j > 0){
        printf("x^%d + ", j);
      }
      else{
        printf("1");
      }
      }
  }}
int main(){
   int decimalNumber;
  
  printf("Masukkan bilangan desimal : ");
  scanf("%d", &decimalNumber);

  decToBinary(decimalNumber);

return 0;
}
  
