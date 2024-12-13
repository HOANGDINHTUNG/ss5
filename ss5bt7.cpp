#include<stdio.h>
int main(){
	int x, y, r;
	do{
		printf("moi nhap so nguyen duong x: ");
		scanf("%d",&x);
	}
	while(x<=0);
	do{
		printf("moi nhap so nguyen duong y: ");
		scanf("%d",&y);
	}
	while(y<=0);
	do{
		r=x%y;
		x=y;
		y=r;
		
	}while(y!=0);
	printf("uoc chung lon nhat cua hai so la : %d",x);
	
}
