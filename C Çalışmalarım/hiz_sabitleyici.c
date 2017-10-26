/* Enes Özcan - 171044088 */

#include<stdio.h>
int main() {        
	int guncelhiz,hedefhiz;     /* Programda kullanılacak olan tamsayı değişkenleri atandı. */   
	
	printf("Guncel Hiz Degerini Giriniz:");     /* Kullanıcıdan güncel hız değerinin girilmesi istendi. */
	scanf("%d", &guncelhiz);     /* Güncel hız değeri kullanıcıdan alındı. */
	
	printf("Hedef Hiz Degerini Giriniz:");     /* Kullanıcıdan hedef hız değerinin girilmesi istendi. */
	scanf("%d", &hedefhiz);     /* Hedef hız değeri kullanıcıdan alındı. */
	
	printf("Guncel Hiz:%d , Hedef Hiz:%d\n", guncelhiz,hedefhiz);    /* Kullanıcıdan alınan güncel ve hedef hız değerleri ekrana yazdırıldı. */
	
	if(guncelhiz <= hedefhiz) {     /* Kullanıcıdan alınan güncel ve hedef hız değerleri karşılaştırılıp güncel hızın hedef hızdan düşük veya eşit olması koşulu atandı. */
		while(guncelhiz <= hedefhiz) {     /* İlk koşulun sağlanması durumunda güncel ve hedef hız tekrar kontrol edilerek döngüye girme şartı belirtildi. */
			printf("Guncel Hizin Degeri:%d\n", guncelhiz);     /* Güncel hız değeri döngü döndükçe ekrana yazdırıldı. */
		guncelhiz=guncelhiz+1;     /* Döngü sonunda güncel hız değeri bir artırıldı. */
		}
	printf("Guncel hiziniz hedef hiza esittir.");     /* Güncel ve hedef hız eşitlenip döngüden çıkıldığında eşitlendikleri bilgisi ekrana yazdırıldı.	*/
	}
	
	else {
		printf("Hiziniz hedef hizdan yuksektir.\n");     /*  İf koşulunun sağlanmaması durumunda güncel hızın  hedeften büyük olduğu bilgisi ekrana yazdırıldı. */
	}
					
return 0;

}	
	
