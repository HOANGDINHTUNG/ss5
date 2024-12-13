#include<stdio.h>
int main(){
	int number, enter_number;
	printf("moi nhap vao mot so cho truoc: ");
	scanf("%d",&number);
	do{
		printf("nhap so: ");
		scanf("%d",&enter_number);
	}while(number!=enter_number);
	printf("ban nhap dung roi!!!!");
	return 0;
}

