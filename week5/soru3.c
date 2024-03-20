#include<stdio.h>
#include<stdlib.h>
 main()
{
    int boyut;
    printf("boyut degeri giriniz:");
    scanf("%d",&boyut);
     int *dizi = (int *)malloc(boyut * sizeof(int));
     for (int i = 0; i < boyut; i++)
     {
        printf("dizinin %d. degerini giriniz:",i+1);
        scanf("%d",&dizi[i]);
     }
     for (int i = 0; i < boyut; i++)
     {
        printf("dizi[%d]=%d\n",i,dizi[i]);
     }
     
     
}