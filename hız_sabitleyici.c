/* Enes Özcan - 171044088 */

#include<stdio.h>
int main() {        
	int guncelhiz,hedefhiz;     /* Programda kullanýlacak olan tamsayý deðiþkenleri atandý. */   
	
	printf("Guncel Hiz Degerini Giriniz:");     /* Kullanýcýdan güncel hýz deðerinin girilmesi istendi. */
	scanf("%d", &guncelhiz);     /* Güncel hýz deðeri kullanýcýdan alýndý. */
	
	printf("Hedef Hiz Degerini Giriniz:");     /* Kullanýcýdan hedef hýz deðerinin girilmesi istendi. */
	scanf("%d", &hedefhiz);     /* Hedef hýz deðeri kullanýcýdan alýndý. */
	
	printf("Guncel Hiz:%d , Hedef Hiz:%d\n", guncelhiz,hedefhiz);    /* Kullanýcýdan alýnan güncel ve hedef hýz deðerleri ekrana yazdýrýldý. */
	
	if(guncelhiz <= hedefhiz) {     /* Kullanýcýdan alýnan güncel ve hedef hýz deðerleri karþýlaþtýrýlýp güncel hýzýn hedef hýzdan düþük veya eþit olmasý koþulu atandý. */
		while(guncelhiz <= hedefhiz) {     /* Ýlk koþulun saðlanmasý durumunda güncel ve hedef hýz tekrar kontrol edilerek döngüye girme þartý belirtildi. */
			printf("Guncel Hizin Degeri:%d\n", guncelhiz);     /* Güncel hýz deðeri döngü döndükçe ekrana yazdýrýldý. */
		guncelhiz=guncelhiz+1;     /* Döngü sonunda güncel hýz deðeri bir artýrýldý. */
		}
	printf("Guncel hiziniz hedef hiza esittir.");     /* Güncel ve hedef hýz eþitlenip döngüden çýkýldýðýnda eþitlendikleri bilgisi ekrana yazdýrýldý.	*/
	}
	
	else {
		printf("Hiziniz hedef hizdan yuksektir.\n");     /*  Ýf koþulunun saðlanmamasý durumunda güncel hýzýn  hedeften büyük olduðu bilgisi ekrana yazdýrýldý. */
	}
					
return 0;

}	
	
