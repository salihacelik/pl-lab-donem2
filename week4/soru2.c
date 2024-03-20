/*2.	Dizinin adresini ve eleman sayısını parametre olarak alan ve dizinin
 içinde kaç tane tek sayı olduğunu döndüren recursive bir fonksiyon yazınız.*/
#include<stdio.h>
int tek(int dizim[],int size)
{
    if (size<0)
    {
        return 0;
    }
    if(dizim[size]%2==1)
    {
        return 1+tek(dizim,size-1);
    }
    else{
        tek(dizim,size-1);
    }
}
int main()
{
    int a;
    printf(" a degeri giriniz:");
    scanf("%d",&a);
    int dizi[a];
    printf("degerleri giriniz:");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&dizi[i]);
    }
    
    printf("%d tane tek sayi vardir",tek(dizi,a-1));


}