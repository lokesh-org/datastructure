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


void insertion_sort(int arr[], int l)
{
	for(int i=0;i<l-1;i++)
	{
		if(arr[i+1]<arr[i])
		{
			int temp=arr[i+1];
			int j=i;
			while(j>=0)
			{
				if(arr[j]>temp)arr[j+1] = arr[j];
				else
				{
					arr[j+1] = temp;
					break;
				}
				j--;
			}
			if(j<0)arr[0] = temp;
		}

	}
	
}

int main()
{
int l;
cout<<"Enter Number of elements = ";
cin>>l;
int arr[l];
for(int i=0;i<l;i++)arr[i]=i;
cout<<"===========List of Elements==============="<<endl;
randm(arr,l);
for(int i=0;i<l;i++)cout<<arr[i]<<endl;
insertion_sort(arr,l);
cout<<"===========List of Elements after sorting==============="<<endl;
for(int i=0;i<l;i++)cout<<arr[i]<<endl;


}
