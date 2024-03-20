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
    sonuc= buyuk(dizi[x],x);
    printf("%d",sonuc);
    return 0;
}
int buyuk(int dizi[],int i)
{
    int max=dizi[i];
    if (i>=0)
    {
        if (dizi[i]>)
        {
            max=dizi[i];
        
        }else 
        max=dizi[i+1];
        
    }
    

}