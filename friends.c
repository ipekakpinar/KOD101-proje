#include <stdio.h>
#include <conio.h>

 
int toplam = 0;
char giris;
char a=0;


void deger(){

while(a!=1){

printf("Cevabinizi Giriniz:\n");
giris=getch();

switch(giris){

 case 'A':
 case 'a': toplam+=0;
           a=1;
           break;

 case 'B':
 case 'b': toplam+=4;
           a=1;
           break;

 case 'C':
 case 'c': toplam+=8; 
           a=1; 
           break;

 case 'D':
 case 'd': toplam+=10;
           a=1;
           break;


 default: printf("A, B, C, D harflerinden birini giriniz!!!!\n");
          break;

}

}


}

int main(){

printf("Arkadaslarin senin icin degerlidir cunku...?\n");
printf("A  Beni oldugum gibi severler\n B  Her durumda yanimdadirlar\n C  Onlar benim ailem\n D Beni uyarmaktan cekinmezler\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("2- Yemeginden bir parca istendi, napardın?\n");
printf("A  Kimseyle paylasmam\n B  Sevmedigim kismindan veririm\n C  Karsiliginda o da bana verirse veririm\n D Aynisindan ona ismarlarim\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("3- Arkadaslarin genelde hakkinda ne soyler?\n");
printf("A  Garip ama iyi biridir.\n B  Harika bir dinleyicidir\n C  Eglenceli biridir.\n D Cok iyi sir tutar.\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("4- Kotu anilari hatirlamak seni nasıl etkiler?\n");
printf("A  Kotu seyleri cabuk unuturum\n B  Bana fazlasiyla aci verir\n C  İyi sakalar yapmamda yardimci olur\n D Beni daha guclu biri yapar.\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("5- Tum planlarin mahvoldugunda ne yaparsin?\n");
printf("A  Duzeltmeye calisirken daha kotu bir hal alir\n B  Panikten ne yapacagimi bilemem\n C  Her seyi salarim\n D Her zaman bir B planim vardir\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("6- Sana gore bir arkadasta olmasi gereken en onemli ozellik nedir?\n");
printf("A  Herkesten farkli olmasi\n B  Duygusal olmasi\n C  Esprili olmasi\n D Anlayisli olmasi\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("7- Hangisini yaparken daha mutlu hissedersin?\n");
printf("A  Yemek yerken\n B  Alisveris yaparken\n C  Dizi izlerken\n D Kendimi gelistirken\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("8- Hayattaki amacin nedir?\n");
printf("A  Zengin olmak\n B  Basarili olmak\n C  Her zaman sevdiklerimle beraber olmak\n D Tutkularimi kesfedip dunyayi daha iyi bir hale getirirken kullanmak\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("9- Kendini en cok hangi elemente bagli hissedersin?\n");
printf("A  Ruzgar cunku ozgur ruhlu biriyim\n B  Ates cunku tutkulu ve yogun bir yapiya sahibim\n C  Su cunku sogukkanli ve sakin davranabilirim \n D Toprak cunku gercekci ve pratigim\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);

printf("10- En korktugun sey nedir?\n");
printf("A  Reddedilmek\n B  Sevilmemek\n C  Yalnız kalmak\n D Olmek\n");
deger(giris);
a=0;
printf("%d\n",toplam);
printf("%d\n",a);


//------------------------------------------------------------------------------------------------




return 0;
}
