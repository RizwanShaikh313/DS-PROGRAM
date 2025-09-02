#include<stdio.h>
int main(){
 int i,sum=1,n;
 printf("enter a number ");
 scanf("%d",&n);
for(i=1;i<=n;i++){
	sum=sum+i*i-1;}
	
printf("sum of n natural number is %d ",sum);
return 0;
}

