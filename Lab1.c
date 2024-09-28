// Evet arkadaşlar bu repomuz data structure dersimizde işlediğimiz konuları ve lab derslerinde çözdüğümüz soruları kapsayacaktır.
// Şimdiden teşekkür ederim. 
/*
Karmaşık sayılar, reel(gerçek) ve sanal(imajiner) kısımlardan oluşan sayılardır.
Aşağıdaki gibi bir struct kullanarak iki karmaşık sayıyı toplamak için bir fonksiyon yazınız.
- Karmaşık sayı yapısında reel ve sanal kısımları temsil eden iki tam sayı bulunmalıdır.
- add isimli bir fonksiyon yazılacak ve bu fonksiyon iki karmaşık sayıyı topladıktan sonra
sonucu yine bir karmaşık sayı olarak döndürecektir.
- Karmaşık sayı aşağıdaki formüle göre tanımlanır:
    z = a + bi
    a = reel(gerçek) kısım
    b = imajiner(sanal) kısım
*/

#include<stdio.h>
#include<stdlib.h>

// Karmaşık sayı yapısı;
typedef struct{
    int real;
    int imajiner;
}complex;

// Burada bir struct yapısı oluşturduk ve complex diye isimlendirdik.
// Complex türü bünyesinde iki değişken tutuyor real ve imajiner kısmı.

complex add(complex n1, complex n2){
    complex result;
    // Burada result'ın ulaşabildiği iki değer vardır. Real and Imajiner
    // Bu değerlere ulaşabilmek için "." kullanıyoruz ve değer ataması yapıyoruz.
    result.real = n1.real + n2.real;
    result.imajiner = n1.imajiner + n2.imajiner;
    return result;
}

int main(){
    complex n1,n2,sum;

    // İlk karmaşık sayıyı gir
    printf("Birinci sayinin real kismini giriniz.");
    scanf("%d",&n1.real);
    printf("Birinci sayinin imajiner kismini giriniz.");
    scanf("%d",&n1.imajiner);

    // ikinci karmaşık sayıyı gir
    printf("İkinci sayinin real kismini giriniz.");
    scanf("%d",&n2.real);
    printf("İkinci sayinin imajiner kismini giriniz.");
    scanf("%d",&n2.imajiner);

    // Karmaşık sayıları topla
    sum = add(n1,n2);

    // Sonucu yazdır
    printf("Toplam = %d + %di\n",sum.real,sum.imajiner);

    return 0;
}
// complex bir yapı tanımıdır ve karmaşık sayıların reel ve imajiner kısımlarını tutar.
// add fonksiyonu, iki karmaşık sayıyı toplar ve sonuç olarak bir karmaşık sayı döndürür.
// main fonksiyonunda kullanıcıdan girdiler alınır, toplama yapılır ve sonuç ekrana yazdırılır.





