#include<stdio.h>
int main()
{
    int a,b,sonuc=0;
    int *sayi1,*sayi2;
    printf(" a degeri giriniz\n");
    scanf("%d",&a);
    printf(" b degeri giriniz\n");
    scanf("%d",&b);
    sayi1= &a;
    sayi2=&b;
    sonuc=*sayi1+*sayi2;
    printf("toplam:%d",sonuc);
    return 0;

}
