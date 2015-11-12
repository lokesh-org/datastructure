#include<iostream>
#include<cstdlib>
using namespace std;

void randm(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		int m=rand()%n;
		int temp=arr[i];
		arr[i]=arr[m];
		arr[m]=temp;
	}

}

void bubble_sort(int arr[], int n)
{
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)arr[i]=i;
	randm(arr,n);
	for(int i=0;i<n;i++)cout<<arr[i]<<endl;
	cout<<"================After Bubble Sort=================="<<endl;
	bubble_sort(arr,n);
	for(int i=0;i<n;i++)cout<<arr[i]<<endl;
}

