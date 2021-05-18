//unset the bit
#include<iostream>
using namespace std;
int main()
{
	int n,pos,res;
	cin>>n;
	cin>>pos;
	res=n^(pos-1)<<1;
	cout<<res;
}
	
	
		

	


//set bot or not
#include<iostream>
using namespace std;
int main()
{
	int n,pos;
	cin>>n;
	cin>>pos;
	if(n=n&(pos-1)<<1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
		
	

//count the set bits	
#include<iostream>
using namespace std;
int main()
{
	int count=0,n;
	cin>>n;
	while(n!=0)
	{
		if(n&1==1)
		{
			count++;
		}
		n=n>>1;
	}
	cout<<count;
}
