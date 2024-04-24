/*1. Toplam eleman sayısını kullanıcıdan alarak bu sayı kadar bellekten calloc fonksiyonunu kullanarak 
gerekli yeri alınız. Ayırdığınız bu bellek alanına eleman sayısı kadar değeri kullanıcıdan alınız. Daha 
sonra girilen en büyük değeri tanımladığınız işaretçi değişkeni kullanarak bulunuz ve ekrana 
yazdırınız.*/ 

#include<stdio.h>
#include<stdlib.h>
int buyukDeger(int *iptr,int elemanSayisi)
{
    int max=iptr[elemanSayisi-1];
    if (elemanSayisi==1)
    {
        return max;
    
    }else{
        for (int i = 0; i < elemanSayisi; i++)
        {
            if (iptr[i]>max)
            {
                max=iptr[i];
            
            }
            
        }
        return max;
        
    }
    

}
int main()
{
    int elemmanSayisi;
    printf(" eleman sayisi giriniz:");
    scanf("%d",&elemmanSayisi);

    int *iptr;
    iptr=(int *)calloc(elemmanSayisi,sizeof(int));

    for (int i = 0; i < elemmanSayisi; i++)
    {
        printf("dizinin %d. elemanini giriniz:",i+1);
        scanf("%d",&*(iptr+i));

    }

    printf("en buyuk deger:%d",buyukDeger(iptr,elemmanSayisi));
    


}