#include<iostream>
#include<cstdlib>
using namespace std;

void randm(int arr[], int l)
{
	for(int i=0;i<l;i++)
	{
		int temp = rand()%l;
		int n = arr[i];
		arr[i] = arr[temp];
		arr[temp] = n;
	}

}

void selection_sort(int arr[], int l)
{
	for(int i=0;i<l-1;i++)
	{
		for(int j=i+1;j<l;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}


int main()
{
	int l;
	cout<<"Enter number of elements = ";
	cin>>l;
	int arr[l];
	for(int i=0;i<l;i++)arr[i]=i;
	randm(arr,l);
	cout<<"Array Before Sort"<<endl;
	for(int i=0;i<l;i++)cout<<arr[i]<<endl;
	selection_sort(arr,l);
	cout<<"================Array After selection sort"<<endl;
    for(int i=0;i<l;i++)cout<<arr[i]<<endl;
}
