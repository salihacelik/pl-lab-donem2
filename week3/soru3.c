/*Main fonksiyonu içerisinde verilen sayının basamaklarını 
toplamını rekürsif bir fonksiyon kullanarak bulunuz.*/
#include<stdio.h>
int topla(int sayi)
{
    if (sayi==0)
    {
        return 0;

    }else{
        return (sayi%10+topla(sayi/10));
    }
    
}
int main()
{
    int N;
    printf("sayi giriniz:");
    scanf("%d",&N);
    printf("basamak deger tolami:%d",topla(N));

}