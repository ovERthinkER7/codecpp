#include<iostream>
using namespace std;
int main() {
	int n,r,i,a;
    cout<<"Enter the value of n : ";
	cin>>n;
	a=n-1;
	for(r=1;r<=n;r++)
	{
		if(r==1)
		{
			for( i=1;i<=(2*n)-1;i++)
			cout<<"*";
		}
		else
		{
			for(i=1;i<=a;i++)
			cout<<"*";
			for(i=1;i<=(2*(r-1))-1;i++)
			cout<<" ";
			for(i=1;i<=a;i++)
			cout<<"*";
			a--;
		}
		cout<<endl;
	}
	a=2;
	for(r=n-1;r>=1;r--)
	{
		if(r==1)
		{
			for( i=1;i<=(2*n)-1;i++)
			cout<<"*";			
		}
		else
		{
			for(i=1;i<=a;i++)
			cout<<"*";
			for(i=1;i<=(2*r)-3;i++)
			cout<<" ";
			for(i=1;i<=a;i++)
			cout<<"*";
			a++;
		}
		cout<<endl;
	}
	return 0;
}