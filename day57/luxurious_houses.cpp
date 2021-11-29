#include <bits/stdc++.h>
using namespace std;

int maxi(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

int main(){
    int num;
	cin>>num;
	int a[num],b[num];
	for(int i=0;i<num;i++)
		cin>>a[i];
	int save =a[num-1];
	for(int i=num-2;i>=0;i--)
	{
		if(a[i]<=save)
			b[i]=(save-a[i])+1;
		else
		{
			b[i]=0;
			save=a[i];
		}
	}
	for(int i=0;i<=num-2;i++)
		cout<<b[i]<<" ";
	cout<<'0'<<endl;
}