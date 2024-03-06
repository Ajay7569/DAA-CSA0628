#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array:  ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the values of the array:");;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	int max=ar[0];
	for(int i=0;i<n;i++)
	{
		if(ar[i]>max){
			max=ar[i];
		}
	}
	printf("The Largest element in the array: %d",max);
}
