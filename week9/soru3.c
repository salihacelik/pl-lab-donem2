/*3.	Öğrenci numaranızı değer olarak alan ve öğrenci numaranızın her bir basamağındaki rakamları tek veya çift 
olma durumlarına göre farklı dinamik dizilere ekleyen ve dinamik 
dizilerdeki tek ve çift değerleri ayrı ayrı görüntüleyen fonksiyonu c dilinde yazınız.   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ogrenciNumarasi;
    int sonBasamak;
    int *cift , *tek;
    printf("ogrenci numaranizi giriniz:");
    scanf("%d",&ogrenciNumarasi);
    
    for (int i = 0; i < 10; i++)
    {
        sonBasamak=ogrenciNumarasi%10;
        if (sonBasamak%2==0)
        {
           *(cift+i)= sonBasamak;
          

        
        }else{
           *(tek+i)= sonBasamak;
          
        }
        ogrenciNumarasi=ogrenciNumarasi/10;
    }
    printf("%d",*cift);
   

    return 0;   
}