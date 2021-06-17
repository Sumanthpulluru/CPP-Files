#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	long res;
	cin>>t;
	int x,a,b;
	while(t--){
		cin>>x>>a>>b;
		res=a+((100-x)*b);
		cout<<res*10<<endl;
	}
	return 0;
	
}
