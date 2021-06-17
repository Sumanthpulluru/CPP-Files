#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n,x,k,t;
	cin>>t;
	while(t--){
		cin>>n>>x>>k;
		if(x%k==0|| ((n+1)-x)%k==0 ){
		cout<<"YES"<<endl;
		}
		else{
		 cout<<"NO"<<endl;
		}
	}
}//|| ((n+1)-x)%k==0 
