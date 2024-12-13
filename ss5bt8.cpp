#include<stdio.h>
int main(){
	int x, y, r, temp, bcnn;
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
	temp=x*y;
	do{
		r=x%y;
		x=y;
		y=r;
		
	}while(y!=0);
	bcnn=temp/x;
	printf("boi chung nho nhat cua hai so la : %d",bcnn);
	return 0;
}
