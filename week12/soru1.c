/* Öğrenci bilgilerinden (öğrenci no, isim, bölüm) oluşan sıralı erişimli bir 
dosya oluşturan ve bu dosya içerisinde isme göre arama yapan programı 
yazınız. Program menü şeklinde hazırlanmalıdır. Dosya oluşturma, kayıt 
ekleme gibi gerekli tüm fonksiyonlar yazılmalıdır*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ogrenciNo;
    char isim[40];
    char bolum[40];
    FILE *mfPtr;//ogrenci.dat dosyasi işaretçisi
    if ((mfPtr = fopen("musteri.dat","w")) == NULL)
    {
       printf("dosya acilamadi\n");
    }else{
        printf("ogrenci no isim ve bolum giriniz\n");
        printf("veri girisini girmek icin EOF gir");
        printf("?");
        scanf("%d%s%s",&ogrenciNo,&isim,&bolum);

        while (!feof(stdin))
        {
            fprintf(mfPtr,"%d %s %s \n",ogrenciNo,isim,bolum);
            printf("?");
            scanf("%d%s%s",&ogrenciNo,&isim,&bolum);
        }
        fclose(mfPtr);
        
    }
    return 0;
}