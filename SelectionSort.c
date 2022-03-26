/*KULLANICIDAN ALINAN DEĞERLERE GÖRE SEÇMELİ SIRALAMA*/

#include <stdio.h>


 void selSort(int array[], int size); //Fonksiyon bildirimi

 void selSort(int array[],int size){
 int i,j;
 int temp,min;

 for (i=0;i<size-1;i++){
     int min=i;
     for(j=i+1;j<size;j++){
         if(array[j]<array[min])
         min=j;
         }
    if(min!=i){//swap işlemi
       temp=array[i];
       array[i]=array[min];
       array[min]=temp;
    }
  }
 
   for (int i = 0; i < size; i++){ //Sıralanmış diziyi yazdırır
        printf("%d  ", array[i]);
     }

 }

int main(void){
    
 int size;
 int array[50];//Dizinin maksimum kapasitesi 
 
 printf("Sıralamak istediğiniz dizinin boyutunu giriniz..\n");
 scanf("%d",&size);
 
 printf("Diziye eklemek istediğiniz elemanları giriniz:\n");
   for (int a=0;a<size;a++){
     scanf("%d",&array[a]);
     }
 printf("\n Sıralanmış dizi : "); 
 selSort(array, size);//Fonksiyon çağrımı
  
}


