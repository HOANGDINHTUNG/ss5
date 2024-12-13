#include<stdio.h>
int main(){
	int x, y, z, temp, choose;
	printf("moi nhap x : ");
	scanf("%d",&x);
	printf("moi nhap y : ");
	scanf("%d",&y);
	printf("moi nhap z : ");
	scanf("%d",&z);
	printf("MENU\n1.nhap 3 so\n2.tong 3 so\n3.trung binh cong 3 so\n4.so nho nhat\n5.so lon nhat\n6.thoat\n");
	if(x>y){
		temp=x;
		x=y;
		y=temp;
	}
	if(x>z){
		temp=x;
		x=z;
		z=temp;
	}
	if(y>z){
		temp=y;
		y=z;
		z=temp;
	}
	do{
		do{
			printf("Chi duoc chon tu 1 den 6!!! : ");
			scanf("%d",&choose);
			
		}
	
		while(choose<1||choose>6);
		switch(choose){ 
			case 1:
				printf("moi nhap x : ");
				scanf("%d",&x);
				printf("moi nhap y : ");
				scanf("%d",&y);
				printf("moi nhap z : ");
				scanf("%d",&z);
				break;
			case 2:
				printf("%d + %d + %d = %d\n",x,y,z,x+y+z);
				break;
			case 3:
				printf("(%d + %d +%d)/3= %d\n",x,y,z,(x+y+z)/3);
				break;
			case 4:
				printf("so nho nhat la %d\n",x);
				break;
			case 5:
				printf("so lon nhat la %d\n",z);
				break; 
		}
	}
	while(choose!=6);
	printf("ket thuc chuong trinh!!!");
	return 0;
}
