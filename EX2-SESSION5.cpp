#include<stdio.h>
int main(){
	int a=17;
	int b;
	do{
		printf("nhap vao 1 so nguyen bat ki:");
		scanf("%d",&b);
		if(a!=b){
			printf("so ban nhap khong khop vui long nhap lai \n");
			}
	}while(a!=b);
		printf("ban da nhap dung so \n");
		return 0;
	
}
