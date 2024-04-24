/*Girilen dizideki en büyük elemanı bulan programı C dilinde Rekürsif olarak yazınız.*/

#include<stdio.h>
int buyuk(int dizi[],int i);
int main()
{
    int x,sonuc;
    printf("dizinin kac elemanli oldugunu giriniz:");
    scanf("%d",&x);
    int dizi[x];
    for (int i = 0; i < x; i++)
    {
        printf("dizinin %d . elemanini giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("%d",buyuk(dizi,x));
    return 0;
}
int buyuk(int dizi[],int i)
{
    int y;
   if (i==1)
   {
    return dizi[0];

   }else{
    y=buyuk(dizi,i-1);
   }

   if (y>dizi[i-1])
   {
    return y;
   }else{
    return dizi[i-1];
   }
   
   
    
    
    

}