/* Enes �zcan - 171044088 */

#include<stdio.h>
int main() {        
	int guncelhiz,hedefhiz;     /* Programda kullan�lacak olan tamsay� de�i�kenleri atand�. */   
	
	printf("Guncel Hiz Degerini Giriniz:");     /* Kullan�c�dan g�ncel h�z de�erinin girilmesi istendi. */
	scanf("%d", &guncelhiz);     /* G�ncel h�z de�eri kullan�c�dan al�nd�. */
	
	printf("Hedef Hiz Degerini Giriniz:");     /* Kullan�c�dan hedef h�z de�erinin girilmesi istendi. */
	scanf("%d", &hedefhiz);     /* Hedef h�z de�eri kullan�c�dan al�nd�. */
	
	printf("Guncel Hiz:%d , Hedef Hiz:%d\n", guncelhiz,hedefhiz);    /* Kullan�c�dan al�nan g�ncel ve hedef h�z de�erleri ekrana yazd�r�ld�. */
	
	if(guncelhiz <= hedefhiz) {     /* Kullan�c�dan al�nan g�ncel ve hedef h�z de�erleri kar��la�t�r�l�p g�ncel h�z�n hedef h�zdan d���k veya e�it olmas� ko�ulu atand�. */
		while(guncelhiz <= hedefhiz) {     /* �lk ko�ulun sa�lanmas� durumunda g�ncel ve hedef h�z tekrar kontrol edilerek d�ng�ye girme �art� belirtildi. */
			printf("Guncel Hizin Degeri:%d\n", guncelhiz);     /* G�ncel h�z de�eri d�ng� d�nd�k�e ekrana yazd�r�ld�. */
		guncelhiz=guncelhiz+1;     /* D�ng� sonunda g�ncel h�z de�eri bir art�r�ld�. */
		}
	printf("Guncel hiziniz hedef hiza esittir.");     /* G�ncel ve hedef h�z e�itlenip d�ng�den ��k�ld���nda e�itlendikleri bilgisi ekrana yazd�r�ld�.	*/
	}
	
	else {
		printf("Hiziniz hedef hizdan yuksektir.\n");     /*  �f ko�ulunun sa�lanmamas� durumunda g�ncel h�z�n  hedeften b�y�k oldu�u bilgisi ekrana yazd�r�ld�. */
	}
					
return 0;

}	
	
