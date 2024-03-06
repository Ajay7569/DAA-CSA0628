#include<stdio.h>
int primee(int n)
{
	int ct=0;
		for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			ct++;
		}
	}
	if(ct==2)
	{
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
}
int main()
{
	int x;
	printf("Enter any value: ");
	scanf("%d",&x);
	primee(x);

}