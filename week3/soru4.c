/*Main fonksiyonu içerisinde verilen iki pozitif sayıyı kullanarak bu sayıların 
en büyük ortak bölenini rekürsif bir fonksiyon kullanarak bulunuz.*/
#include <stdio.h>

char f1(int b);
main()
{
    char a;
    a=f1(10);
    printf("%c",a);
}
char f1(int b)
{
	printf("a");
    if(b<=8)
        return 'a';
    else
    {
        printf("a");
        f1(b--);
    }
}
