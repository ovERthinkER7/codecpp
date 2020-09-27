#include<iostream>
using namespace std;
int main() {
	int n,row,i;
    cout<<"Enter the value of n : ";
	cin>>n;
	for(row=1;row<=n;row++)
	{
		if(row==(n/2)+1)
		{
			for(i=1;i<=n;i++)
			cout<<"*";
		}
		else if (row==1)
		{
			cout<<"*";
			for(i=1;i<=(n/2)-1;i++)
			cout<<" ";
			for(i=1;i<=(n/2)+1;i++)
			cout<<"*";
		}
		else if (row==n)
		{
			for(i=1;i<=(n/2)+1;i++)
			cout<<"*";
			for(i=1;i<=(n/2)-1;i++)
			cout<<" ";
			cout<<"*";
		}
		else if (row>=2 && row<=n/2)
		{
			cout<<"*";
			for(i=1;i<=(n/2)-1;i++)
			cout<<" ";
			cout<<"*";
		}
		else
		{
			for(i=1;i<=n/2;i++)
			cout<<" ";
			cout<<"*";
			for(i=1;i<=(n/2)-1;i++)
			cout<<" ";
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}