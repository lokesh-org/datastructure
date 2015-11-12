#include<iostream>
#include<cstdlib>
using namespace std;

void randm(int arr[], int l)
{
	for(int i=0;i<l;i++)
	{
		int temp = rand()%l;
		int m = arr[i];
		arr[i] = arr[temp];
		arr[temp] = m;
	}

}

void quick_sort(int arr[], int l, int h)
{
	if(l<h)
	{	
		int s = l-1;
		int t = l;
		while(t<h)
		{
			if(arr[t]<arr[h])
			{
				int temp = arr[t];
				arr[t] = arr[s+1];
				arr[s+1] = temp;
				s++;

			}
			t++;
		}
		int temp = arr[s+1];
		arr[s+1] = arr[h];
		arr[h] = temp;
		s++;
		quick_sort(arr,l,s-1);
		quick_sort(arr,s+1,h);
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
	cout<<"Elements before sort"<<endl;
	for(int i=0;i<l;i++)cout<<arr[i]<<endl;
	cout<<"Elements after sort"<<endl;
	quick_sort(arr,0,l-1);
	for(int i=0;i<l;i++)cout<<arr[i]<<endl;
}
