/*1) Bir sınıftaki öğrencilerin numarası, adı, vize notu ve final notu bilgileri üzerinde 
çeşitli işlemler yapabilecek bir program yazınız. Programın özellikleri aşağıda 
verilmiştir: 
a) Program bir ana menü ile açılacak. Menüde olacak seçenekler şu şekildedir: 
1- Yeni Kayıt Ekleme 
2- Kayıt Listeleme 
3- Kayıt Güncelleme 
4- Sınıf Ortalaması Hesapla 
5- Ortalamaya Göre En Başarılı Öğrenci Bilgisini Göster 
b) Program hafızadan minimum miktarda alan tüketmelidir. Bunun için dinamik 
hafıza yöntemi gerçekleştiriniz. Örneğin ne kadar öğrenci bilgisi tutuluyorsa 
hafızadan o kadar alan tüketilmelidir. 
c) Kayıt listeleme seçeneği numaraya göre ve nota göre olabilir. Kullanıcı 
öğrencileri vize veya final notuna uygulanacak üst veya alt limitlere göre 
listeleyebilmelidir. 
d) Kayıt güncelleme öğrenci numarasına göre olacak.*/


#include<stdio.h>
#include<stdlib.h>
struct ogrenci
{
    char ad[20],soyad[20];
    int no,vize,final;
    struct ogrenci *next;
};
typedef struct ogrenci ogrenciListe;
ogrenciListe *head;

ogrenciListe* kayitEkle()
{
    int ogrenciSayisi;
    ogrenciListe *p;
    printf("ogrenci sayisi giriniz?\n");   scanf("%d",&ogrenciSayisi);
    for (int i = 0; i < ogrenciSayisi; i++)
    {
        if (i == 0)
        {
            head = (ogrenciListe*)malloc(sizeof(struct ogrenci));
            p=head;
        }
        else{
            p->next = (ogrenciListe*)malloc(sizeof(struct ogrenci));
            p = p->next;
        }
        printf("ogrenci adi:");  scanf("%s",p->ad);
        printf("ogrenci soyadi:");  scanf("%s",p->soyad);
        printf("ogrenci numarasi:");  scanf("%s",p->no);
        printf("ogrenci vizesi:");  scanf("%s",p->vize);
        printf("ogrenci finali:");  scanf("%s",p->final);
    }
    p->next = NULL;
    return head;
}

void listele (ogrenciListe *head)
{
    int counter =1;
    ogrenciListe *p;
    p = head;
    while (p->next != NULL)
    {
        printf("%d-) %d %s %s \nvize:%d final:%d\n",counter,p->no,p->ad,p->soyad,p->vize,p->final);
        counter++;
        p = p->next;
    }
    
}