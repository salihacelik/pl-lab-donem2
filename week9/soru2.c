/*	Harmonik seriden ilk n elemanın toplamını hesaplayan ve ana fonksiyondan 
toplamını yazdıran özyinelemeli fonksiyonu kullanan bir program yazın. Ayrıca,
 fonksiyon sayıları görüntüler. n, kullanıcı tarafından girilir. 
 n. harmonik dizi elemanı 1/(a + (n - 1)d) olarak hesaplanır. a = 1, d = 1 ve n>0 olarak düşünün. */
#include<stdio.h>
#include<stdlib.h>
int topla(int sayi)
{
    if (sayi==0)
    {
        return sayi;
    }else{
        return sayi + topla(sayi-1);
    }
    
}
int main()
{
    int N;
    printf("N degeri giriniz");
    scanf("%d",&N);
    printf("toplam=%d",topla(N));
    return 0;

}