#include<stdio.h>
int main(){
	int n;
	printf("nhap vao 1 so nguyen duong tu 1 den 10:");
	scanf("%d",&n);
	if(n<1||n>10){
		printf("so nguyen duong khong hop le \n:");
	}else{
			printf("bang cuu chuong cua %d:\n",n);
		for(int i=1; i<=n; i++){
			printf("%d*%d=%d\n",n,i,n*i);
					     }
	    	}
return 0;
}
