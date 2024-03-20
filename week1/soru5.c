#include<stdio.h>
#define pi 3.14

int square( int r){
    float square=pi*r*r;
    return square;


}
int main()
{
    float yaricap,sonuc;
    printf("yaricap giriniz\n");
    scanf("%f",&yaricap);
    sonuc=square(yaricap);
    printf("alan:%f",sonuc);
    

}


