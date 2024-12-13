#include<stdio.h>
int main(){
	int n, nhan;
	do{
		
		printf("chon so bat ki tu 1 den 9 : ");
		scanf("%d",&n);
	}
	while(n<0||n>10);
	for(int i=1; i<=9;i++){
		nhan=n*i;
		printf("%d * %d= %d\n",n,i,nhan);
	}
	return 0;
}
