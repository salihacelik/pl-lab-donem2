/*Klavyeden öğrenci sayısı (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanımlanacak “hesapla” fonksiyonuna 
gönderen bir “main” fonksiyonu hazırlayınız. “hesapla” fonksiyonu kendisine gelen öğrenci sayısı kadar notu klavyeden 
okuyarak 100 elemanlı bir diziye kaydetmeli ve geçme notuna göre kaç tane öğrencinin dersten kaldığını bularak 
fonksiyondan geri döndürürken, sınıf ortalamasını da ekrana yazdırmalıdır. Buna göre aşağıda verilen alanlara “main” ve 
“hesapla” fonksiyonlarını yazınız. */
#include<stdio.h>

int main()
{
    int ogrenciSayisi,not,gecmeNot;
    printf("ogrenci sayisi giriniz:");
    scanf("%d",&ogrenciSayisi);
    int ogrenciler[ogrenciSayisi];
    for (int i = 0; i < ogrenciSayisi; i++)
    {
        printf("%d ogrencinin notunu giriniz:",i+1);
        scanf("%d",not);
        ogrenciler[i]=not;
    }
    printf("gecme notu giriniz:");
    scanf("%d",&gecmeNot);

}
