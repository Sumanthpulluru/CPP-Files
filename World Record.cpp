#include<bits/stdc++.h>

using namespace std;

int main(){
	float k1,k2,k3,v;
	int n;
	cin>>n;
	while(n!=0)
	{
	
	cin>>k1>>k2>>k3>>v;
	v=k1*k2*k3*v;
	float time=9.58;

	v=100/v;
//	cout<<v<<endl;
	v=round(v*100);
//	cout<<v<<endl;
	v=v/100;	
//	cout<<v<<endl;
	if(v < time){
		cout<<"YES";
	}
	else
	cout<<"NO";
	n--;
	}	
	return 0;
}
