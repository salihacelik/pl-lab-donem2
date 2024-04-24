/*2. Adınız soyadınız için gerekli minimum char bellek alanını malloc fonksiyonu kullanarak ayırınız ve 
içerisine strcpy fonksiyonunu kullanarak adınızı ve soyadınızı arada boşluk bırakarak yazınız. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char ad;
    char soyAd;

    printf("adinizi giriniz:");
    scanf("%s",&ad);
    printf("soyadinizi giriniz:");
    scanf("%s",&soyAd);

    char *ptr;
    ptr = (char *) malloc(13*sizeof(char));
    strcpy(ptr,"saliha ");
    strcpy(ptr+7,"celik");


    printf("%s",ptr);



}