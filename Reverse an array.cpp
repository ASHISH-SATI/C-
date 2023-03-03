#include<iostream>
using namespace std;
void rev(int arr[], int n)
{
	int low=0, high=n-1;
	while(low<high)
	{
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
int main()
{   int n;
	int arr[n];
	cout<<"PLEASE ENTER NUMBER OF ELEMENTS IN AN ARRAY"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rev(arr,n);
	cout<<"REVERSED ARRAY"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
