/*Klavyeden öğrenci sayısı (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanımlanacak “hesapla” fonksiyonuna 
gönderen bir “main” fonksiyonu hazırlayınız. “hesapla” fonksiyonu kendisine gelen öğrenci sayısı kadar notu klavyeden 
okuyarak 100 elemanlı bir diziye kaydetmeli ve geçme notuna göre kaç tane öğrencinin dersten kaldığını bularak 
fonksiyondan geri döndürürken, sınıf ortalamasını da ekrana yazdırmalıdır. Buna göre aşağıda verilen alanlara “main” ve 
“hesapla” fonksiyonlarını yazınız. */
#include<stdio.h>
#include<stdlib.h>
int hesapla(int *ogrenci,int sayi,int not)
{
    int gecti=0;

    for (int i = 0; i < sayi; i++)
    {
        printf("%d ogrencinin notunu giriniz:",i+1);
        scanf("%d",&ogrenci[i]);
    }


    for (int j = 0; j < sayi; j++)
    {
        if (ogrenci[j]>=not)
        {
            gecti++;
        }
        
    }
    return gecti;
    
    
}
int ortalama(int *ogrenci,int sayi)
{
    
    int not;
   for (int i = 0; i < sayi; i++)
   {
       
       not+=ogrenci[i];
       not=not/sayi;

   }
   
    return not;
    
}

int main()
{
    int ogrenciSayisi,not,gecmeNot;
    printf("ogrenci sayisi giriniz:");
    scanf("%d",&ogrenciSayisi);

    int *iptr=(int *)malloc(ogrenciSayisi*sizeof(int));

    printf("gecme notu giriniz:");
    scanf("%d",&gecmeNot);


    printf("dersten gecen ogrenci sayisi:%d\n", hesapla(iptr,ogrenciSayisi,not));
    printf("notlarin ortalmasi=%d",ortalama(iptr,ogrenciSayisi));


   

}
