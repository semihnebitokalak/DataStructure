// Faktöriyel hesabını recursive ile yazmaya çalışalım.
// Ana case imiz 0! dir ve bu da 1 e eşittir.

#include<stdio.h>

int fac(int sayi){
    // Burada sayının 0 a eşit olup olmadığını kontrol ediyoruz ve recursive yapısına giriyoruz.
    if (sayi==0) 
    {
        return 1; // sayı 0 a eşit olduğu zaman 1 değeri döndürecek.
    }
    else
    {
        return sayi * fac(sayi-1);
        // burada sayı 1 küçülüp recursive de 0 a kadar sürekli tekrar edecek.
        // Yani 5! önce 5*4! olucak ondan sonra 4! = 4*3! olacak.
        // Bu şekilde çarpma işlemleri yapılacak.
    }
    
}

int main(){
    int sayi;
    printf("Lütfen fac alinacak sayiyi giriniz.");
    scanf("%d",&sayi);
    printf("girilen sayinin fac hesabi = %d\n",fac(sayi));
    // En sonda da istenilen sayının fac değeri ekrana yazdırılacak.

    return 0;
}