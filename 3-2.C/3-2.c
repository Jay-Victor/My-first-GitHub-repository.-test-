#include<stdio.h>
int main(void)
{
	int x,a,b,c,y;
	printf("Input x:");
	scanf("%d",&x);
	x=abs(x);//取绝对值 
	a=x/100;//取百位数 
	b=x%100/10;//取十位数 
	c=x%10;//取个位数 
	y=c*100+b*10+a;//计算逆数列 
	printf("y=%d\n",y);
}
