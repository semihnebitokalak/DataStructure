/*
Soru 2) Bir sayının üssünü rekürsif(özyinelemeli) bir fonksiyon kullanarak hesaplayan bir program
yazınız. Fonksiyon iki parametre almalıdır: Taban ve üs. Üs 0 ise sonuç 1, üs 1 ise sonuç tabanın
kendisi olacaktır. Üs negatif değer alamaz.
Fonksiyonun prototipi şu şekilde olmalıdır:
- int Usal(int taban, int us);
- rekürsif olarak üs alma işlemi gerçeklişterilmelidir.
- kullanıcıdan üs ve taban değeri alınacak, fonksiyon ile üs hesaplanacak ve sonuç ekrana yazdırılacak.
*/ 

#include<stdio.h>
#include<stdlib.h>

int usAl(int taban,int us){
    if (us==0)
    {
        return 1; // Tabanın sıfırıncı kuvveti 1'dir.
    }
    return taban * usAl(taban,us-1); // recursive adım
}


int main(){
    int taban,us;
    printf("Taban degerini giriniz > ");
    scanf("%d",&taban);
    printf("Üs degerini giriniz > ");
    scanf("%d",&us);

    printf("%d ^ %d = %d\n",taban,us,usAl(taban,us));

    return 0;
}