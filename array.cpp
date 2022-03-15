#include<stdio.h>
void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	   printf("%d\n",arr[i]);
	}
}
void sum(int arr[], int n)
{
	int sum =0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
}

void insertbegin(int arr, int n, int value)
{   
	for(int i=n;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
    arr[0]=value;
    n+=1;
}



int main()
{  int arr[6]={5,6,7,8,9,10};
   printArray(arr,5);
   sum(arr,5);
   insertbegin(arr,5,11);
   
   
}
