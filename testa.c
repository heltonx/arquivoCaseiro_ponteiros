#include <stdio.h>
#include <stdlib.h>

int x,a,*p,q;

int main(){
	
	x=11;
	//int c[10];
	p=&x;
	q=x;
	a=1+&x;
	
	printf("%d",*p);
	printf("\n");
	printf("%d",&x);
	printf("\n");
	printf("%d",a);
	
	x=6+1;
	printf("\n");
	printf("%d",*p);
	
	printf("\n");
	printf("%d",q);
	
	printf("\n");
	printf("blablabla");

}
