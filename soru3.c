/*. Öncelikle sadece adınız için gerekli olan minimum bellek alanını malloc ile ayırınız. Daha sonra 
soyadınızı da eklemek için bu bellek alanını realloc ile genişletiniz. */
#include<stdio.h>
#include<stdlib.h>


int main(){
    char ad;
    int *ptr1;
    ptr1 = (char *) malloc(6*sizeof(char));  
    char soyad;
    int *ptr2;
    ptr2 = realloc (ptr2, 12 *sizeof(char));
    printf(" adinizi giriniz:");
    scanf("%d",&ad);
    
    printf("soyadinizi giriiniz:");
    scanf("%d",&soyad);
    int *birlestir;
    birlestir=ad;
    birlestir[6]=soyad;
    printf("%c",birlestir);    
}

