#include<stdio.h>
void swap(int a,int b){
	int temp;
temp=a;
a=b;
b=temp;

 printf("a = %d, b = %d\n", a, b);
}

int main(){
	int a,b;
	printf("enter the value");
	scanf("%d",&a);
	printf("enter the value");
	scanf("%d",&b);
	printf("before swap\n");
    printf("a = %d, b = %d\n", a, b);
	printf("the value after swap   ");
swap(a,b);
	
	return 0 ;
	
}
