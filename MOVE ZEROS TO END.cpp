//move all zeros to the end
#include<iostream>
using namespace std;

/*void movetoend(int arr[],int n) //NAIVE IMPLEMENTATION
{
	for(int i=0;i<n;i++)
	{   if(arr[i]==0)
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]!=0)
			{
				swap(arr[j],arr[i]);
			}
		}
	}
}*/
/*void movetoend(int arr[],int n) //more optimized
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			arr[count]=arr[i];
			count++;
		}
	}
	for(int i=n-count+1;i<n;i++)
	{
		arr[count]=0;
	}
	
}*/
void movetoend(int arr[],int n)
{   int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		}
	}
}

int main()
{  int n;
   int arr[n];
   cout<<"NUMBER OF ELEMENT IN AN ARRAY"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
}
movetoend(arr,n);
cout<<"ZEROS ARE MOVED TO END"<<endl;
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
return 0;
	   	
}
