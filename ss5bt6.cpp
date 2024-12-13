#include<stdio.h>
int main(){
	int choose;
	do{
		int x, y;
		printf("moi nhap x : ");
		scanf("%d",&x);
		printf("moi nhap y : ");
		scanf("%d",&y);
		printf("CALCULATOR\n1.tong 2 so\n2.hieu 2 so\n3.tich 2 so\n4.thuong 2 so\n5.Thoat\n");
		do{
			printf("Chi duoc chon tu 1 den 5!!! : ");
			scanf("%d",&choose);
		
		}
		while(choose<1||choose>5);
		switch(choose){
			case 1:
				printf("%d + %d = %d\n",x,y,x+y);
				break;
			case 2:
				printf("%d - %d = %d\n",x,y,x-y);
				break;
			case 3:
				printf("%d * %d = %d\n",x,y,x*y);
				break;
			case 4:
				printf("%d / %d = %d\n",x,y,x/y);
				break;
			case 5:
				break;  
		}
	}
	while(choose!=5);
	printf("ket thuc chuong trinh!!!");
	return 0;
}
