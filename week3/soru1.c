/*main fonksiyonu içine verilen sayıya kadar sayıların toplamını*/
#include<stdio.h>
int toplam(int x)
{
    if (x==1)
    {
        return x;
    }else
    {return (toplam(x-1)+x);
    }
  

    
}
int main()
{
    int a,sonuc;
    printf("a degeri giriniz:\n");
    scanf("%d",&a);
    sonuc=toplam(a);
    printf("sonuc:%d",sonuc);
    return 0;

}