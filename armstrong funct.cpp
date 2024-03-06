#include<stdio.h>
int armstrong(int n)
{
	int a,b=0,c=n;
		while(n>0)
	{
		a=n%10;
		b=b+(a*a*a);
		n=n/10;
	}
	if(c==b)
	{
		printf("%d is an armstrong number",c);
	}
	else{
		printf("%d is not an armstrong number",c);
	}
}
int main()
{
	int x;
	printf("Enter the value: ");
	scanf("%d",&x);
    armstrong(x);
}
