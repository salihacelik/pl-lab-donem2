/* Toplam eleman sayısını kullanıcıdan alarak bu sayı kadar bellekten calloc fonksiyonunu kullanarak 
gerekli yeri alınız. Ayırdığınız bu bellek alanına eleman sayısı kadar değeri kullanıcıdan alınız. Daha 
sonra girilen en büyük değeri tanımladığınız işaretçi değişkeni kullanarak bulunuz ve ekrana 
yazdırınız. */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int boyut;
    printf("boyut giriniz:");
    scanf("%d",&boyut);
    int *ptr;
    ptr = (int *)calloc(boyut, sizeof(int));
    for (int i = 0; i < boyut; i++)
    {
        printf("%d. elemani giriniz:",i+1);
        scanf("%d",&*(ptr+i));
    }
    int max= *ptr;
   for (int i = 0; i < boyut; i++)
   {
     if (max<ptr[i])
     {
        max=ptr[i];
     }
     
   }
   printf("%d sayisi en buyuktur",max);
      

    


}