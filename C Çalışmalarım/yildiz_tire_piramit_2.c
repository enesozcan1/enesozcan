#include<stdio.h>
int main () {
	int i,k,j,satir=0,yildiz,bosluk=0;
	
	printf("Satir sayisi girin:");
	scanf("%d", &satir);
	
	yildiz=2;
	bosluk=satir-1;
	
	for(i=0; i< satir; i++) {
		for(j=0;j < bosluk; j++) {
			printf(" ");
		}
		for(k=0;k < yildiz; k++) {
			if(k==0) {
				printf("/");
			}else if(k==yildiz-1) {
				printf("\\");
			}
			else {
				printf("*");
			}			
		}
			
	printf("\n");
	bosluk--;
	yildiz += 2;	
	}
	
	yildiz-=2;
	bosluk=0;
	
	for(i=0; i< satir; i++) {
		for(j=0;j < bosluk; j++) {
			printf(" ");
		}
		for(k=0;k < yildiz; k++) {
			if(k==0) {
				printf("\\");
			}else if(k==yildiz-1) {
				printf("/");
			}
			else {
				printf("*");
			}
		}
			
	printf("\n");
	bosluk++;
	yildiz -= 2;	
	}
	
return 0;
}
